//LER IDADE
//DECIDIR SE JA PODE TER HABILITAÇÃO
//ESCREVER QUANTOS ANOS FALTAM SE NAO

#include <iostream>
using namespace std;

int main(){
  int idade;

  cout << "Digite sua idade: ";
  cin >> idade;

  if (idade >= 18)
    cout << "Você pode tirar a habiltação";
  else
    cout << "Voce NÃO pode tirar a habilitação, faltam " << 18 - idade << " para que voce possa fazer a sua";
  
}