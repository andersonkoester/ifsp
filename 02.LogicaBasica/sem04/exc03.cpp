#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char *argv[]){
	
	int i, n;
	int vet[5];
	
	printf("Insira os valores no vetor: \n");
	for(i = 0; i < 5; i++){
		scanf("%d", &vet[i]);
	}
	
	printf("\nImpressao do Resultado: \n");
	for(i = 5 - 1; i >= 0; i--){
		printf("%d \n", vet[i]);
	}

	system("PAUSE");
	return 0;
		
}
