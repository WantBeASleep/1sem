#include <stdlib.h>

void downSwitchStr(int **data, int *datasize){
    int *edata = data[datasize[0]-1];
    for (int i=datasize[0]-1; i>0; i--){
        data[i] = data[i-1];
    }
    data[0] = edata;
    return;
}