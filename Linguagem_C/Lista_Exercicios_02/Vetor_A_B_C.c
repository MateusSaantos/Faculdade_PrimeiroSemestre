/******************************************************************************

EX 3

*******************************************************************************/
#include <stdio.h>

int main()
{
	int vetorA[10], vetorB[10], vetorC[10];
	
	for(int x = 0; x < 10; x++){
		printf("Digite o %d valor A: ", x);
		scanf("%d", &vetorA[x]);
		
	}

	for(int x = 0; x < 10; x++){
		printf("Digite o %d valor B: ", x);
		scanf("%d", &vetorB[x]);	
		
	}
	
	printf("RESPOSTA: \n");
	for(int x = 0; x < 10; x++){
		vetorC[x] = vetorA[x] * vetorB[x];
		printf("VETOR: [%d] = %d\n", x, vetorC[x]);
		
	}
	
    return 0;
}

