#include <stdio.h>

 int main(){
 	
 	int soma = 0,numero, contador = 0;
 	
 	printf("digite um numero impar:");
 	scanf("%i", &numero);
 	
 	while(1){
	 		
     	printf("digite um numero impar:");
 		scanf("%i", &numero);
 	
 	if(numero == 0){
	 break;
	 }
	 
	  if(numero % 2 == 1 || numero % 2 == -1){
	  	soma += numero;
	  	contador++;
	  }
 	
 }
 	
 	
 	if(contador > 0){
 		
 		double media = (double)soma / contador;
 		
 		printf("Media dos numeros impares: %.2f", media);
 	}
 		else{
 			printf("nenhum número impar foi digitado!");
		 }
		 
		 return 0;
	 }
 	
 	
 	
 	
 	
 	
 	
 	
 	

