/******************************************************************************

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int aleatorio(){
	
	return 1 + rand() % 10;
}

int main (){
    
    srand (time(NULL));
	
	int matriz[5][5];
	int i, j, menor, pos, pos2, maior;
	int V[5] = {0, 0, 0, 0, 0}, J[5] = {0, 0, 0, 0, 0};
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			matriz[i][j] = aleatorio();
			printf("[ %d ]", matriz[i][j]);
			
		}
		printf("\n");
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			V[i] = V[i] + matriz[i][j];
		}
	}
	
	menor = V[0];
	for(i = 0; i < 5; i++){
		if(menor > V[i])
		{
			menor = V[i];
			pos = i;
		}
	}
	
	for(j = 0; j < 5; j++){
		for(i = 0; i < 5; i++){
			J[j] += matriz[i][j];
			
		}
	}
	
	maior = J[0];
	for(j = 0; j < 5; j++){
		if (maior < J[j] ){
			maior = J[j];
			pos2 = j;
		}
	}
	
	printf("MENOR SOMA = [%d]\n", pos);
	printf("MAIOR SOMA = [%d]\n", pos2);
	
	return 0;
}
