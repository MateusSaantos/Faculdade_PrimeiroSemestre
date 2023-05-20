/******************************************************************************
Faça um programa que calcule quantas notas de R$ 50,00 R$ 10,00 e R$ 1,00 são 
necessarias para se pagar uma conta cujo valor é fornecido;
*******************************************************************************/

#include <stdio.h>

int main()
{
    //Variavel para receber a quantidade das notas
    int notaC = 0;
    int notaD = 0;
    int notaU = 0;
    
    //Valor da conta do usuario
    int value = 0;
    
    //Valor da conta do usuario menos as notas
    int resto = 0;
    
    //Calcular a diferença entre a conta e as notas
    int diferenca = 0;
    
    //Lendo o valor da conta
    printf("Boa Tarde! Qual o valor da conta deseja pagar? ");
    scanf("%d", &value);
    
    //Vendo se o valor não é negativo ou igual a zero
    if(value <= 0){
        printf("Valor invalido");
    } else {
        //Informando o valor da conta
        printf("O valor da conta é: %d ", value);
        
        //Fazendo a divisaão e vendo quantas notas de 50 vão ser necessarias
        notaC = value / 50;
        
        //Pegando o resto que sobra da conta
        resto = value % 50;
        
        //Fazendo a conta para subtrair o valor das notas
        diferenca = 50 * notaC;
        
        //Atualizando a conta
        value = value - diferenca;
        
        //Imprimindo as notas de 50
        printf("\nNotas de R$ 50,00 necessarias: : %d ", notaC);
        
        //Fazendo a divisaão e vendo quantas notas de 10 vão ser necessarias
        notaD = value / 10;
        
        //Pegando o resto que sobra da conta
        resto = value % 10;
        
        //Fazendo a conta para subtrair o valor das notas
        diferenca = 10 * notaD;
        
        //Atualizando a conta
        value = value - diferenca;
        
        //Imprimindo as notas de 10
        printf("\nNotas de R$ 10,00 necessarias: : %d ", notaD);
        
        //Fazendo a divisaão e vendo quantas notas de 01 vão ser necessarias
        notaU = value / 1;
        
        //Pegando o resto que sobra da conta
        resto = value % 10;
        
        //Fazendo a conta para subtrair o valor das notas
        diferenca = 10 * notaU;
        
        //Atualizando a conta
        value = value - diferenca;
        
        //Imprimindo as notas de 01
        printf("\nNotas de R$ 01,00 necessarias: : %d ", notaU);
        
    }
    return 0;
}


