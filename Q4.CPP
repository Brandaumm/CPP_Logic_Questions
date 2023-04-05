//LER NUMERO N
//LER PERCENTUAL QUALQUER
//APLICAR O PERCENTUAL NO NUMERO
#include <iostream>
using namespace std;

int main(){
  int numero, total;
  float percentual;
  cout << "Digite um numero: ";
  cin >> numero;
  cout << "Digite o percentual que você quer do numero: ";
  cin >> percentual;
  total = (numero*percentual)/100;
  cout << "Com o percentual " << percentual << "%" " o total será de: " << total;
}