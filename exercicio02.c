/*
Construa um programa que leia dois números, em seguida, verifique e escreva
se eles são iguais, caso sejam diferentes, qual o maior.
*/
#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    int id1, id2, id3, soma;
    cout << "Digite a 1ª Idade :";
    cin >> id1;
    cout << "Digite a 2ª Idade :";
    cin >> id2;
    cout << "Digite a 3ª Idade :";
    cin >> id3;

    if (id1 and id2 < id3)
    {
        cout << "O mais novos são id1 e id2: ";
    }
    soma = id1 + id2;
    cout << "Soma das idade é:" << soma;

    if (id1 and id3 < id2)
    {
        cout << "O mais novo são id1 e id3: ";
    }
    soma = id1 + id3;
    cout << "Soma das idade é:" << soma;

    if (id2 and id3 < id1)
    {
        cout << "O mais novos são id2 e id3: ";
    }
    soma = id2 + id3;
    cout << "Soma das idade é:" << soma;
}