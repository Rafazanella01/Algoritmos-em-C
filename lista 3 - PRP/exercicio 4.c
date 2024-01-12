#include <stdio.h>

 int main(){
 	
 	
 	int idade[10], acima50,pessoas1020, pessoasabaixo40, i;
 	float altura[10], peso[10], mediaalturas, percentagemabaixo40;
 	
 	
 	for( i = 0; i < 10; i++){
 		printf("Digite a idade da pessoa %i: ", i+1);
 		scanf("%i", &idade[i]);
 		printf("Digite a altura da pessoa %i (em metros) : ", i+1);
 		scanf("%f", &altura[i]);
 		printf("Digite o peso da pessoa %i (em quilos) : ", i+1);
 		scanf("%f", &peso[i]);
	     printf("\n");
	 }
 	
 	   for(i=0;i<10;i++){
 	   	  if(idade[i] > 50){
 	   	  	    acima50++;
			  }
 	   	        if(idade[i]>= 10 && idade[i] <= 20){
 	   	        	mediaalturas += altura[i];
 	   	        	 pessoas1020++;
 	   	
			        if(peso[i] < 40){
			          pessoasabaixo40++;	
				}
			
			}
 	   	
		}
 	
 	if(pessoas1020 > 0){
 		mediaalturas /= pessoas1020;
 	}
 	
 	
 	 percentagemabaixo40 = (float)pessoasabaixo40 / 10 * 100;
 	
 	//saidas dos dados
 	
 	printf("a quantidade de pessoas com idade superior a 50 anos e: %i\n", acima50);
 	printf("a media das alturas das pessoas com idade entre 10 e 20 anos e: %.2f\n", mediaalturas);
 	printf("a percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas e: %.2f\n", percentagemabaixo40);
 	
 	
 }
