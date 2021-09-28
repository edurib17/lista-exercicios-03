/*
O IMC – Índice de Massa Corporal é um critério da Organização Mundial de
Saúde para dar uma indicação sobre a condição de peso de uma pessoa
adulta. A fórmula é IMC = peso / (altura) 2 . Elabore um programa em
linguagem C++ que leia o peso e a altura de um adulto e mostre sua condição
de acordo com a tabela abaixo.
*/

#include <stdio.h>
   int main() {
   float peso, altura, imc;

    printf("Digite o seu peso: ");
     scanf("%f", &peso);
    printf("Digite a sua altura: ");
     scanf("%f", &altura);
     
    imc = peso / (altura * altura);
    if(imc <=  18.5){
        printf("Você está Abaixo do peso.");
    }else if (imc <= 18.5 && imc <=25){
        printf("Peso normal");        
    }else if (imc <=25  && imc <= 30){
         printf("Acima do peso");
    }else if (imc > 30) {
        printf("Obeso");
    }
}
