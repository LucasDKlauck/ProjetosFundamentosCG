/******************************************************************************
Escreva um programa em linguagem C que solicite o nome do usuário e, em seguida,
imprima uma mensagem de boas-vindas na tela, utilizando o nome fornecido. 
*******************************************************************************/
#include <stdio.h>

int main() {
    char nome[50];
    
    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Bem-vindo, %s!\n", nome);

    return 0;
}
