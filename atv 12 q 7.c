#include <stdio.h>
#include <math.h>
int main(){
    int matriz[10][10];
    for (int row = 0;row<10;row++){
        for (int column = 0;column<10;column++){
            if (row < column){
                matriz[row][column] = 2*row+7*column;
                printf("%d, ",matriz[row][column]);
            } else if (row == column){
                matriz[row][column] = 3*pow(row,2);
                printf("%d, ",matriz[row][column]);
            } else if (row > column){
                matriz[row][column] = 5*pow(column,2)+1;
                printf("%d, ",matriz[row][column]);
            }
        }
        printf("\n");
    }
    return 0;
}