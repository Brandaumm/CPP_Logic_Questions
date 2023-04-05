//LER IDADE
//LER TEMPO DE SERVIÇO
//CALCULAR SE ELE PODE SE APOSENTAR
//APOSENTAR == 65 ANOS || 30 ANOS DE TRABALHO || 60 ANOS E 25 ANOS DE TRABALHO

#include <iostream>
using namespace std;

int main(){
  int idade, hora;

  cout << "Digite sua idade em anos e o tempo em serviço em horas respectivamente utilizando espaço entre as respostas: ";
  cin >> idade >> hora;

  if (idade >= 65)
    cout << "Você pode se aposentar!";
    else if (hora >= 241920)
      cout << "Você pode se aposentar!";
    else if (idade >= 60 && hora >= 201600)
      cout << "Você pode se aposentar!";
  else
    cout << "Você não pode se aposentar";
}