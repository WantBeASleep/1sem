#include <stdlib.h>
#include <stdio.h>

#include "../h/lib.h"

int **addString(int **data, int *datasize){
    int *string;
    string = (int *)malloc(sizeof(int) * datasize[1]);

    for (int i=0; i<datasize[1]; i++){
        printf("newStr elem of %d column - ", i);
        scanf("%d", &(string[i]));
    }

    int index;
    printf("indexes - %dx%d\nindex of new string - ", datasize[0]-1 , datasize[1]-1);
    scanf("%d", &index);

    data = memNewString(data, datasize);

    for (int i=datasize[0]-1; i>index; i--){
        data[i] = data[i-1];
    }
    data[index] = string;
    return data;
}