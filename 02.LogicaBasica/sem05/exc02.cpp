#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int calcula (int x, int y){
	int soma;
	soma = x + y;
	return soma;
}

int main(int argc, char *argv[]){
	int num1, num2, resultado;
	num1 = 2;
	num2 = 4;
	
	resultado = calcula(num1, num2);
	
	printf("O resultado vale: %d \n", resultado);

	system("PAUSE");
	return 0;
		
}
