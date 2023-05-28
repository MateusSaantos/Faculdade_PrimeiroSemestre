/******************************************************************************

EX 1 LISTA
                           
*******************************************************************************/

#include <stdio.h>


int contaimpar(int n1, int n2){
   
    int contador = 0;
    for(int x = n1; x <= n2; x++){
        if(x % 2 != 0){
            contador++;
        }
    }
   
    return contador;
   
}

int main()
{
    int valor1, valor2, resp;
   
    printf("Informe o valor inicial: ");
    scanf("%d", &valor1);
   
    printf("Informe o valor final: ");
    scanf("%d", &valor2);
   
    if(valor1 > valor2){
       
        resp = contaimpar(valor2, valor1);
       
       
    } else {
       
        resp = contaimpar(valor1, valor2);
    }
   
    printf("A quantidade de valores impares no intervalo é de: %d", resp);

    return 0;
}


