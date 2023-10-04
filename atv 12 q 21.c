//atv 12 q 21
#include <stdio.h>

int main()
{
    int A[3][3] = {
        {3,4,6},
        {7,1,8},
        {11,9,2}};
    int B[3][3] = {
        {7,2,14},
        {8,12,-1},
        {5,1,6}};
    int C[3][3];
    
    for (int row = 0;row<3;row++){
        for (int column = 0;column<3;column++){
            C[row][column]=A[row][column]*B[column][row];
            printf("%d, ",C[row][column]);
        }
        printf("\n");
    }

    return 0;
}
