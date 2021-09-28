/*
Construa um programa em C++ que leia a idade de três pessoas, em seguida,
determine e escreva a soma das idades dos dois mais jovens.
*/

#include <iostream>
using namespace std;
main( ) {
setlocale(LC_ALL, "Portuguese");

float A, B, C;

cout<< "Escreva o valor de A ";
cin>> "A";

cout<< "Escreva o valor de B";
cin>>"B";

cout<< "Escreva o valor de C";
cin>>"C";

if (C > A + B || A > B + C || B > A + C ){
	cout<< "NÃO FORMA UM TRIANGULO";
}

else if ( A != B && A != C && B != C ){
	cout<< "TRIANGULO ESCALENO";
}

else if ( A == B && A == C){
	cout<<"TRIANGULO EQUILATERO";
}

else if (A == B || A == C || B == C){
	cout<<"TRIANGULO ISSOCELES ";
}
}
