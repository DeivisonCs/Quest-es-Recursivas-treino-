/*
    A multiplicação de dois números inteiros pode ser feita através de somas sucessivas.
    Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a multiplicação de dois inteiros.
*/

#include <stdio.h>

/*
    INCOMPLETA - problema com algumas operações de sinais diferentes;
*/

int Multip_Rec(int x, int y) {

    if(y > 1) return Multip_Rec(x, y-1) + x;
    else if(y < -1 && x > 0) return Multip_Rec(y, x-1) + y;
    else if(y < -1 && x < 0) return (Multip_Rec(x, y+1) + x) *(-1);
    else if(y < -1) return Multip_Rec(x, y+1) + x;
    
    
    return x;
}

int main(){
    int num1, num2;

    printf("Digite os Numeros (x y): ");
    scanf("%d %d", &num1, &num2);

    printf("Resultado: %d\n", Multip_Rec(num1, num2));

    return 0;
}   