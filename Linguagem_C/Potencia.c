/******************************************************************************

Escreva sua propria função que calcule e imprima a potencia de um numero de acordo com
a base e o expoente fornecido

*******************************************************************************/
#include <stdio.h>

int potencia(int valor, int elevado){
    
    int resposta = 1;
    
    for(int x = 1; x <= elevado; x++){
       
        resposta = resposta * valor;
        
    }
    
    return resposta;
}

int main()
{
    int valor, elevado, retorno;
    
    printf("Informe o primeiro valor:");
    scanf("%d", &valor);
    
    printf("Informe o valor que vai ser elevado");
    scanf("%d", &elevado);
    
    retorno = potencia(valor, elevado);
    
    printf("A resposta é %d: ", retorno);

    return 0;
}

