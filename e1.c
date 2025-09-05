
#include <stdio.h>
#include <stlib.h>

int *vet;//vetores são ponteiros com posições i.
int tam;

int main ()
{
    /*Escreva um programa que aloque dinamicamente um 
    vetor v com n inteiros, o preencha com v[i] = 100*i, 
    imprima o conteúdo do vetor (os inteiros) e 
    por fim libere a área alocada. O número de 
    elementos do vetor (n) deve ser lido do teclado.*/

    tam = 100;
    vet = malloc(tam * sizeof(int));
    //verificar se o vetor foi alocado
    if (!vetor)
    {
        printf("erro de alocar o avetor\n")
        exit (1);
    }

    for (int i = 0; i < tam; i++)
        vetor[i] = i;

    for (int i = 0; i < tam; i++)
        printf("%d ",vetor[i]); //aqui provamos que não precisamos de [].
    printf ("\n");a

    return 0;
}
