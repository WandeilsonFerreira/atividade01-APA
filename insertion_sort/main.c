#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"
#define TAMANHO_VETOR 102

void insertion_sort(int *vet);
 
int main (int argc, char *argv[]){

	int vet[TAMANHO_VETOR];
  	
	insertion_sort(&vet[0]);
	
	printf("Arquivo organizado com sucesso!\n\n");
 
	
	return  ;
}
