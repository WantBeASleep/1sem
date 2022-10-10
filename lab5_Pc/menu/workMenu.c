#include "../h/work.h"
#include "../h/lib.h"

int** workMenu(int **data, int *dataSize){
    int choise;
    choise = menuChoise(3);

    switch(choise){
        case 1:{
            return addString(data, dataSize);
            break;
        }
        case 2:{
            return addColumn(data, dataSize);
            break;
        }
        case 3:{
            return deleteString(data, dataSize);
            break;
        }
        case 4:{
            return deleteColumn(data, dataSize);
            break;
        }
        case 5:{
            return individual(data, dataSize);
            break;
        }
        case 6:{
            
            break;
        }
    }
}

