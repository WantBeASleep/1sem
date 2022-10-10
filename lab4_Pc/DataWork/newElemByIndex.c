#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../h/struct.h"
#include "../h/ALLFUNC.h"
#include "../h/lib_help.h"

detail* newElemByIndex(detail *Data, int *Datasize, int index){
    detail *newElem = Work_NewElem();
    (*Datasize)++;
    Data = strctncpy(Data, *Datasize, 1);
    for (int k = *Datasize - 1; k>index; k--){
        strcpy(Data[k].id, Data[k-1].id);
        Data[k].name = Data[k-1].name;
        Data[k].counter = Data[k-1].counter;
    }
    free(Data[index].name);
    strcpy(Data[index].id, newElem->id);
    Data[index].name = newElem->name;
    Data[index].counter = newElem->counter;
    free(newElem);
    return Data;
}