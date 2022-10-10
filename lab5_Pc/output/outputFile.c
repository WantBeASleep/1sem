#include <stdio.h>

void outputFile(int **data, int *datasize, char *filename){
    FILE *file;
    file = fopen(filename, "wb");
    fwrite(datasize, sizeof(int), 2, file);
    for (int i=0; i<datasize[0]; i++){
        fwrite(data[i], sizeof(int), datasize[1], file);
    }
    fclose(file);
    return;
}

/*
datasize[0] datasize[1] matrix
*/