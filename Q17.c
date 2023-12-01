/*
    7) O fatorial quádruplo de um número N é dado por (2n)!/n!
    Faça uma função recursiva que receba um número inteiro positivo N e retorne o 
    fatorial quádruplo desse número.
*/

#include <stdio.h>

int fat(int num){

    if(num > 1) return fat(num-1) *num;

    return num;
}

int fat_x4(int num){
    return fat(num*2) / fat(num);
}

int main(){
    int num;

    printf("Digite o Numero: ");
    scanf("%d", &num);

    if(num > 0)
        printf("Fatorial Quadruplo: %d\n", fat_x4(num));
    else 
        printf("Valor Invalido\n");
}