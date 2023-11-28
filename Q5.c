/*
    Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.
*/

#include <stdio.h>

int sum(int num){

    if(num > 1) return sum(num-1) + num;

    return num;
}

int main(){
    int num;

    printf("Digite o Numero: ");
    scanf("%d", &num);

    printf("Soma: %d\n", sum(num));
    
    return 0;
}