/******************************************************************************
 Como poderíamos tornar o programa acima mais genérico, de maneira que pudéssemos
 registrar qualquer questão objetiva com 5 alternativas? 
*******************************************************************************/
#include <stdio.h>
#include <string.h>

void exibirQuestao(char *questao, char alternativas[5][50], char respostaCorreta) {
    char respostaUsuario;

    printf("%s\n", questao);
    for (int i = 0; i < 5; i++) {
        printf("%c) %s\n", 'a' + i, alternativas[i]);
    }

    printf("Digite a letra correspondente à sua resposta: ");
    scanf(" %c", &respostaUsuario);

    printf("Você respondeu: %c\n", respostaUsuario);
    printf("A resposta correta é: %c\n", respostaCorreta);

    if (respostaUsuario == respostaCorreta) {
        printf("Parabéns! Você acertou.\n");
    } else {
        printf("Resposta incorreta. A correta é %c.\n", respostaCorreta);
    }
}

int main() {
    
    char questao[] = "Qual é o verdadeiro nome do super-herói Batman?";
    char alternativas[5][50] = {
        "Bruce Wayne",
        "Clark Kent",
        "Peter Parker",
        "Tony Stark",
        "Steve Rogers"
    };
    char respostaCorreta = 'a';

    exibirQuestao(questao, alternativas, respostaCorreta);

    return 0;
}
