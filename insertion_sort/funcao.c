#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_VETOR 102

void insertion_sort(int *vet){
	int i, j, aux=0, min=0;	
	 
	FILE *arquivo;

	arquivo = fopen("couting.txt","r");
 
	for(i =0 ; i < TAMANHO_VETOR; i++){
		fscanf(arquivo, "%d\n", &vet[i]);
		 		
		arquivo = fopen("arquivo.txt","w");
		
		for (i = 1; i < TAMANHO_VETOR+1; i++) {
			aux = vet[i];
			j = i - 1;

		while ((j >= 0) && (vet[j] > aux)) {
			vet[j + 1] = vet[j];
			j--;
		}		
		vet[j + 1] = aux;
		
		fprintf(arquivo,"%d\n", vet[i]);
		}
		fclose(arquivo);
	}
}
 
