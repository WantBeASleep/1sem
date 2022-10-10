#include <stdio.h>

void outputConsole(int **data, int *datasize){
    printf("~~MATRIX~~\n");
    for(int i=0; i<datasize[0]; i++){
        printf("|");
        for(int j=0; j<datasize[1]; j++){
            printf("%d", data[i][j]);
            if (j != datasize[1]-1) printf("\t");
        }
        printf("|\n");
    }
    return;
}