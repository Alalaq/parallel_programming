#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <mpi.h>

int main(int argc, char *argv[]) {
    MPI_Init(&argc, &argv);
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    if (rank == 0) {
        // Генерация массива на процессе 0
        int a[10];
        srand(time(NULL));
        for (int i = 0; i < 10; i++) {
            a[i] = rand() % 100;
        }

        // Отправка массива на процесс 1
        MPI_Send(a, 10, MPI_INT, 1, 0, MPI_COMM_WORLD);
    } else if (rank == 1) {
        // Принятие массива на процессе 1
        int received[10];
        MPI_Recv(received, 10, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);

        // Печать принятого массива на процессе 1
        for (int i = 0; i < 10; i++) {
            printf("Received: %d\n", received[i]);
        }
    }

    MPI_Finalize();
    return 0;
}
