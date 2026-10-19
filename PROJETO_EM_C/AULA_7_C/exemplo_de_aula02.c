#include <stdio.h>

int main(){
    
   int quantidade_alunos ;
   float nota, somanotas = 0.0f, mediaturma  ;
   
   do{
       printf("Digite a quantidade de alunos: ");
       scanf("%d",&quantidade_alunos);
       if(quantidade_alunos<=0){
           printf("Quantidade invalida de alunos \n");
       }
       
   }while(quantidade_alunos<=0);
   
   for(int i = 1; i<=quantidade_alunos; i++ ){
       do{
           printf("Digite a nota do aluno %d: ", i);
           scanf("%f",&nota);
           if(nota<0 || nota>10){
               printf("Nota inválida, digite novamente");
           }
       }while(nota<0 || nota>10);
       somanotas+=nota;
       
   }
    
    mediaturma = somanotas/quantidade_alunos;
    
    printf("A média da turma é: %.2f", mediaturma);
  
   
    return 0 ;
}
    
   
    
   
    
    

     

    
   
    
