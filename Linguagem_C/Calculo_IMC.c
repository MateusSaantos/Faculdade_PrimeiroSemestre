/******************************************************************************

Calcular IMC

*******************************************************************************/
#include <stdio.h>
#include<math.h>


int main()
{
    //Variaveis
    float peso = 0.0;
    float altura = 0.0;
    float imc = 0.0;
    
    printf("Calculo de IMC (INDICE DE MASSA CORPORAL)");
    
    //Lendo o peso
    printf("Informe seu peso: ");
    scanf("%f", &peso);
    
    //Lendo a altura
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    
    //Calculando o IMC
    imc = peso / (pow (altura, 2.0));

    //Se o IMC for menor ou igual 18.5    
    if(imc <= 18.5) {
        printf("Atenção! você esta em estado de SUBNUTRIÇÃO! Para mais informações consulte um profissional. ");
        printf("Seu IMC é de %f", imc);

        //Se o IMC for maior ou igual que 18.6 e menor ou igual que 24.9  
        } else if ( imc >= 18.6 && imc <= 24.9 ){
            printf("Parabens! Você esta em uma escala SAUDAVEL! Para mais informações consulte um profissional. ");
            printf("Seu IMC é de %f", imc);
    
        //Se o IMC for maior ou igual que 25.00 e menor ou igual que 29.9  
        } else if (imc >= 25.0 && imc <= 29.9){
            printf("Atenção! você esta em estado de SOBREPESO! Para mais informações consulte um profissional. ");
            printf("Seu IMC é de %f", imc);
    
        //Se o IMC for maior ou igual que 30.00 e menor ou igual que 34.9
        } else if (imc >= 30.0 && imc <= 34.9){
            printf("Atenção! você esta em estado de OBESIDADE 1! Para mais informações consulte um profissional. ");
            printf("Seu IMC é de %f", imc);
            
        //Se o IMC for maior ou igual que 35.0 e menor ou igual que 39.9    
        } else if(imc >= 35.0 && imc <= 39.9){
            printf("Atenção! você esta em estado de OBESIDADE 2! Para mais informações consulte um profissional. ");
            printf("Seu IMC é de %f", imc);
            
        //Se o IMC for maior ou igual a 40.00    
        } else if(imc >= 40.00){
            printf("Atenção! você esta em estado de OBESIDADE 3! Para mais informações consulte um profissional. ");
            printf("Seu IMC é de %f", imc);
        }
    return 0;
}
