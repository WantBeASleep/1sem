#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "h/struct.h"
#include "h/ALLFUNC.h"
#include "h/lib_help.h"

int main(){
    detail *Data = NULL;
    int DataSize = 0;
    while (1)
    {
        printf("~~MAIN MENU~~\n1) Enter the data\n2) Write the data\n3) RemoveData\n4) Processing the data\n5) Time`s\n6) Exit\n=============\n");
        int choise;
        scanf("%d", &choise);
        printf("\n");

        switch (choise){
            case 1:
                {
                    detail *newData = NULL;
                    int count = DataSize;
                    newData = InputDataMenu(&DataSize);
                    count = DataSize - count;

                    int idx = 0, j = 0;

                    detail *tmpData = NULL;
                    tmpData = Data;
                    Data = strctncpy(tmpData, DataSize, count);
                    freestrct(tmpData, DataSize-count);
                    free(tmpData);

                    for (idx = DataSize-count; idx<DataSize; idx++){
                        strcpy(Data[idx].id, newData[j].id);
                        Data[idx].name = (char *)malloc(strlen(newData[j].name) * sizeof(char));
                        strcpy(Data[idx].name, newData[j].name);
                        Data[idx].counter = newData[j].counter;
                        j++;
                    }
                    freestrct(newData, count);
                    free(newData);
                }
                break;
            case 2:
                OutputDataMenu(Data, DataSize);
                break;
            case 3:
                freestrct(Data, DataSize);
                free(Data);
                DataSize = 0;
                break;
            case 4:
                {
                    detail *tmpData = Data;
                    int oldDatasize = DataSize;
                    Data = DataWorkMenu(Data, &DataSize);
                    free(tmpData);
                }
                break;
            case 5:
                break;
            case 6:
                exit(0);
                free(Data);
                break;
        }
    }

    return 0;
}