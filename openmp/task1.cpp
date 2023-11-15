#include <stdio.h>
#include <mpi.h>

int main(int argc, char *argv[]) {
    MPI_Init(&argc, &argv);
    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if (size != 4) {
        if (rank == 0) {
            printf("This program should be run with 4 processes.\n");
        }
    } else {
        printf("Hello, World! from process %d of %d\n", rank, size);
    }

    MPI_Finalize();
    return 0;
}
