/******************************************************************************

Crie um programa para calcular e imprimir o valor de f....

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(){
  float calculo = 0;
  int x, n;

  printf("Informe o valor de  X: ");
  scanf("%d", &x);

  printf("Informe o valor de N: ");
  scanf("%d",&n);

  for(int contador = 1; contador <= n; contador++){

    calculo = calculo + (pow(x, contador) + contador + 1)/ (x + contador);

  }
  
  calculo = calculo * 3.0;
  
  printf("O valor da serie calculada é: : %f", calculo);

  return 0;
}
