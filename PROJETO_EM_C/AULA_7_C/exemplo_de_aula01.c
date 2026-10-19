#include <stdio.h>

int main(){
    
    char cpf [12];
    double preco, total_compra = 0.0;
    
    printf("Digite o Cpf do cliente :");
    scanf("%11s",cpf);
    
    do{
        printf("Digite o preço do produto ou 0 para finalizar : ");
        scanf("%lf",&preco);
        if (preco>0){
            total_compra+=preco;
        }
        
        
    }while(preco!= 0);
        printf("\n Compra encerrado!\n");
        printf("Cpf: %s",cpf);
        printf("O total da compra foi: R$ %.2lf\n", total_compra);
        
    
    
    
   
    return 0 ;
}
    
   
    
   
    
    

     

    
   
    
