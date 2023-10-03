//atv 12 q 17
#include <stdio.h>
#include <stdlib.h>
int main(){
    int matriz[3][3] = {
        {3,4,-5},
        {11,9,12},
        {5,2,6}};
    int array[3];
    int i;
    int col1 = 0;
    for(i=0;i<3;i++){
        array[i]=matriz[0][i]+matriz[1][i]+matriz[2][i];
        printf("%d ",array[i]);
    }
    return 0;
}