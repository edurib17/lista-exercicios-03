/*
Construa um programa que leia a idade de três pessoas, determine e escreva a idade do mais velho.
*/
#include <iostream>
using namespace std;
main()
{
    int id1, id2, id3;
    cout << "Digite a 1ª Idade :";
    cin >> id1;
    cout << "Digite a 2ª Idade :";
    cin >> id2;
    cout << "Digite a 3ª Idade :";
    cin >> id3;

    if (id1 > id2 && id1 > id3)
    {
        cout << "O mais velho é: " << id1;
    }

    if (id2 > id1 && id2 > id3)
    {
        cout << "O mais velho é: " << id2;
    }

    if (id3 > id1 && id3 > id2)
    {
        cout << "O mais velho é: " << id3;
    }
}