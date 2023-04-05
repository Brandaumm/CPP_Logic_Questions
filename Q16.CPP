//LER HORA
//LER NIVEL DO PROFESSOR
//CALCULAR O SALARIO GANHO PELAS HORAS GASTAS
//MOSTRAR SALÁRIO
#include <iostream>
using namespace std;

int main(){
  int hora, nivel;

  cout << "Quantas horas foram dadas: ";
  cin >> hora;
  cout << "Qual é o seu nivel como professor: ";
  cin >> nivel;

  if(nivel == 1)
    cout << "Seu pagamento será de: " << (hora * 12);
    else if (nivel == 2)
      cout << "Seu pagamento será de: " << hora * 17;
    else if (nivel ==3)
      cout << "Seu pagamento será de:" << (hora * 25);
  else
      cout << "Seu nivel como professor não está cadastrado\nfinalizando processo...";
}
