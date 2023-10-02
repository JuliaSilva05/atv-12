//atv 12 q 12
#include <stdio.h>
int main(){
    
    printf("Matriz original:\n");
    int matriz[3][3] = {
        {3,4,1},
        {9,5,12},
        {7,10,8}};
    for (int row = 0;row<3;row++){
        for (int column = 0;column<3;column++){
            printf("%d, ",matriz[row][column]);
        }
        printf("\n");
    }
    printf("Matriz transposta:\n");
    for (int row = 0;row<3;row++){
        for (int column = 0;column<3;column++){
            printf("%d, ",matriz[column][row]);
        }
        printf("\n");
    }
    
}