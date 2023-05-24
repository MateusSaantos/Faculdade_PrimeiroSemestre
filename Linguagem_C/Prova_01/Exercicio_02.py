/******************************************************************************* 

A prefeitura de uma cidade fez uma pesquisa entre seus habitantes...

*******************************************************************************/
#include <stdio.h>

int main(){
    float salario, menor, mediaSalario, mediaFilhos, percentual, salarioTotal; 
    
    int filhos;
    int contador = 0;
    int contSalario = 0;
    int filhosTotal = 0;
    
    printf("Informe o salario: ");
    scanf("%f", &salario);
    
    if(salario < 0.0){
        return 0;
    }
    
    printf("Informe a quantidade de filhos: ");
    scanf("%d", &filhos);
    
    contador++;
    
    filhosTotal = filhosTotal + filhos;
    salarioTotal = salarioTotal + salario;
    
    if(salario <= 800.00){
        contSalario++;
    }
    
    menor = salario;
    
    while(salario >= 0){
        printf("Informe o salario: ");
        scanf("%f", &salario);
        
        if(salario <= 0){
            break;
        }
        
        printf("Informe a quantidade de filhos: ");
        scanf("%d", &filhos);
        
        contador++;
        
        filhosTotal = filhosTotal + filhos;
        salarioTotal = salarioTotal + salario;
        
        if(salario <= 800.00){
            contSalario++;
        }
        
        if(salario < menor){
            menor = salario;
        }
    }
    
    mediaSalario = (float)salarioTotal / contador;
    mediaFilhos = (float)filhosTotal / contador;
    
    printf("Media salario da população é: %f\n", mediaSalario);
    printf("Media do numero de filhos é: %f\n", mediaFilhos);
    printf("O Menor salario é: %f\n", menor);
    
    percentual = ((float)contSalario / contador) * 100;
    
    printf("Percentual pessoas com salario até R$ 800,00 é %f\n", percentual);
    
    return 0;
}



