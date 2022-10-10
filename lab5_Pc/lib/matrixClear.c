#include <stdlib.h>

void matrixClear(int **data, int *datasize){
    if ((datasize[0] == 0) && (datasize[1] == 0)) return;
    for (int i=0; i<datasize[0]; i++){
        free(data[i]);
    }
    free(data);
    return;
}