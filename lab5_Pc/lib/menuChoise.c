#include <stdio.h>

// 0 - mainMenu; 1 - inputMenu; 2 - outputMenu; 3 - workMenu

int menuChoise(int flag){
    switch (flag){
        case 0:{
            printf("~~MAIN MENU~~\n");
            printf("1)- Enter the data\n");
            printf("2)- Write the data\n");
            printf("3)- Processing the data\n");
            printf("4)- Exit\n");
            printf("=============\n");
            int choise;
            scanf("%d", &choise);
            return choise;
            break;
        }
        case 1:{
            printf("~~INPUT MENU~~\n");
            printf("1)- Enter by console\n");
            printf("2)- Enter from file\n");
            printf("3)- Random Generate\n");
            printf("4)- Back\n");
            printf("=============\n");

            int choise;
            scanf("%d", &choise);
            return choise;
            break;
        }
        case 2:{
            printf("~~OUTPUT MENU~~\n");
            printf("1) Write orig to console\n");
            printf("2) Write orig to file\n");
            printf("3) Write worked to console\n");
            printf("4) Write worked to file\n");
            printf("5) Back\n");
            printf("=============\n");

            int choise;
            scanf("%d", &choise);
            return choise;
            break;
        }
        case 3:{
            printf("~~WORK MENU~~\n");
            printf("1) Enter the string by index\n");
            printf("2) Enter the column by index\n");
            printf("3) Delete the string by index\n");
            printf("4) Delete the column by index\n");
            printf("5) Individual(002 variant)\n");
            printf("6) Back\n");
            printf("=============\n");

            int choise;
            scanf("%d", &choise);
            return choise;
            break;
        }
    }
}