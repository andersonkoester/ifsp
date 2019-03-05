#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	if(x > 0){
	   printf("O valor eh maior que zero");
	}else{
	   printf("O valor eh igual ou menor que zero");
	}
	return 0;
}
