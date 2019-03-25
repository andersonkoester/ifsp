//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M2LPBA - 201901
//Programação de Computadores e Dispositivos Móveis
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
