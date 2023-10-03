#include <stdio.h>
int main(){
    char matriz[5][10] = {
        {'a','b','c','d','b','c','a','d','a','b'},
        {'c','a','c','b','c','c','a','c','d','b'},
        {'b','a','d','b','c','b','d','d','a','a'},
        {'a','b','c','d','b','c','a','d','a','b'},
        {'a','c','b','d','b','b','a','b','d','a'}};
    int linha,coluna;
    char vet[10] = {'a','c','b','d','c','b','a','d','d','a'};
    //primeira coluna
    int pontos = 0;
    int aluno = 1;
    int total;
    int pontos1=0,pontos2=0;
    int pontos3 = 0;
    int pontos4 = 0;
    
    for (int column = 0;column<10;column++){
        if (matriz[0][column]==vet[column]){
            pontos = pontos + 1;
        }
    }
    for (int column = 0;column<10;column++){
        if (matriz[1][column]==vet[column]){
            pontos1 = pontos1 + 1;
        }
    }
    for (int column = 0;column<10;column++){
        if (matriz[2][column]==vet[column]){
            pontos2 = pontos2 + 1;
        }
    }
    for (int column = 0;column<10;column++){
        if (matriz[3][column]==vet[column]){
            pontos3 = pontos3 + 1;
        }
    }
    for (int column = 0;column<10;column++){
        if (matriz[4][column]==vet[column]){
            pontos4 = pontos4 + 1;
        }
    }

    printf("O aluno 1 acertou %d questoes\n",pontos);
    printf("O aluno 2 acertou %d questoes\n",pontos1);
    printf("O aluno 3 acertou %d questoes\n",pontos2);
    printf("O aluno 4 acertou %d questoes\n",pontos3);
    printf("O aluno 5 acertou %d questoes\n",pontos4);
    return 0;
}