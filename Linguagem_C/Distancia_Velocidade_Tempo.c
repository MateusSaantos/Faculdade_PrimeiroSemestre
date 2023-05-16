/******************************************************************************

Formula D = V x T

*******************************************************************************/
#include <stdio.h>

int main()
{
    float d = 0;
    float v = 0;
    float t = 0;
    
    float resp = 0;
    
    printf("Informe a Distancia D: ");
    scanf("%f", &d);
    
    printf("Informe a Velocidade V: ");
    scanf("%f", &v);
    
    printf("Informe o Tempo T: ");
    scanf("%f", &t);
    
    if(d == 0){
        resp = v * t;
        printf("A distancia é %f", resp);
        
    } else if(v == 0){
        resp = d / t;
        printf("A velocidade é %f", resp);
        
    } else if(t == 0){
        resp = d / v;
        printf("O tempo é %f", resp);
    }
    return 0;
}

