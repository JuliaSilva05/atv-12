//atv 12 q 22
#include <stdio.h>

int main()
{
    int A[3][3] = {
        {3,4,6},
        {7,1,8},
        {11,9,2}};
    int B[3][3];
    printf("Matriz B:\n");
    for (int row = 0;row<3;row++){
        for (int column = 0;column<3;column++){
            B[row][column]=2*A[row][column];
            printf("%d, ",B[row][column]);
        }
        printf("\n");
    }

    return 0;
}
