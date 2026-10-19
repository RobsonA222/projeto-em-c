#include <stdio.h>

int main() {
    
    float media,nota1, nota2, frequencia;
    
    printf("Sua primeira nota?: ");
    scanf("%f",&nota1);
    
    printf("Sua segunda nota?: ");
    scanf("%f",&nota2);
    
    media = (nota1+nota2)/2;
    
    printf("Qual a sua frequência?: ");
    scanf("%f",&frequencia);
    
    if (frequencia < 75){
        printf("Reprovado por frequencia.\n");
        
    }
        
        else{
            if (media >=6){
                printf("Você foi aprovado:\n");
            }
        else{
            printf("Reprovado por média:\n");
        }
        
    }

        return 0 ;
    }
        
        

