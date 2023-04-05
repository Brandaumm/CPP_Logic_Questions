#include <iostream>
using namespace std;

// LER IDADE EM ANOS, MESES E DIAS
// MOSTRAR APENAS EM DIAS

int main(){
  int anos,meses,dias,totalDias;
  cout << "Digite quantos anos voce têm: ";
  cin >> anos;
  cout << "Digite quandos mêses você têm: ";
  cin >> meses;
  cout << "Digite quantos dias você têm: ";
  cin >> dias;
  totalDias = (anos * 365) + (meses * 30) + dias;
  cout << totalDias;
  cout << " Esse é o seu total de dias vividos";
  