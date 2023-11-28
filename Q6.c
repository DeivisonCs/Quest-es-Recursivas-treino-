/*
    Crie um programa em C, que contenha uma função recursiva 
    que receba dois inteiros positivos k e n e calcule k^n. 
    Utilize apenas multiplicações. O programa principal deve 
    solicitar ao usuário os valores de k e n e imprimir o 
    resultado da chamada da função.
*/

#include <stdio.h>

int pot(int k, int n){

    if(n > 1) return pot(k, n-1) *k;

    return k;
}

int main(){
    int num, exp;

    printf("Digite o Numero e o Expoente (k n): ");
    scanf("%d %d", &num, &exp);

    if(exp < 0) printf("Expoente Invalido!\n");
    else if(exp == 1) printf("Resultado: 1\n");
    else printf("Resultado: %d\n", pot(num, exp));

    return 0;
}