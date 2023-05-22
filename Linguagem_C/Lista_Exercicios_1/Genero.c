/******************************************************************************

Ler o gênero de discentes e informar a quantidade de: masculinos, femininos, não binários e outros,
utilizando:
a) for – 30 pessoas;
b) while – até que o gênero ’Q’ seja informado;

*******************************************************************************/
#include <stdio.h>

int main()
{
    int masculino = 0;
    int feminino = 0;
    int binario = 0;
    int outro = 0;
    
    int genero;
    
    int i;
    
    for(i = 0; i < 30; i++){
        printf("Informe seu gênero sendo: \n 1 - MASCULINO \n 2 - FEMININO \n 3 - NÃO BINARIO \n 4 - OUTROS \n");
        scanf("%d", &genero);
        
        if(genero == 1){
            masculino++;
            
        } else if(genero == 2){
            feminino++;
            
        } else if(genero == 3){
            binario++;
            
        } else if(genero == 4){
            outro++;
            
        }
    }
    
    printf("MASCULINO: %d\n", masculino);
    printf("FEMININO: %d\n", feminino);
    printf("NÃO BINARIO: %d\n", binario);
    printf("OUTROS: %d\n", outro);
    

    return 0;
}

