#include <stdlib.h>
#include <stdio.h>

#include "../h/lib.h"

int **individual(int **data, int *datasize){
    int N, delta = 1;
    printf("Enter the N swipe - ");
    scanf("%d", &N);
    if (N<0) N*=-1, delta=0;
    for (int i=0; i<N; i++){
        if (delta) downSwitchStr(data, datasize);
        else upSwitchStr(data, datasize);
    }
    return data;
}

/*
Вариант No002
Исходные данные:прямоугольная матрица,целое чис­ло N.
Осуществить циклический сдвиг элементов матрицы
внутри столбцов на N позиций (направление сдвига
определяется знаком числа N).
*/