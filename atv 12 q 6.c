//atv 12 q 6
#include <stdio.h>
int main(){
    int coluna,linha;
    int column_um, row_um;
    int column_dois, row_dois;
    int matriz_um[4][4] = {
        {6,20,32,4},
        {55,11,24,9},
        {3,30,26,9},
        {12,2,14,7}};
    int matriz_dois[4][4] = {
        {8,56,9,12},
        {1,4,6,2},
        {7,89,31,5},
        {90,3,21,10}};
    int matriz_tres[4][4];
    printf("Matriz 3:\n");
    for (int row = 0;row<4;row++){
        for (int column = 0;column<4;column++){
            if (matriz_um[row][column] > matriz_dois[row][column]){
                matriz_tres[row][column] = matriz_um[row][column];
                printf("%d, ",matriz_tres[row][column]);
            } else{
                matriz_tres[row][column] = matriz_dois[row][column];
                printf("%d, ",matriz_tres[row][column]);
            }
        
        }
        printf("\n");
    }
    
}