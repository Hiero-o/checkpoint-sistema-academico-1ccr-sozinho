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
        printf("Situacao: Aprovado\n");

    } else if (media >= 5.0) {
        printf("Situacao: Recuperacao\n");

    } else {
        printf("Situacao: Reprovado\n");
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

    printf("Derivada aproximada: %.2f\n", derivada);
}

int main() {

    int opcao;
    int quantidade = 0;

    float notas[10];
    float media = -1;

    do {

        printf("\n==============================\n");
        printf(" SISTEMA EQUIPE XYZ\n");
        printf("==============================\n");

        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                printf("Quantas notas deseja inserir? ");
                scanf("%d", &quantidade);

                if (quantidade > 10 || quantidade <= 0) {

                    printf("Quantidade invalida.\n");
                    quantidade = 0;

                } else {
                    for (int i = 0; i < quantidade; i++) {

                        printf("Digite a nota %d: ", i + 1);
                        scanf("%f", &notas[i]);
                    }

                    printf("Notas inseridas com sucesso!\n");
                }

                break;

            case 2:
                if (quantidade > 0) {

                    media = calcular_media(notas, quantidade);

                    printf("Media calculada: %.2f\n", media);

                } else {

                    printf("Insira as notas primeiro.\n");
                }

                break;

            case 3:
                if (media >= 0) {

                    logicaSituacao(media);

                } else {

                    printf("Calcule a media primeiro.\n");
                }

                break;

            case 4:
                if (media >= 0) {

                    printf("Resultado final:\n");
                    printf("Media: %.2f\n", media);

                    logicaSituacao(media);

                } else {

                    printf("Nenhum resultado disponivel.\n");
                }

                break;

            case 5:
                logicaDerivada();

                break;

            case 6:
                printf("Encerrando o sistema...\n");

                break;

            default:

                printf("Opcao invalida. Tente novamente.\n");
        }

    } while(opcao != 6);

    return 0;
}