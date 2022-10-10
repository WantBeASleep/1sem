#include <stdlib.h>
#include <string.h>

int **memNewString(int **data, int *datasize){
    int **newData;
    newData = (int **)malloc(sizeof(int *) * (datasize[0] + 1));
    for (int i=0; i<datasize[0]; i++){
        newData[i] = data[i];
    }
    datasize[0] += 1;
    return newData;
}