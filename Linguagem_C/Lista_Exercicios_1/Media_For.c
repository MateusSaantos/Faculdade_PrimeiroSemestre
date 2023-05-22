/******************************************************************************

 Ler a idade de discentes e calcular a média, utilizando:
a) for – 30 pessoas;
b) while – até que a idade -1 seja informada;

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade = 0;
    int soma = 0;
    int i;
    float media = 0;
    
    for(i = 1; i <= 30; i++){
        printf("Informe a %d idade: ", i);
        scanf("%d", &idade);
        
        soma = soma + idade;
    }
    
    media = (float)soma / 30;
    printf("A media das idades é: %f", media);
    
    return 0;
}

