/*
    Escreva uma função recursiva que determine quantas vezes um dígito K ocorre 
    em um número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192
*/

#include <stdio.h>
#include <stdlib.h>

int get_Repetitions(char s_num[], char comp){

    if(s_num[0] != '\0'){
        
        if(s_num[0] == comp) return get_Repetitions(&s_num[1], comp) +1;
        else return get_Repetitions(&s_num[1], comp);
    }

    return 0;
}

int main(){
    int num, comp;
    char s_num[20];

    printf("Digite o Numero e a Comparacao: ");
    scanf("%d %d", &num, &comp);

    sprintf(s_num, "%d", num);

    printf("Resultado: %d\n", get_Repetitions(s_num, comp+'0'));

    return 0;
}