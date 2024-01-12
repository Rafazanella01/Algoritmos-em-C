#include <stdio.h>

 void main(){
 	
 	int a, soma = 0;
 
     printf("digite um valor(0 para sair):");
     scanf("%i", &a);
 
  while(a != 0){
  	
     if(a <= 100){
  		
  		soma += a;
  	 }
  	  printf("digite um valor(0 para sair):");
     scanf("%i", &a);
  }
 	
 	
 	printf("a soma dos valores menores de 100: %i", soma);
 }
