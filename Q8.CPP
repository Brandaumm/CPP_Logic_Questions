//LER VALOR EM REAIS
//LER VALOR DA COTAÇÃO DO DOLAR
//MOSTRAR A CONVERSÃO DE DOLAR PARA REAL

#include <iostream>
using namespace std;

int main(){
  float real, dolar, real_dolar;

  cout << "Valor em real: ";
  cin >> real;
  cout << "Valor da cotação do dolar: ";
  cin >> dolar;
  real_dolar =  real / dolar;
  cout << "O total de dolares que você tem após a conversão é : " << real_dolar;
  
   
}