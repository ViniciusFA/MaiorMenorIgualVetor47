#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    setlocale(LC_ALL," ");
    int i,vetor[10],x,maior,menor,igual,somaMaior=0,somaMenor=0,somaIgual=0;

    //ler o valor de X apenas uma vez. Entrada de dados
    printf("\nDigite um valor positivo para X: \n");
    scanf("%d", &x);


    for(i=1;i<=10;i++){
    //ler o valor do vetor 10 vezes  - Entrada de dados
    printf("\nDigite um valor positivo para o vetor: \n");
    scanf("%d", &vetor[i]);
    //processamento
    if(vetor[i]>x){
        maior = vetor[i];

        somaMaior = somaMaior + 1;

    }else if(vetor[i]<x){
        menor = vetor[i];
       ;
        somaMenor = somaMenor + 1;

    }else {
        igual = vetor[i];
         somaIgual = somaIgual + 1;

    }
    }
    //Saída
        printf("\nQuantidade de números maiores que X: %d\n",somaMaior);
        printf("\nQuantidade de números menores que X: %d \n",somaMenor);
        printf("\nQuantidade de números iguais que X: %d \n",somaIgual);










    return 0;
}
