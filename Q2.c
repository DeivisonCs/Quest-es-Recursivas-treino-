/*
    Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência Fibonacci. 
    Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
*/

#include <stdio.h>

int fibonacci(int position, int num1, int num2){

    if(position >= 1) return fibonacci(position-1, num2, (num1 + num2));
    
    return num2;
}

int main(){
    int num;

    printf("Digite o Numero: ");
    scanf("%d", &num);

    if(num < 0) printf("Numero Invalido!\n");
    else printf("Resultado: %d\n", fibonacci(num, -1, 1));

    return 0;
}