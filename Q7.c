/*
    Crie um programa em C que receba um vetor de números reais com 100 elementos. 
    Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 20

void array_sum(int array[], int limit){

    if(limit > MAX/2){
        int aux = array[MAX-limit];
        array[MAX-limit] = array[limit-1];
        array[limit-1] = aux;

        array_sum(array, limit-1); 
    }
}

void show_array(int array[]){
    for(int i=0; i<MAX; i++)
        printf("%d ", array[i]);

    printf("\n");
}

int main(){
    int vet[MAX];

    for(int i=0; i<MAX; i++) 
        vet[i] = rand() %100;
    
    printf("Antes:\n");
    show_array(vet);

    array_sum(vet, MAX);

    printf("Depois:\n");
    show_array(vet);
    
    return EXIT_SUCCESS;
}