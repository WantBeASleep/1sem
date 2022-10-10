#include "h/menus.h"
#include "h/lib.h"

#include <stdlib.h>

int main(){
    int **origData;
    int origSize[2];

    origSize[0] = 0;
    origSize[1] = 0;

    int **workData;
    int workSize[2];

    workSize[0] = 0;
    workSize[1] = 0;

    for(; ;){
        int choise;
        choise = menuChoise(0);
        switch (choise){
            case 1:{
                origData = inputMenu(origData, origSize);
                matrixClear(workData, workSize);
                workData = origCpy(origData, origSize, workSize);
                break;
            }
            case 2:{
                outputMenu(origData, origSize, workData, workSize);
                break;
            }
            case 3:{
                workData = workMenu(workData, workSize);
                break;
            }
            case 4:{
                matrixClear(origData, origSize);
                matrixClear(workData, workSize);
                exit(0);
                break;
            }
        }
    }

    return 0;
}
