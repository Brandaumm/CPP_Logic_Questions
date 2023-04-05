//LER TEMPO DO EVENTO EM SEGUNDOS
//CONVERTER EM MINUTOS
//CONVERTER EM HORAS
#include <iostream>
using namespace std;

int main (){
  int segundos;
  float horas, minutos;

  cout << "Digite o tempo total do evento em segundos: ";
  cin >> segundos;
  minutos = segundos / 60;
  horas = minutos / 60;
  cout << "O total de tempo em segundos foi: " <<segundos << ", em minutos : " << minutos << ", em horas: " << horas;
}