#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int x;
	int loop = 0;
	do{ 	
		printf("Digite um numero: ");
		scanf("%d", &x);
		
		if(x > 0 && x < 10){
			printf("Voce entrou na PARTE 1 do codigo");
		}
		
		if(x <= 0 && x > -10){
			printf("Voce entrou na PARTE 2 do codigo");
		}
		
		if(x >= 10 ){
			printf("Voce entrou na PARTE 3 do codigo");
		}	
		
		if( x == 9999 )
			loop = 1;
		
		system("PAUSE");
		system("cls");
	}while(loop == 0);
}
