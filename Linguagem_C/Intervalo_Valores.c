#include <stdio.h>

int main()
{
    int value = 0;
    
    printf("Informe um valor no intervalo de 30 a 120 inclusive: ");
    scanf("%d", &value);
    
    if(value >= 30 && value <= 120){
        printf("O valor %d esta no intervalo entre 30 e 120 inclusive!", value);
        
    } else {
        printf("O valor %d não esta no intervalo!", value);
    }

    return 0;
}

