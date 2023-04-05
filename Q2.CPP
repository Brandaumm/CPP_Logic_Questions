//LER QUANTIDADE DE ANOS QUE ELE FUMA
//LER QUANTIDADE DE CIGARROS FUMADOS POR DIA
//LER PREÇO DE UMA CARTEIRA
//CALCULAR VALOR DE CADA CIGARRO
//MOSTRAR QUANTIDADE GASTA

#include <iostream>
using namespace std;

int main(){
  int anos_fumando, cigarros_dia, quantidade_carteira;
  float valor_carteira, valor_cigarro, valor_total;
  cout << "Quantos anos você fuma: ";
  cin >> anos_fumando;
  cout << "Quantos cigarros você fuma por dia: ";
  cin >> cigarros_dia;
  cout << "Qual é o preço da carteira: ";
  cin >> valor_carteira;
  cout << "Quantos cigarros vêm na carteira: ";
  cin >> quantidade_carteira;
  valor_cigarro = valor_carteira / quantidade_carteira;
  valor_total = (anos_fumando*365)*cigarros_dia *valor_cigarro;
  cout << "Esse é a quantidade total gasta: " << valor_total;
}