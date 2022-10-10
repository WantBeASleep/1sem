#include <stdlib.h>
#include <string.h>

#include "../h/lib.h"

int **origCpy(int **origData, int *origSize, int *workSize){
    workSize[0] = origSize[0];
    workSize[1] = origSize[1];
    int **workData;
    workData = (int **)malloc(sizeof(int *) * origSize[0]);
    for (int i=0; i<origSize[0]; i++){
        workData[i] = (int *)malloc(sizeof(int) * origSize[1]);
        memcpy(workData[i], origData[i], sizeof(int) * origSize[1]);
    }
    return workData;
}