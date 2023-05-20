/******************************************************************************

Escreva um programa que leia N numeros e apresente o MAIOR o MENOR e a MEDIA

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Armazenar a quantidade de numeros o maior e o menor valor
    int quantidade = 0;
    int maior = 0;
    int menor = 0;
    
    //Receber valores que o cliente digitou
    int valor = 0;
    
    //Receber resultado da media
    float media = 0;
    
    //Armazenar a quantidade de numeros que usuario informou para tirar media
    int quantidadeMedia = 0;
    
    //Receber a soma dos valores
    int soma = 0;
    
    //Ler quantidade de numeros que usuario deseja digitar
    printf("Quantos valores você deseja informar: ");
    scanf("%d", &quantidade);
    
    //Atribuindo o valor para tirar a media no final
    quantidadeMedia = quantidade;
    
    //Inserindo o primeiro valor
    printf("Insira o %d valor: ", quantidade);
    scanf("%d", &valor);
        
    //Atribuindo tanto ao menor valor quanto ao maior
    menor = valor;
    maior = valor;
      
    //Fazendo a soma dos valores    
    soma = soma + valor;
    
    //Reduzindo um na quantidade de numeros que falta digitar  
    quantidade--;
    
    //Enquanto a quantidade de numeros a digitar for diferente de zero
    while(quantidade != 0){
        
        //Lendo o valor
        printf("Insira o %d valor: ", quantidade);
        scanf("%d", &valor);
        
        //Testando se é maior que o valor na variavel maior
        if(valor > maior){
            //Se for maior passa a ter o valor
            maior = valor;
        }
        
        //Testando se é menor que o valor na variavel menor
        if(valor < menor){
            //Se for menor passa a ter o valor
            menor = valor;
        }
        
        //Reduzindo um na quantidade de numeros que falta digitar 
        quantidade--;
        
        //Somando todos os valores
        soma = soma + valor;
    }
    

    //Tirando a mêdia
    media = (float)soma / quantidadeMedia;
    
    //Imprimindo o menor
    printf("O menor valor é %d\n", menor);
    //Imprimindo o maior
    printf("O maior valor é %d\n", maior);
    //Imprimindo a media
    printf("A média é %f\n", media);

    return 0;
}


