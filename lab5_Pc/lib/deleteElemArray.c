#include <stdlib.h>

int *deleteElemArray(int *data, int size, int index){
    int *newArray = (int *)malloc(sizeof(int) * (size-1));
    int globI;
    for(globI=0; globI<index; globI++){
        newArray[globI] = data[globI];
    }
    for(int i=index+1; i<size; i++){
        newArray[globI] = data[i];
        globI++;
    }
    free(data);
    return newArray;
}