/******************************************************************************

3. Ler dois números inteiros e continuar a leitura enquanto os dois sejam iguais. Utilize do-while;

*******************************************************************************/

#include <stdio.h>

int main()
{
    int primeiro = 0;
    int segundo = 0;
    
    
    do {
        printf("Informe o primeiro numero: ");
        scanf("%d", &primeiro);
        
        printf("Informe o segundo numero: ");
        scanf("%d", &segundo);
        
    }while (primeiro == segundo);
    
    return 0;
}

