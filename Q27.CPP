//Ler um numero
//VERIFICAR SE ï¿½ PAR OU IMPAR
//SE PAR ESCREVA SE ï¿½ MULTIPLO DE 10
//SE IMPAR ESCREVER SE ELE ï¿½ DIFISIVEL POR 5

#include <iostream>
using namespace std;

int main( ){
int numero;

cout << "Digite um numero inteiro positivo qualquer: ";
cin >> numero;

if (numero%2 == 0)
    cout << "Esse numero e par";
if (numero%10 == 0)
    cout << "Esse numero e multiplo de 10";
else if (numero%5 == 0)
    cout << "Esse numero e multiplo de 5!";
}