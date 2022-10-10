#include <stdlib.h>

void upSwitchStr(int **data, int *datasize){
    int *fdata = data[0];
    for (int i=0; i<datasize[0]-1; i++){
        data[i] = data[i+1];
    }
    data[datasize[0]-1] = fdata;
    return;
}