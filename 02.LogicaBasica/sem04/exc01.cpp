#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char *argv[]){
	
	float valorQualquer;
	float v[10];
	int i;
	
	for(i = 0; i < 10 ; i++ ){
		printf("\nEntre com o elemento %i do vetor", i + 1);
		scanf("%f", &v[i]);
	}
	
	valorQualquer = v[0];
	for(i = 0; i < 10; i++){
		if( v[i] > valorQualquer ){
			valorQualquer = v[i];
		}
	}
	
	printf("\nO valor encontrado acima eh: %.1f", valorQualquer);
	system("PAUSE");
	return 0;
		
}
