//LER 3 NUMEROS
//PEDIR PARA ESCOLHER ENTRE "C" CRESCENTE E "D" DECRESCENTE
//VERFICAR A ORDEM CRESCENTE OU DECRESCENTE

#include <iostream>
using namespace std;

int main(){
  int n1,n2,n3;
  char escolha;

  cout << "Digite, utilizando espaços entre as respostas, os 3 numeros escolhidos: ";
  cin >> n1 >> n2 >> n3;
  cout << "Escolha 'C' para ordem crescente ou 'D' para ordem decrescente ";
  cin >> escolha;

  if (escolha == 'd' || escolha == 'D');
    if (n1 > n2 && n1 > n3)
      cout << n1;
    if (n2 > n1 && n2 > n3)
      cout << n2;
    if (n3 > n1 && n3 > n2)
      cout << n3;
   
}