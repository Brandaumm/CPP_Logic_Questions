//LER 3 NUMEROS INTEIROS
//ESCREVER ALGUMA DAS MENSAGENS:
//TODOS OS NUMEROS SÃO IGUAIS
// TODOS OS NUMEROS SÃO DIFERENTES
//APENAS DO NUMEROS SÃO IGUAIS

#include <iostream>
using namespace std;

int main(){
  int n1,n2,n3;

  cout << "Digite 3 numeros consecutivamente utilizando espaços entre as respostas: ";
  cin >> n1 >> n2 >> n3;
  if (n1 == n2 && n2 == n3 && n3 == n1)
    cout << "Todos os numeros são iguais!";
    else if (n1 == n2 || n1 == n3 || n3 == n2)
      cout << "2 Numeros são iguais!";
  else
      cout << "Todos os numeros são diferentes!";
  
}