#include <stdio.h>
#include <mpi.h>

int main(int argc, char *argv[]) {
    MPI_Init(&argc, &argv);
    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    int numberToSend = rank * 10;
    int receivedNumbers[size];

    MPI_Gather(&numberToSend, 1, MPI_INT, receivedNumbers, 1, MPI_INT, 0, MPI_COMM_WORLD);

    if (rank == 0) {
        for (int i = 0; i < size; i++) {
            printf("Received number from process %d: %d\n", i, receivedNumbers[i]);
        }
    }

    MPI_Finalize();
    return 0;
}
