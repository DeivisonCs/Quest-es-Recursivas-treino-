/*
    O máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y. Escreva uma função recursiva mdc em C, que retorna o máximo divisor comum de x e y.
    O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; 
    caso contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto.
*/

#include <stdio.h>

int mdc(int x, int y, int divisor){

    if(x == 0 && y != 0) return y;  
    if(y == 0 && x != 0) return x;
    if(x == 0 && y == 0) return 0; 

    if(x == 1 && y == 1) return 1;

    while((x%divisor != 0) && (y%divisor != 0))
        divisor++;

    if(x%divisor == 0 && y%divisor == 0) return mdc((x/divisor), (y/divisor), divisor) *divisor;

    if(x%divisor == 0) return mdc((x/divisor), y, divisor);
    else if(y%divisor == 0) return mdc(x, (y/divisor), divisor);
    
}

int main(){
    int x, y;

    printf("Digite os numeros (x y): ");
    scanf("%d %d", &x, &y);

    printf("MDC: %d\n", mdc(x, y, 2));
    return 0;
}

// 10, 5%10 -> 10, 5