#include <stdio.h>
#include <stdlib.h>

float calcular_media(float notas[], int quantidade) {

    float soma = 0.0;

    for (int i = 0; i < quantidade; i++) {
        soma += notas[i];
    }

    return soma / quantidade;
}

void logicaSituacao(float media) {

    if (media >= 7.0) {
        printf("Situação: Aprovado\n");

    } else if (media >= 5.0) {
        printf("Situação: Recuperação\n");

    } else {
        printf("Situação: Reprovado\n");
    }
}

void logicaDerivada() {

    float a, b, h;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de h: ");
    scanf("%f", &h);

    float derivada = (b - a) / h;

    printf("A derivada é: %.2f\n", derivada);
}

int main() {

    int opcao;
    int quantidade = 0;
    float media = 0;

    do {

        printf("\n================================================\n");
        printf("=                 SISTEMA XYZ                  =\n");
        printf("================================================\n");

        printf("1 - Inserir Notas\n");
        printf("2 - Calcular média\n");
        printf("3 - Verificar situação\n");
        printf("4 - Exibir Resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");

        printf("Digite uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            printf("Opção 1 selecionada: Inserir Notas\n");

        } else if (opcao == 2) {

            printf("Digite a quantidade de notas: ");
            scanf("%d", &quantidade);

            float notas[quantidade];

            for (int i = 0; i < quantidade; i++) {

                printf("Digite a nota %d: ", i + 1);
                scanf("%f", &notas[i]);
            }

            media = calcular_media(notas, quantidade);

            printf("A média é: %.2f\n", media);

        } else if (opcao == 3) {

            logicaSituacao(media);

        } else if (opcao == 4) {

            printf("O resultado é: %.2f de média.\n", media);

        } else if (opcao == 5) {

            logicaDerivada();

        } else if (opcao == 6) {

            printf("Encerrando o programa...\n");

        } else {

            printf("Opção inválida.\n");
        }

    } while (opcao != 6);

    return 0;
}