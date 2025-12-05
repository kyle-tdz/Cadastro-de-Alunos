#include <stdio.h>

int main(){
    int idade; 
    int quantidade = 1;
    float altura = 1.75;
    char letra = 'K';
    char nome[4] = "kaio";

    printf("Bem-vindo ao seu cadastro de Alunos!\n");
    printf("--- Insira seus dados a seguit:. ---\n\n");

   // --- LEITURA DA IDADE ---

    printf("Digite a sua idade: ");
    scanf("%d", &idade1);
    printf("A idade é: %d\n", idade1);


    // --- LEITURA DA ALTURA ---

    printf("Digite a sua altura: ");
    scanf ("%f", &altura1);
    printf("A altura é: %.2f\n", altura1);

    return 0;


}
