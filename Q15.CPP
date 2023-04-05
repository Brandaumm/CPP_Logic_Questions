//LER SALARIO
//LER CARGO
//CALCULAR PERCENTUAL DE AUMENTO
//MOSTRAR NOVO SALÁRIO

#include <iostream>
using namespace std;

int main(){
  int salario,cargo,salario_novo;
  
  cout << "Digite o seu salário atual: ";
  cin >> salario;
  cout << "De acordo com a tabela: \n -- 101 == Gerente\n -- 102 == Engenheiro\n -- 103 == Técnico\n Escolha seu cargo\n\n Caso seu cargo não esteja listado digite qualquer outro numero que não esteja contido na lista: ";
  cin >> cargo;
if (cargo == 101)
  cout << "Seu novo salário será de:" << (salario*110)/100;
  else if (cargo == 102)
    cout << "Seu novo salário será de: " << (salario*120)/100;
  else if (cargo == 103)
    cout << "Seu novo salário será de: " << (salario*130)/100;
else
    cout << "Seu novo salário será de: " << (salario*140)/100;

}