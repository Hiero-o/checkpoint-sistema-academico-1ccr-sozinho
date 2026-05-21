#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int calcular_media(float notas[], int quantidade) {
    float soma = 0.0;
    for (int i = 0; i < quantidade; i++) {
        soma += notas[i];
    }
    return soma / quantidade;
}

int main() {
    printf("================================================\n");
    printf("=                    SISTEMA XYZ                =\n");
    printf("================================================\n");

    printf("1 - Inserir Notas\n");
    printf("2 Calcular média\n");
    printf("3 - Verificar situação\n");
    printf("4 - Exibir Resultado\n");
    printf("5 - Caclcular derivada\n");
    printf("6 - Sair\n");
    printf("Digite um valor para continuar:\n")
    int opcao
    scanf("%d", &opcao);


    do {
        if opcao == 1 {
            printf("Opção 1 selecionada: Inserir Notas\n");
        } else if opcao == 2 {
            printf("Opção 2 selecionada: Calcular média\n");
        } else if opcao == 3 {
            printf("Opção 3 selecionada: Verificar situação\n");
        
        } else if opcao == 4 {
            printf("Opção 4 selecionada: Exibir Resultado\n");
        
        } else if opcao == 5 {
            printf("Opção 5 selecionada: Calcular derivada\n");
        } else if opcao == 6 {
            printf("Opção 6 selecionada: Sair\n");
        } else {
            printf("Opção inválida. Por favor, tente novamente.\n");
        }
        printf("Digite um valor para continuar:\n");
        scanf("%d", &opcao);
    } while (opcao != 6);







    return 0;
}
