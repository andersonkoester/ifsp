//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M2LPBA - 201901
//Programação de Computadores e Dispositivos Móveis
//Aluno...........: Anderson Vilmar Foletto Koester
//******************************************************
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char *argv[]){
	// OBJETIVO.....: Inicializar as variaveis utilizadas para o sistema 
	int i, vetor[5], soma, multi;
	// OBJETIVO.....: Atribuir valores iniciais para as variaveis de soma e multi
	soma = 0;	
	multi = 1;
	
	// OBJETIVO.....: Loop para leitura dos valores informados pelo usuario e armazenar no vetor
	for(i = 0; i < 5; i++){
		printf("\nInforme um valor inteiro para a posicao %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	// OBJETIVO.....: Loop para efetuar as operacoes matematicas (soma e multiplicacao) e armazenar o resultado em sua respectiva variavel
	for(i = 0; i < 5; i++){
		soma = soma + vetor[i];
		multi = multi * vetor[i];
	}
	
	// OBJETIVO.....: Imprime na tela do usuario o resultado da soma
	printf("\n\nO valor da soma eh %d: ", soma);
	// OBJETIVO.....: Imprime na tela do usuario se o resultado da soma eh negativo ou positivo utilizando o operador ternario
	printf("\nO valor da soma eh %s", soma < 0 ? "negativo" : "positivo");
	
	// OBJETIVO.....: Imprime na tela do usuario o resultado da multiplicacao
	printf("\n\nO valor da multiplicacao eh %d: ", multi);
	// OBJETIVO.....: Imprime na tela do usuario se o resultado da multiplicacao eh negativo ou positivo utilizando o operador ternario
	printf("\nO valor da multiplicacao eh %s \n\n", multi < 0 ? "negativo" : "positivo");

	system("PAUSE");
	return 0;
		
}
