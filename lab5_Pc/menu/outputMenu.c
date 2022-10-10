#include <stdio.h>
#include <readline/readline.h>

#include "../h/output.h"
#include "../h/lib.h"

void outputMenu(int **origData, int *origSize, int **workData, int *workSize){
    char *filename;
    int choise;
    choise = menuChoise(2);

    switch(choise){
        case 1:{
            outputConsole(origData, origSize);
            return;
            break;
        }
        case 2:{
            filename = readline("Enter the file name - ");
            outputFile(origData, origSize, filename);
            return;
            break;
        }
        case 3:{
            outputConsole(workData, workSize);
            return;
            break;
        }
        case 4:{
            filename = readline("Enter the file name - ");
            outputFile(workData, workSize, filename);
            return;
            break;
        }
    }

}
