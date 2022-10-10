#include <stdlib.h>
#include <stdio.h>

#include "../h/lib.h"

int **addColumn(int **data, int *datasize){
    int index;
    printf("indexes - %dx%d\nindex of new string - ", datasize[0]-1 , datasize[1]-1);
    scanf("%d", &index);
    data = memNewColumn(data, datasize);
    for (int i=0; i<datasize[0]; i++){
        for (int j=datasize[1]-1; j>index; j--){
            data[i][j] = data[i][j-1];
        }
        printf("new elem of %d string - ", i);
        scanf("%d", &(data[i][index]));
    }
    return data;
}