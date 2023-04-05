//LER DISTANCIA EM KM
//QUANTIDADE DE GASOLINA GASTA
//CALCULAR KM/L
#include <iostream>
using namespace std;

int main(){
   float km, gasolina,km_l;
  cout << "Quantade em KM percorrida: ";
  cin >> km;
  cout << "Quantidade gasta de gasolina: ";
  cin >> gasolina;
  
  km_l = km/gasolina;

  if (km_l <8)
    cout << "Venda o carro e compre ele   " << km_l;
    else if (km_l >= 8 && km_l <12)
      cout << "Carro econômico!   ";
  else
      cout << "Carro Super econômico!!!   ";
  cout << km_l <<"KM/L";
  
}