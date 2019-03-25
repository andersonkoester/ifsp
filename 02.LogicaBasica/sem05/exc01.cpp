//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M2LPBA - 201901
//Programação de Computadores e Dispositivos Móveis
//Aluno...........: Anderson Vilmar Foletto Koester
//******************************************************
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void imprimir3(){
	printf("3 \n");
}

void imprimir2(){
	imprimir3();
	printf("2 \n");
}

void imprimir1(){
	printf("1 \n");
}

int main(int argc, char *argv[]){
	imprimir1();
	imprimir2();

	system("PAUSE");
	return 0;
		
}
