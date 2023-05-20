/******************************************************************************

Escreva um programa  que receba alarios de funcionarios até que o valor -999 seja inserido. Apos o termino exiba o menor o maior
salario alem da media salarial da empresa.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salario = 0;
    
    float maior;
    float menor;
    float media;
    
    int contador = 0;
    
    float total = 0;
    
    printf("Informe o salario: ");
    scanf("%f", &salario);
    
    maior = salario;
    menor = salario;
    
    total = total + salario;
    
    contador++;
    
    while (salario != -999){
        printf("Informe o salario: ");
        scanf("%f", &salario);
        
        if(salario > maior){
            maior = salario;
        }
        
        if(salario < menor && salario != -999){
            menor = salario;
        }
        
        total = total + salario;
        
        contador++;
    }
    
    total = total - -999;
    media =  total / contador;
    
    printf("O maior salario é: %.2f\n", maior);
    printf("O menor salario é: %.2f\n", menor);
    printf("A soma dos salarios é %.2f\n: ", total);
    printf("A media é: %.2f\n", media);
    
    
    return 0;
}

