#include <stdio.h>
#include <math.h>
int main()
{
    float peso, altura, imc ; 
    
    printf("Qual o seu peso:?");
    scanf("%f",&peso);
    printf("Qual a sua altura:");
    scanf("%f",&altura);
    imc = peso/ pow (altura,2);
    printf("O seu imc será %.2f",imc);
    

    return 0 ;
}