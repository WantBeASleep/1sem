#include <stdio.h>
#include <stdlib.h>

int **inputConsole(int *datasize){
    printf("Enter the matrix size : %% %% format : ");
    scanf("%d %d", &(datasize[0]), &(datasize[1]));
    int **localdata = NULL;
    localdata = (int **)malloc(datasize[0] * sizeof(int *));
    for (int i=0; i<datasize[0]; i++){
        localdata[i] = (int *)malloc(datasize[1] * sizeof(int));
        for (int j=0; j<datasize[1]; j++){
            printf("A(%d,%d) = ", i, j);
            scanf("%d", &(localdata[i][j]));
        }
    }
    return localdata;
}