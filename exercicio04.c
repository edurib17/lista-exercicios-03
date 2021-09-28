/*
Faça um programa em C++ que leia três valores A, B e C, verifique se eles
podem ser os comprimentos dos lados de um triângulo e, se forem, verificar
se compõem um triângulo equilátero, isósceles ou escaleno. Se eles não
formarem um triângulo escrever a mensagem “Não é um triângulo”. Sabendo:
Propriedades : o comprimento de cada lado de um triângulo é menor do que
a soma dos comprimentos dos outros 2 lados.
if ( A + B > C && A + C > B && B + C > A)
1ª definição : triângulo equilátero é o triângulo que tem os comprimentos
dos 3 lados iguais;
2ª definição : triângulo isósceles é o triângulo que tem os comprimentos de
2 dos lados iguais;
3ª definição : triângulo escaleno é o triângulo que tem os comprimentos dos
3 lados diferentes.
*/

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Os 3 lados formam um triangulo!\n");
        if (a == b && a == c)
            printf("Equilatero\n");
        else if (a == b || a == c || b == c)
            printf("Isosceles\n");
        else
            printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");
}