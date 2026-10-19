#include <stdio.h>

int main()
{
    int participantes;
    
    do{
        printf("Digite a quantidade de participantes(1 a 3):");
        scanf("%d",&participantes);
        if (participantes < 1 || participantes > 3 ){
            printf("Quantidade invalida. Tente novamente. \n");
            
        }
    }
    while (participantes <1 || participantes >3);
    printf("Equipe registrada com %d participantes. \n", participantes);
    

    return 0;
}
