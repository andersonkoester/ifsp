//******************************************************
//Instituto Federal de S�o Paulo - Campus Sert�ozinho
//Disciplina......: M2LPBA - 201901
//Programa��o de Computadores e Dispositivos M�veis
//Aluno...........: Anderson Vilmar Foletto Koester
//******************************************************
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

float AreaTriangulo (float x, float y){
	float result;
	result = (x*y)/2;
	
	return result;
}


int main(int argc, char *argv[]){

	float base, altura, area;
	
	printf("Digite a base e a altura do triangulo: ");
	scanf("%f", &base);
	scanf("%f", &altura);
	
	area = AreaTriangulo(base, altura);
	
	printf("A area vale: %f", area);
	

	system("PAUSE");
	return 0;
		
}
