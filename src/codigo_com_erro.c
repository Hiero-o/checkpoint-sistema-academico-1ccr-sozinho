#include <stdio.h> // Biblioteca de entrada e saída aberta e fechada incorretamente (correto <>)

int main() {
    float nota1, nota2, media; // variável sem fechamento (;)

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); // falta de & para ler a segunda nota

    media = (nota1 + nota2) / 2; // Adição de parênteses para garantir a ordem correta das operações

    if (media >= 6) { // Valor de comparação incorreto (==) em vez de >=
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}