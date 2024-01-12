#include <stdio.h>


 int main(){
 	
 	float altura, media;
 	int qtd = 0, alunosAltura160175 =0;
 	
 	while (1){
 		
 		printf("digite sua altura:  ");
 		scanf("%f", &altura);
 		
 		
 		
 		if (altura == 0){
 			break;
		 }
	 
	 qtd++;
 	
 	  if (altura > 1.60 && altura < 1.75) {
            alunosAltura160175++;
        }
    
    
}
    
     if(qtd > 0){
        	
			media = alunosAltura160175/qtd;
			
		 printf("\nMedia das alturas: %.2f metros\n", media);
         printf("Quantidade de alunos com altura entre 1.60 e 1.75 metros: %d\n", alunosAltura160175);
         
   }
	   	else {
        printf("\nNenhum aluno inserido.\n");
       }
    
  return 0;

}
