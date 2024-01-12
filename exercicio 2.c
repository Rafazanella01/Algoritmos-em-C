#include <stdio.h>

void main(){
	
 int filhos;
 float horas,salario;
 char nome[20];	
	
 printf("digite o seu nome:");	
 scanf("%s",&nome);
  
 printf("quantas horas voce trabalhou:");
 scanf("%f",&horas);
 
 printf("quantos filhos menores voce tem:");
 scanf("%i",&filhos);
	
	
   salario = (10 * horas) + (filhos * 50);
   salario = salario * 0.91;
	
	printf("%s voce trabalhou %.2f horas e o seu salario e:%.2f",nome, horas, salario);	
}
