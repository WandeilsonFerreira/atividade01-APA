#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_VETOR 102

void selection_sort(int *vet){
	int i, j, aux=0, min=0;	
	 
	FILE *arquivo;

	arquivo = fopen("couting.txt","r");
 
	for(i =0 ; i < TAMANHO_VETOR  ; i++){
	fscanf(arquivo, "%d\n", &vet[i]);
				}  

	arquivo = fopen("arquivo.txt","w");
 
  
  for (i = 0; i < (TAMANHO_VETOR - 1); i++) {
      min = i;
    for (j = i+1; j < TAMANHO_VETOR; j++) {
        if (vet[j] < vet[min]) {
   min = j;
      }
    }    
    if (i != min) {
      aux = vet[i];
      vet[i] = vet[min];
      vet[min] = aux;
    }
  
	fprintf(arquivo,"%d\n", vet[i]);

	}
	
	fclose(arquivo);
}
		 
