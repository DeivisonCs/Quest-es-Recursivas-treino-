/*
    Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N.
*/
#include <stdio.h>

int fat(int num){

    if(num > 1) return fat(num-1) *num;

    return num;
}

int main(){
    int num;

    printf("Digite o Numero: ");
    scanf("%d", &num);

    if(num < 0) printf("Numero Invalido!\n");
    else printf("Fatorial: %d\n", fat(num));


    return 0;
}