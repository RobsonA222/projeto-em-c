#include <stdio.h>

int main() {
    int idade;

    // Solicita a idade ao usuário
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("Você tem:%d anos\n",idade);
    
    if(idade>=18)
    {
        printf("Permitido");
    }
    else{
        printf("Não permitido");
    }
    
   
        return 0;

    
}
