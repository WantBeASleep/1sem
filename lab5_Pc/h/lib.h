#ifndef LIB_H
#define LIB_H

int menuChoise(int flag);
void matrixClear(int **data, int *datasize);
int **origCpy(int **origData, int *origSize, int *workSize);
int **memNewString(int **data, int *datasize);
int **memNewColumn(int **data, int *datasize);
int *deleteElemArray(int *data, int size, int index);
void upSwitchStr(int **data, int *datasize);
void downSwitchStr(int **data, int *datasize);

#endif