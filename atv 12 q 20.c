#include <stdio.h>
#define constante 5
int main()
{
    int matriz_um[2][2] = {
        {3,4},
        {11,9}};
    int matriz_dois[2][2] = {
        {7,2},
        {5,1}};
    printf("Pressione 'a' para somar as matrizes,\n");
    printf("Pressione 'b' para subtrair as matrizes,\n");
    printf("Pressione 'c' para adicionar uma constante as matrizes,\n");
    printf("Pressione 'd' para imprimir as matrizes,\n");
    char letra;
    scanf("%c",&letra);
    int mat_um;
    int mat_dois;
    switch(letra){
        case 'a':
            for (int row = 0;row<3;row++){
                for (int column = 0;column<3;column++){
                    printf("%d, ",matriz_um[row][column]+matriz_dois[row][column]);
                }
                printf("\n");
            }
            break;
        case 'b':
            for (int row = 0;row<3;row++){
                for (int column = 0;column<3;column++){
                    printf("%d, ",matriz_um[row][column]-matriz_dois[row][column]);
                }
                printf("\n");
            }
            break;
        case 'c':
            mat_um = constante* matriz_um[2][2];
            mat_dois = constante * matriz_dois[2][2];
            printf("Matriz 1:\n");
            for (int row = 0;row<2;row++){
                for (int column = 0;column<2;column++){
                    printf("%d, ",mat_um);
                }
                printf("\n");
            }
            printf("Matriz 2:\n");
            for (int row = 0;row<2;row++){
                for (int column = 0;column<2;column++){
                    printf("%d, ",mat_dois);
                }
                printf("\n");
            }
            break;
        case 'd':
            printf("Matriz 1:\n");
            for (int row = 0;row<2;row++){
                for (int column = 0;column<2;column++){
                    printf("%d, ",matriz_um[row][column]);
                }
                printf("\n");
            }
            printf("Matriz 2:\n");
            for (int row = 0;row<2;row++){
                for (int column = 0;column<2;column++){
                    printf("%d, ",matriz_dois[row][column]);
                }
                printf("\n");
            }       
            break;
    }

    return 0;
}
