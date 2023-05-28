/******************************************************************************

LISTA 2

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int dado(){
    int num;
   
    num = rand() % 6 + 1;
   
    return num;
}

int main()
{
    srand (time(NULL));
    
    int valor, um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, seis = 0;
    float p1, p2, p3, p4, p5, p6;
    
    for(int x = 0; x < 1000000; x++){
        valor = dado();
       
        if(valor == 1){
            um++;
           
        } else if(valor == 2){
            dois++;
           
        } else if(valor == 3){
            tres++;
           
        } else if(valor == 4){
            quatro++;
           
        } else if(valor == 5){
            cinco++;
           
        } else {
            seis++;
           
        }
    }
    
    p1 = ((float)(um) / 1000000) * 100;
	p2 = ((float)(dois) / 1000000) * 100;
	p3 = ((float)(tres) / 1000000) * 100;
	p4 = ((float)(quatro) / 1000000) * 100;
	p5 = ((float)(cinco) / 1000000) * 100;
	p6 = ((float)(seis) / 1000000) * 100;
   
    printf("VALORES 1 %f\n", p1);
    printf("VALORES 2 %f\n", p2);
    printf("VALORES 3 %f\n", p3);
    printf("VALORES 4 %f\n", p4);
    printf("VALORES 5 %f\n", p5);
    printf("VALORES 6 %f\n", p6);
   
    return 0;
}



