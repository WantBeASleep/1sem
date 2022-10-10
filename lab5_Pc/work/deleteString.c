#include <stdlib.h>
#include <stdio.h>

int **deleteString(int **data, int *datasize){
    int index;
    printf("indexes - %dx%d\nenter the delete index : ", datasize[0]-1, datasize[1]-1);
    scanf("%d", &index);

    int **newData;
    newData = (int **)malloc(sizeof(int *) * datasize[0]-1);
    int globI;
    for(globI=0; globI<index; globI++){
        newData[globI] = data[globI];
    }
    free(data[index]);
    for (int i=index+1; i<datasize[0]; i++){
        newData[globI] = data[i];
        globI++;
    }
    datasize[0] -= 1;
    return newData;
}