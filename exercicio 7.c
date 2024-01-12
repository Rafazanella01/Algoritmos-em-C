#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void main()
{

	float km_inicial, km_final, com_cons, cons_med; 
	


	printf("Digite a quilometragem inicial: ");
	scanf("%f", &km_inicial);
	
	printf("Digite sua quilometragem final: ");
	scanf("%f", &km_final);
	
	printf("Digite o volume de combustivel consumido: ");
	scanf("%f", &com_cons);
	
	
	cons_med = (km_final - km_inicial)/ com_cons;
	
	
	printf("Consumo medio e: %.2f ", cons_med);
}

	
	
	
	
	
	
	
	
	
	

