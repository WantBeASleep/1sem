#include <stdio.h>

#include "../h/struct.h"
#include "../h/ALLFUNC.h"
#include "../h/lib_help.h"

detail* DataWorkMenu(detail *Data, int *Datasize){
    while (1)
    {
        printf("~~WORK MENU~~\n1) New Element By Index\n2) New Element && Save Sort\n3) Remove Elems from Index\n4) Sort\n5) Back\n=============\n");
        int choise;
        scanf("%d", &choise);
        printf("\n");
        switch (choise)
        {
        case 1:
            {
            int index;
            printf("Enter the index - ");
            scanf("%d", &index);
            return newElemByIndex(Data, Datasize, index);
            }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            return Data;
            break;
        }
    }
}