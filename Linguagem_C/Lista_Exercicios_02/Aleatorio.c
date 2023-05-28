/******************************************************************************

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(){
	
	return 10 + rand() % 10;
}

int main (){
	srand (time(NULL));
	int vetor[10];	
	
	for(int x = 0; x < 10; x++){
		vetor[x] = aleatorio();
		
		printf("[ %d ]\n", vetor[x]);
	}
	
	return 0;
}

