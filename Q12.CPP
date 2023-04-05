//LER UM NUMERO
// VERIFICAR SE ESTE NUMERO É PAR OU IMPAR
// SE PAR VERIFICAR SE É MAIOR QUE 100
//SE IMPAR VERIFICAR SE É POSITIVO OU NEGATIVO

#include <iostream>
using namespace std;

int main(){
  int numero;

  cout << "Digite um numero inteiro qualquer :";
  cin >> numero;

  if (numero%2 == 0){
    cout << "Este numero é par";
    if (numero > 100){
      cout << "\nEste número é maior que 100!";
    }else
    cout << "\nEste numero não é maior que 100";
  }else {
    cout << "\nEste numero é impar";
    if (numero >0)
      cout << "\nEste numero é positivo";
    else if (numero == 0)
      cout << "\nEste numero é neutro";
    else
      cout << "\nEste numero é negativo";
  }  
}