#include <stdio.h>
#include <stdlib.h>

void vetores(float vetor1[], float vetor2[], int tamanhoVetor){
	
	for(int x = 0; x < tamanhoVetor; x++){
		printf("Digite o valor da primeira nota do aluno: ");
		scanf("%f", &vetor1[x]);
		
		printf("Digite o valor da segunda nota do aluno: ");
		scanf("%f", &vetor2[x]);
	}
	
}

void mediavetores(float vetor1[], float vetor2[], float vetorMedia[], int tamanhoVetor){
	for(int x = 0; x < tamanhoVetor; x++){
		vetorMedia[x] = (vetor1[x] + vetor2[x]) / 2; 
	}

}

void imprimir(float vetor1[], float vetor2[], float vetorMedia[], int tamanhoVetor){
	for(int x = 0; x < tamanhoVetor; x++){
		printf("Aluno %d \n: ", x+1);
		printf("Nota 1: %f \n", vetor1[x]);
		printf("Nota 2: %f \n", vetor2[x]);
		printf("Media: %f \n", vetorMedia[x]);
		
	}
	
}

int main (){
	int valorT = 10;
	float Notas1[valorT], Notas2[valorT], media[valorT];
	
	vetores(Notas1, Notas2, valorT);
	mediavetores(Notas1, Notas2, media, valorT);
	imprimir(Notas1, Notas2, media, valorT);
	
	return 0;
}
