/******************************************************************************

4. Receba as quatro notas de cada um de discentes da turma, calcule a média e indique se ele foi
aprovado ou não (Média >= 6). Imprima a média e o resultado para cada aluno. Imprima a média
final da turma.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int aluno = 0;
    int alunosTotal = 0;
    
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float nota4 = 0;
    
    float total = 0;
    float soma = 0;
    float media = 0;
    float somaTotal = 0;
    float mediaFinal = 0;
    
    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &aluno);
    
    alunosTotal = aluno;
    
    while(aluno != 0){
        printf("Informe a primeira nota do %d aluno: ", aluno);
        scanf("%f", &nota1);
        
        printf("Informe a segunda nota do %d aluno: ", aluno);
        scanf("%f", &nota2);
        
        printf("Informe a terceira nota do %d aluno: ", aluno);
        scanf("%f", &nota3);
        
        printf("Informe a quarta nota do %d aluno: ", aluno);
        scanf("%f", &nota4);
        
        soma = nota1 + nota2 + nota3 + nota4;
        media = soma / 4;
        somaTotal = somaTotal + media;
        
        if(media >= 6){
            printf("PARABENS!! Você foi aprovado com media: %0.2f \n", media);
        } else {
            printf("Infelizmente você foi reprovado, sua media foi de: %0.2f \n", media);
        }
        
        soma = 0;
        aluno--;
    }
    
    mediaFinal = somaTotal / alunosTotal;
    
    printf("A media final da turma é de: %0.2f \n", mediaFinal);

    return 0;
}

