/******************************************************************************
Elabore um programa em linguagem C++ que dada a idade de um nadador
classifica-o em uma das seguintes categorias:Cursos: Análise de Desenvolvimento de Sistemas e Ciência da
Computação
Disciplina: Introdução a Programação Estruturada em C -
Prof.ª: Maria Rita
Idade
5 – 7 anos
8 – 10 anos
11 – 13 anos
14 – 17 anos
Maiores de 18 anos
Categoria
Infantil A
Infantil B
Juvenil A
Juvenil B
Adulto
*******************************************************************************/
//peso / (altura) 2 
#include <stdio.h>
   int main() {
   int  idade;

    printf("Digite a sua idade: ");
     scanf("%d", &idade);

  
    if(idade >=5 && idade <=7){
        printf("Infantil A");
    }else if (idade >=8 && idade<=10){
        printf("Infantil B");      
    }else if (idade >=11 && idade<=13){
         printf("Juvenil A");
    }else if (idade >=14  &&  idade <=17){
         printf("Juvenil B");
    }else if (idade > 18){
         printf("Adulto");
    }else {
        printf("Sem faixa etária");
    }
}
