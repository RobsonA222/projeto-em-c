#include <stdio.h>
int main()
{

    float potencia, quantidadedehoras, mensal;
    
    printf("Qual a potência do equipamento:\n");
    scanf("%f",&potencia);
    
    printf("Horas de uso por dia:\n");
    scanf("%f",&quantidadedehoras);
    
    mensal = (potencia * quantidadedehoras*30)/1000;
    
    printf("Seu gasto mensal em watts será de:%.2f WATTS ",mensal);
    
    
    return 0 ;
    
    
    
    
    
    
}