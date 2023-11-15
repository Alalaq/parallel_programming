#include <stdio.h>
#include <mpi.h>

int main(int argc, char *argv[]) {
    MPI_Init(&argc, &argv);
    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    int dataToSend = 100 * (rank + 1);

    if (rank == 1) {
        for (int dest = 0; dest < size; dest++) {
            if (dest != rank) {
                MPI_Send(&dataToSend, 1, MPI_INT, dest, 0, MPI_COMM_WORLD);
            }
        }
    } else {
        MPI_Status status;
        int receivedData;
        MPI_Recv(&receivedData, 1, MPI_INT, 1, 0, MPI_COMM_WORLD, &status);
        printf("Process %d received data: %d\n", rank, receivedData);
    }

    MPI_Finalize();
    return 0;
}
