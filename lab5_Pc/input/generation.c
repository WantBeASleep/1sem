#include <stdlib.h>

int **generation(int *datasize){
    int **localdata;
    localdata = (int **)malloc(datasize[0] * sizeof(int *));
    for (int i=0; i<datasize[0]; i++){
        localdata[i] = (int *)malloc(datasize[1] * sizeof(int));
        for (int j=0; j<datasize[1]; j++){
            localdata[i][j] = rand() % 100;
        }
    }
    return localdata;
}