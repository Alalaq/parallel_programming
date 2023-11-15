#include <iostream>
#include <mpi.h>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int my_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

    int process_count;
    MPI_Comm_size(MPI_COMM_WORLD, &process_count);

    const int array_size = 10;
    int my_array[array_size];
    int other_array[array_size];
    int result_array[array_size];

    int alpha = 5;
    int beta = 6;

    if (my_rank == 0) {
        for (int i = 0; i < array_size; i++) {
            my_array[i] = 1 + i;
            other_array[i] = 2 * i;
        }

        std::cout << "alpha = " << alpha << std::endl;
        std::cout << "beta = " << beta << std::endl;

        std::cout << "Initial vector my_array: ";
        for(int i : my_array)  {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        std::cout << "Initial vector other_array: ";
        for(int i : other_array) {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        for (int i = 1; i < process_count; i++) {
            MPI_Send(my_array, array_size, MPI_INT, i, 0, MPI_COMM_WORLD);
            MPI_Send(other_array, array_size, MPI_INT, i, 0, MPI_COMM_WORLD);
        }
    }
    else {
        MPI_Recv(my_array, array_size, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        MPI_Recv(other_array, array_size, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    }

    for (int i = 0; i < array_size; i++) {
        result_array[i] = alpha * my_array[i] + beta * other_array[i];
    }

    if (my_rank == 0) {
        for (int i = 1; i < process_count; i++) {
            MPI_Recv(result_array, array_size, MPI_INT, i, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        }

        std::cout << "Result on process 0:" << std::endl;
        for(int i : result_array) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    else {
        MPI_Send(result_array, array_size, MPI_INT, 0, 0, MPI_COMM_WORLD);
    }

    MPI_Finalize();

    return 0;
}
