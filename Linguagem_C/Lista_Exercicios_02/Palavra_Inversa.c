/******************************************************************************

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void inverter(char palavra[]){
	
	int fim, controle, tamanho;
	tamanho = strlen(palavra);
	
	fim = tamanho - 1;	
	
	for(int x = 0; x < tamanho / 2; x++){
		controle = palavra[x];
		palavra[x] = palavra[fim];
		
		palavra[fim] = controle;
		
		fim--;
	}
	
	
}

int main (){
	
	char palavra[40];

	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	inverter(palavra);
	
	printf("INVERTIDA: %s", palavra);
	
    return 0;	
}
