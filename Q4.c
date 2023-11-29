/*
    Faça uma função recursiva que permita somar os elementos de um vetor de inteiros.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int array_sum(int array[], int index){

    if(index > 0) return array_sum(array, index-1) + array[index];

    return array[index];
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
    
    printf("Vetor:\n");
    show_array(vet);

    printf("Soma: %d\n", array_sum(vet, MAX-1));
    
    return EXIT_SUCCESS;
}