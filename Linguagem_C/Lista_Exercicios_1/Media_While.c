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
    int i = 0;
    float media = 0;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    soma = soma + idade;
    
    i++;
    
    while(idade != -1){
        printf("Digite a idade: ");
        scanf("%d", &idade);
        
        if(idade != -1){
            soma = soma + idade;
            i++;   
        }
    }
    
    media = (float)soma / i;
    printf("A media das idades é: %0.2f", media);
    
    return 0;
}

