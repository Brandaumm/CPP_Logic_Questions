//LER TEMPERATURA EM GRAUS
//CONVERTER EM FAHRENHEIT
//MOSTRAR

#include <iostream>
using namespace std;

int main(){
    float temp_graus,temp_fahren;


  cout << "Digite o valor em graus celcius: ";
  cin >> temp_graus;
  temp_fahren = (9*temp_graus+160)/5;
  cout << "O valor de " << temp_graus << " em Fahrenheit é: " << temp_fahren;
}