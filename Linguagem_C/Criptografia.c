#include <stdio.h>
#include <math.h>

int main(){
    //Variaveis
	int codigo = 0;
	int tamanho = 0;
	int tipo = 0;
	int criptografia = 0;
	
	printf("VAMOS CRIAR SUA CRIPTOGRAFIA NO SISTEMA");
	
	//Lendo o codigo
	printf("Iinforme seu codigo de usuario: ");
	scanf("%d",&codigo);
	
	//Lendo o tamanho
	printf("Digite o tamanho de sua criptografia: ");
	scanf("%d",&tamanho);
	
	//Lendo o tipo
	printf("Por fim digite o tipo de sua criptografia: ");
	scanf("%d",&tipo);
	
	//Se tipo igual a 3 e for um codiog impar
	if (tipo ==3 && codigo % 2 != 0){
	    
	    //Utilizando a formula
		criptografia = pow(codigo, 13) + 23 * tamanho + 257;	
		printf("CRIPTOGRAFIA: %d", criptografia);	
		    
		    //Se o tipo for igual a 5 e o codigo for par
			} else if(tipo == 5 && codigo % 2 == 0){
			    
			    //Utilizando a formula
				criptografia = 19 * pow(codigo, 47) + (tamanho - 179);
				printf("CRIPTOGRAFIA: %d",criptografia);
				
			}else{
			    
			    //Utilizando a formula
				criptografia = pow(codigo + tamanho, 29) + 17 * codigo + (tamanho - 127) + 1;
				printf("CRIPTOGRAFIA: %d",criptografia);
			}
	
	return 0;
}
