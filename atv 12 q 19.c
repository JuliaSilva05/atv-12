#include <stdio.h>

int main(){
    int soma = 0;
    int matriz[3][6] = {
        {43,20,32,4,1,3},
        {55,11,54,9,7,2},
        {12,2,14,7,5,8}};
    int soma1;
    int media = 0;
    int media1=0;
    
    for (int column = 0;column<6;column++){
        if (column%2!=0){
            soma1 = matriz[0][column]+matriz[1][column]+matriz[2][column];
            soma = soma1+soma;
        }
        if (column==1||column==3){
            media1 = matriz[0][column]+matriz[1][column]+matriz[2][column];
            media = media1+media;
        }
    }
    printf("Soma de todos os elementos das colunas impares: %d \n",soma);
    printf("Media aritmetica dos elementos da segunda(1) e quarta(3) colunas: %d \n",media/6);
    printf("Matriz modificada:\n");
    for (int row = 0;row<3;row++){
        for (int column = 0;column<6;column++){
            matriz[row][5] = matriz[row][1]+matriz[row][2];
            printf("%d, ",matriz[row][column]);
        }
        printf("\n");
    }

    return 0;
}