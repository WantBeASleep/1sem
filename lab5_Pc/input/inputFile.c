#include <stdio.h>
#include <stdlib.h>

int **inputFile(int *datasize, char *filename){
    int **localdata;

    FILE *file;
    file = fopen(filename, "r");

    fread(datasize, sizeof(int), 2, file);

    localdata = (int **)malloc(datasize[0] * sizeof(int *));

    for (int i=0; i<datasize[0]; i++){
        localdata[i] = (int *)malloc(datasize[1] * sizeof(int));
        fread(localdata[i], sizeof(int), datasize[1], file);
    }

    fclose(file);

    return localdata;
}