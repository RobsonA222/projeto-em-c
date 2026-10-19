#include <stdio.h>

int main() {
    float valordiaria, valortotal;
    char tipohospedagem;
    int quantidadediarias;

    printf("Qual o tipo de hospedagem (S-D-T): ");
    scanf(" %c", &tipohospedagem);

    printf("Qual a quantidade de diárias: ");
    scanf("%d", &quantidadediarias);

    switch (tipohospedagem) {
        case 'S':
        case 's':
            valordiaria = 300.00f;
            break;
        case 'D':
        case 'd':
            valordiaria = 450.00f;
            break;
        case 'T':
        case 't':
            valordiaria = 500.00f;
            break;
        default:
            printf("\nTipo inválido\n");
            return 1; // encerra o programa em caso de erro
    }

    valortotal = valordiaria * quantidadediarias;
    printf("\nO valor total da hospedagem é: R$%.2f\n", valortotal);

    return 0;
}
