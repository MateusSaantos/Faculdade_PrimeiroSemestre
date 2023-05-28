/******************************************************************************

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio() {
    return 1 + rand() % 20;
}

int main (){

	int matriz[3][6], valor;
	
	srand(time(NULL));
	
	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 6; y++){
			matriz[x][y] = aleatorio();
			printf("[ %d ]",matriz[x][y]);
		}
		printf("\n");
	}
	
	printf("Informe um valor para multiplicar: ");
	scanf("%d", &valor);
	
	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 6; y++){
			matriz[x][y] = matriz[x][y] * valor;
			printf("[ %d ]", matriz[x][y]);
		}
		printf("\n");
	}
	return 0;
}

