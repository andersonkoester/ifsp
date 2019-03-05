#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char *argv[]){
	int x, y, z, soma;
	int loop = 0;
	do{ 	
		printf("Digite o valor de um dos angulos do triangulo: ");
		scanf("%d", &x);
		
		printf("Digite o valor do segundo angulo do triangulo: ");
		scanf("%d", &y);
		
		printf("Digite o valor do terceiro angulo do triangulo: ");
		scanf("%d", &z);
		
		soma = x + y + z;
		
		if(soma != 180){
			printf("A soma dos angulos deve ser 180");
		}else{
			if( x == 90 || y == 90 || z == 90 ){
				printf("Este triangulo eh reto.");
			}else if( x > 90 || y > 90 || z > 90 ){
				printf("Este triangulo eh obtuso.");
			}else{
				printf("Este triangulo eh acutangulo.");
			}
		}
		
		if( x == 9999 )
			loop = 1;
		
		system("PAUSE");
		system("cls");
	}while(loop == 0);
}
