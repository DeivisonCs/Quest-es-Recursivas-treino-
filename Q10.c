/*
    Escreva uma função recursiva que determine quantas vezes um dígito K ocorre 
    em um número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192
*/

#include <stdio.h>
#include <stdlib.h>

int get_Repetitions_w_char(char s_num[], char comp){

    if(s_num[0] != '\0'){
        
        if(s_num[0] == comp) return get_Repetitions_w_char(&s_num[1], comp) +1;
        else return get_Repetitions_w_char(&s_num[1], comp);
    }

    return 0;
}

int get_Repetitions(int num, int comp) {
    int qtd=0;

    if(num > 0){

        qtd = get_Repetitions(num/10, comp);

        if(num%10 == comp) qtd++;
    }

    return qtd;
}
//3880

int main(){
    int num, comp;
    char s_num[20];

    printf("Digite o Numero e a Comparacao: ");
    scanf("%d %d", &num, &comp);

    sprintf(s_num, "%d", num);

    if(comp < 0)
        printf("Valor de comparacao invalido!\n");
    else{
        printf("Resultado 1: %d\n", get_Repetitions_w_char(s_num, comp+'0'));
        printf("Resultado 2: %d\n", get_Repetitions(num, comp));
    }

    return 0;
}