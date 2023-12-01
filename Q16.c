/*
    16) A função fatorial duplo é definida como o produto de todos 
    os números naturais ímpares de 1 até algum número natural ímpar N.
    Assim, o fatorial duplo de 5 é
    5!! = 1 * 3 * 5 = 15
    Faça uma função recursiva que receba um número inteiro positivo impar N
    e retorne o fatorial duplo desse número
*/

#include <stdio.h>

int fat_x2(int num) {

    if(num > 1){
        if(num%2 != 0) return fat_x2(num-1) *num;
        
        return fat_x2(num-1);
    }

    return num;
}

// O fatorial duplo não é necessáriamente a multiplicação do impares, ex: fatDuplo(6) = 6*4*2
int fatDuplo(int num){

    if(num > 1) return fatDuplo(num-2) *num;
    
    return 1;
}

int main(){
    int num;

    printf("Digite o Numero: ");
    scanf("%d", &num);

    if(num > 0){
        printf("Fatorial Duplo: %d\n", fatDuplo(num));
        printf("Fatorial Duplo Impar: %d\n", fat_x2(num));
    }
    else 
        printf("Valor Invalido\n");
}