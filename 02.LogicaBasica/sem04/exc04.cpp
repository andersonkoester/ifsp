#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char *argv[]){
	
	int A[5], i;
	
	A[0] = 2;
	A[1] = 6;
	A[2] = 7;
	A[3] = 9;
	A[4] = 11;

	for(i = 0; i < 5; i++){
		if(A[i] % 2 == 0){
			printf("%d \n", A[i]);
		}
	}

	system("PAUSE");
	return 0;
		
}
