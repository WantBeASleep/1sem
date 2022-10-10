#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

#include "../h/lib.h"
#include "../h/input.h"

int** inputMenu(int **data, int *dataSize){

    matrixClear(data, dataSize);

    int choise;
    choise = menuChoise(1);

    switch(choise){
        case 1:{
            return inputConsole(dataSize);
            break;
        }
        case 2:{
            char *filename = NULL;
            filename = readline("Enter the file name : ");
            return inputFile(dataSize, filename);
            break;
        }
        case 3:{
            printf("Enter the matrix size (%% %% format) : ");
            scanf("%d %d", &(dataSize[0]), &(dataSize[1]));
            return generation(dataSize);
            break;
        }
        case 4:{
            return NULL;
        }
    }
}

