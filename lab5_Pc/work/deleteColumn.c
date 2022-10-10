#include <stdlib.h>
#include <stdio.h>
#include "../h/lib.h"

int **deleteColumn(int **data, int *datasize){
    int index;
    printf("indexes - %dx%d\nenter the delete index : ", datasize[0]-1, datasize[1]-1);
    scanf("%d", &index);
    for(int i=0; i<datasize[0]; i++){
        data[i] = deleteElemArray(data[i], datasize[1], index);
    }
    datasize[1] -= 1;
    return data;
}