//exercio de aplicação
//Um centro de distribuição recebe mercadorias em dois turnos diariamente.
// final do expediente, é necessário calcular o total do produtos recebidos para atualizar o estoque do diariamente



#include <stdio.h>
int main()
{
    int produtomanha, produtonoite, produtotarde, soma;
    printf("Qual foi o produto chegado pela manhã:\n");
    scanf("%d",&produtomanha);
    printf("Qual foi o produto chegado de tarde:\n");
    scanf("%d",&produtotarde);
    printf("Qual foi o prdouto chegado de noite:\n");
    scanf("%d",&produtonoite);
    soma = produtomanha + produtonoite + produtotarde;
    printf("%d",soma);
    
    return 0 ;
}