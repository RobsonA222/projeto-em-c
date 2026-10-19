#include <stdio.h>
#include <math.h>

int main(){

float  nota1, nota2, media;

printf("Qual a sua primeira nota: ");
scanf("%f",&nota1);
printf("Qual a sua segunda nota: ");
scanf("%f",&nota2);
media = nota1+nota2/2;
printf("\nSua média é:%.2f", media);

if (media>= 6){
    printf("\nAprovado");}
else {
    printf("Reprovado");}



return 0 ; 






}