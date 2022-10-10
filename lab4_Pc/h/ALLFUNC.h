#ifndef ALLFUNCDESC_H
#define ALLFUNCDESC_H


#include "struct.h"

detail* InputDataMenu(int *);
detail* InputDataByConsole(int, int *);
detail* InputDataByFile(char *, int *);
detail* Work_NewElem();
detail* newElemByIndex(detail *, int *, int);
detail* DataWorkMenu(detail *, int *);
void OutputDataMenu(detail *, int);
void OutputDataToConsole(detail *, int);
void OutputDataToFile(detail *, char *, int);


#endif