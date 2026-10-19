#include <stdio.h>

int main(){
    int quantidade_cafe;
    float preco, total;

    
    printf("quantidade_cafe:");
    scanf("%d",&quantidade_cafe);
    
    printf("Digite o preço do café:\n");
    scanf("%f",&preco);
    total = quantidade_cafe *preco;
    printf("O total deu:%.2f",total);
   
    
    
    return 0 ;

}