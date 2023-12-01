/*
    12) Faça uma função recursiva que receba um número inteiro positivo N e imprima 
    todos os números naturais de 0 até N em ordem crescente.

    13) Faça uma função recursiva que receba um número inteiro positivo N e imprima 
    todos os números naturais de 0 até N em ordem decrescente.
*/

#include <stdio.h>

void print_cresc(int num) {
    if(num >= 0){
        print_cresc(num-1);
        printf("%d ", num);
    }
}

void print_decresc(int num) {
    if(num >= 0){
        printf("%d ", num);
        print_decresc(num-1);
    }
}

int main(){
    int num;

    printf("Digite o Numero: ");
    scanf("%d", &num);

    print_cresc(num);
    printf("\n");
    print_decresc(num);
    printf("\n");
}