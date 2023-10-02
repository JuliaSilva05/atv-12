//atv 12 q 9
#include <stdio.h>
int main(){
    int soma = 0;
    int matriz[3][3] = {
        {3,4,1},
        {9,5,12},
        {7,10,8}};
    for (int row = 0;row<3;row++){
        for (int column = 0;column<3;column++){
            if (row > column){
                soma = soma + matriz[row][column];
                
            }
        }
    }
    printf("A soma dos termos da diagonal principal é %d",soma);
}
