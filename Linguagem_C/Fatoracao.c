/******************************************************************************

Escreva um programa para calcular o valor de ex, a qual receba x (em radianos), a partir da seguinte
serie:

ex = 1 + x + x2
2! + x3
3! + x4
4! + ... 

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int
main (){
    
    int fat, n, fixo, controle, formula = 0, quadrado;
    float final = 0.0, formulaP;
    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &n);
    
    controle = n;
    fixo = n;

    while(controle >= 1){
        for(fat = 1; n > 1; n = n - 1)
        fat = fat * n;

    //printf("\nFatorial calculado: %d", fat); 
    
    quadrado = pow(fixo, controle);
    
    formulaP = quadrado / fat;
    formula = formula + formulaP;
    controle--;
    n = controle;
    
    }
    
    printf("\n%d", fixo);
    printf("\n%d", formula);
    final = 1.0 + fixo + formula;
    printf("Formula: %f", final);
    return 0;
}  

