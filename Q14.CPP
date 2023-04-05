//LER PREÇO DO CARRO
//LER ANO DO CARRO
//SE ANO > 1990 ENTÃO PREÇO + 1.5%
//SE ANO < 1990 ENTÃO PREÇO + 1%
//MOSTRAR VALOR

#include <iostream>
using namespace std;

int main(){
  int preco, ano;

  cout << "Digite o preço total do carro:";
  cin >> preco;
  cout << "Digite o ano do carro: ";
  cin >> ano;

  if (ano >= 1990)
    cout << "O preço a ser pago devera ser de: " << (preco *101)/100;
  else
    cout << "O preço a ser pago deverá ser de: " << (preco * 101.5)/100;
  
      
    
}