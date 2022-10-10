#ifndef MENUS_H
#define MENUS_H

int** inputMenu(int **data, int *dataSize);
void outputMenu(int **origData, int *origSize, int **workData, int *workSize);
int** workMenu(int **data, int *dataSize);

#endif