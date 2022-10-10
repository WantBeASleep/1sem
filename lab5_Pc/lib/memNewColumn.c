#include <stdlib.h>
#include <string.h>

int **memNewColumn(int **data, int *datasize){
    int **newData;
    newData = (int **)malloc(sizeof(int *) * datasize[0]);
    for (int i=0; i<datasize[0]; i++){
        newData[i] = (int *)malloc(sizeof(int) * datasize[1] + 1);
        memcpy(newData[i], data[i], sizeof(int) * datasize[1]);
        free(data[i]);
    }
    datasize[1] += 1;
    return newData;
}