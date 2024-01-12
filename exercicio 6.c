#include <stdio.h>


 void main(){
	
	
	float c, f;
	
	printf("digite uma temperatura em fahrenheit para a conversao:");
	scanf("%f", &f);
	
	       c = (5 * (f - 32))/9;
	
	printf("a temperatura correspondende em celsius e: %.2f", c);
}






