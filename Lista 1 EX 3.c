/******************************************************************************
3. Escreva um programa em C que realize o seguinte procedimento: 
a. Imprima na tela a seguinte questão: Qual é o verdadeiro nome do super-herói Batman? 
b. Apresente cinco alternativas para o usuário, cada uma em uma linha: 
a) Bruce Wayne b) Clark Kent c) Peter Parker d) Tony Stark e) Steve Rogers 
c. Armazene a letra correspondente à resposta correta (‘a’) em uma variável. 
d. Solicite ao usuário que digite sua resposta, e a armazene em uma variável. 
e. Ao final, o programa deve exibir na tela a resposta do usuário e a resposta correta. 
Por exemplo, se o usuário digitou como resposta a alternativa ‘d’, a mensagem seria esta: 
Você respondeu alternativa d. A resposta correta é a alternativa a. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    char resposta_usuario;
    char resposta_correta = 'a';
    printf("Qual é o verdadeiro nome do super-herói Batman?\n");
    printf("A) Bruce Wayne\n");
    printf("B) Clark Kent\n");
    printf("C) Peter Parker\n");
    printf("D) Tony Stark\n");
    printf("E) Steve Rogers\n");
    
    printf("Coloque sua resposta:\n ");
    scanf(" %c", &resposta_usuario);
    
    printf("Você respondeu: Alternativa %c\n", resposta_usuario);
    printf("A resposta correta é: Alternativa %c\n", resposta_correta);
    
    

    return 0;
}