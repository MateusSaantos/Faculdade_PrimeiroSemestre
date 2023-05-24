/******************************************************************************

Pedro tem 1,60 metro e cresce 2 centimetros por ano, enquanto João tem 1,50 metro e cresce 3...

*******************************************************************************/

#include <stdio.h>

int main(){
    float pedro = 1.60;
    float joao = 1.50;
    int ano = 0;
    
    while(joao <= pedro){
        joao = joao + 0.03;
        pedro = pedro + 0.02;
        
        ano++;
    }
    
    printf("São necessarios %d anos para que João seja maior que Pedro.", ano);
    return 0;
}


