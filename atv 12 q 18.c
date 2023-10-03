//atv 12 q 18
#include <stdio.h>

int main(){

    float matriz[5][4] = {
        {1,2,3,4},
        {7.0,8.5,10.0,9.0},
        {5.5,8.0,9.5,7.5}};
    float maior = 0;
    float mat;
    printf("Notas finais, respectivamente: ");
    for (int column = 0;column<4;column++){
        matriz[3][column]=matriz[1][column]+matriz[2][column];
        printf("%.2f, ",matriz[3][column]);
        if (matriz[3][column]>maior){
            maior = matriz[3][column];
            
        }
        
    }
    if (maior==matriz[3][0]){
        mat = matriz[0][0];
    } else if (maior==matriz[3][1]){
        mat = matriz[0][1];
    } else if (maior==matriz[3][2]){
        mat = matriz[0][2];
    } else if (maior==matriz[3][3]){
        mat = matriz[0][3];
    }
    float media = (matriz[3][0]+matriz[3][1]+matriz[3][2]+matriz[3][3])/4;
    printf("\nMaior nota final: %.2f \n",maior);
    printf("Matricula de quem tirou a maior nota: %.0f \n",mat);
    printf("Media aritmetica das notas finais: %.2f \n",media);
    return 0;
}