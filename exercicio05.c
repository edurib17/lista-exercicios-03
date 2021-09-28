/*
Faça um programa em linguagem C++ que leia um número, em seguida,
some 15 se for par ou 13 se for ímpar, imprimir o resultado desta operação.
*/

#include <stdio.h>
   int main() {
   int number, total;

    printf("Digite um numero: ");
     scanf("%d", &number);
    
    if(number % 2 == 0){
        total = number + 15;
         printf("O resultado é PAR: %d", total);
    }    
    else{
        total = number + 13;
         printf("O resultado é IMPAR: %d", total);
    }    
}