//LER VALOR N1 E N2 EM DUAS VARIAVEIS
//TROQUE INVERTA O VALOR NAS 2 VARIAVEIS

#include <iostream>
using namespace std;

int main(){
  float numero1,numero2,troca;

  cout << "Variavel número 1: ";
  cin >> numero1;
  cout << "Variavel numero 2: ";
  cin >> numero2;
  troca = numero1;
  numero1 = numero2;
  numero2 = troca;
  
  
  
  
  cout << troca << numero1 << numero2;
}
