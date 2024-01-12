#include <stdio.h>

 int main(){
 	
 	
 	float notas1[6], notas2[6], medias[6], mediaclasse=0;
 	int aprovados=0, exame=0, reprovados=0, i;
 	
 	for(i = 0; i < 6; i++){
 		printf("digite as notas do aluno %i:\n ", i+1);
 		scanf("%f %f", &notas1[i], &notas2[i]);
 		
 		printf("\n");
	 
	  medias[i] = (notas1[i] + notas2[i]) / 2;
	  
	  if(medias[i] >= 7){
	  	printf(" aluno %i, media %.2f - Aprovado! \n", i+1, medias[i]);
	  	aprovados++;
	  } 
	    else if(medias[i] <= 3){
	    	printf(" aluno %i, media %.2f - Reprovado! \n", i+1, medias[i]);
	    	reprovados++;
	    } else{
	    	printf(" aluno %i, media %.2f - Exame! \n", i+1, medias[i]);
	    	exame++; }
	 
	 
	   mediaclasse += medias[i];
    }
	   
	   if(aprovados + exame + reprovados > 0){
	   	  mediaclasse /= (aprovados + exame + reprovados);
	   }
	 
	 
	  	printf("Total de alunos aprovados: %d\n", aprovados);
    	printf("Total de alunos em exame: %d\n", exame);
    	printf("Total de alunos reprovados: %d\n", reprovados);
    	printf("Media da classe: %.2f\n", mediaclasse);	 
 	}
