/******************************************************************************

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include <time.h>

float decimal(){
    int aleatorio = rand() % 5 + 1;
    float valor;
    
    if(aleatorio % 2 == 0){
        valor = aleatorio / 3.0;
        
    } else {
        valor = aleatorio / 2.0;    
    }
    
    return valor;
}


float media(float matriz_decimal[4][4], float k){
    float media, soma = 0.0;
    int contador = 0;
    
     for(int i = 0; i < 4; i++){
         
         for(int j = 0; j < 4; j++){
             
           if (matriz_decimal[i][j] < k){
                contador++;
        
                soma = soma + matriz_decimal[i][j];
           }
        }
    }
    
    media = soma / contador;
    return media;
}

float diagonalPrincipal(float matrizdiagonal[4][4]){
    int cont = 0;
    float soma = 0.0, mediaDiagonal;
    for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(i == j){
			    cont++;
			    soma = soma + matrizdiagonal[i][j];
			}
	    }
    }
	mediaDiagonal = soma / cont; 
    
    return mediaDiagonal;
}


void trocaDiagonal(float matrizD[4][4], float k){
    float somaDiagonal = 0.0;
    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++){
            if(x == y){
                somaDiagonal = somaDiagonal + matrizD[x][y];
            }   
        }
    }
    
    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++){
            if(matrizD[x][y] == k){
                matrizD[x][y] = somaDiagonal;
            }
        }
    }
    
    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++){
            printf("[ %f ]", matrizD[x][y]);
            
        }
        printf("\n");
    }
    
    
}



int main() {
    srand (time(NULL));
    float matriz[4][4], resposta1, constante, resposta2;
    
    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++){
            matriz[x][y] = decimal();
        }
    }
    
    printf("MATRIZ COM VALORES TROCADOS\n");
    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++){
            printf("[ %f ]", matriz[x][y]);
            
        }
        printf("\n");
    }
    
    printf("Informe o valor da constante: ");
    scanf("%f", &constante);
    
    resposta1 = media(matriz, constante);
    
    printf("A MEDIA DOS VALORES MENORES QUE A CONSTANTE É: %f\n", resposta1);
    
    resposta2 = diagonalPrincipal(matriz);
    
    printf("A MEDIA DA DIAGONAL PRINCIPAL É: %f\n", resposta2);
    
    trocaDiagonal(matriz, constante);

    return 0;
}





