#include <stdio.h>
int main()
{

    float horas, minutos, total ; 
    
    printf("Que horas são agora:");
    scanf("%f",&horas);
    printf("Quantos minutos:");
    scanf("%f",&minutos);
    total = horas * 60 + minutos;
    printf ("Suas horas em minutos será:%f",total);
    
    return 0 ;
    
    
    
    
    
    
}