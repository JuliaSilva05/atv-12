//atv 12 q 5
#include <stdio.h>
int main(){
    int X;
    printf("Insira um valor a ser procurado: ");
    scanf("%d",&X);
    int coluna,linha;
    int column, row;
    int matriz[5][5] = {
        {6,20,32,4,7},
        {55,11,24,9,45},
        {3,30,26,9,80},
        {8,15,2,7,78},
        {12,2,14,7,34}};
    for (int row = 0;row<5;row++){
        for (int column = 0;column<5;column++){
            if (matriz[row][column] == X){
                coluna = column;
                linha = row;
                printf("%d encontrado na linha %d, coluna %d\n",X,linha,coluna);
            }
        }
    } 
    if (matriz[linha][coluna] != X){
        printf("%d nao encontrado\n",X);
    }
}