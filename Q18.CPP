//LER UM NUMERO 
//LER UMA LETRA (A antecessor e S sucessor)
//MOSTRAR A SOMA DOS SEUS PROXIMOS 10 ATECESSORES OU SUCESSORES

#include <iostream>
using namespace std;

int main(){
  int numero, contador = 1, total;
  char letra;

  cout << "Digite um numero inteiro qualquer: ";
  cin >> numero;
  cout << "Digite (S) para sucessores e (A) para antecessores: ";
  cin >> letra;

  if (letra == 's' || letra == 'S'){
    total = (numero+1) + (numero+2) + (numero+3) + (numero+4) + (numero+5) + (numero+6) + (numero+7) + (numero+8) + (numero+9) + (numero+10);
    cout << "O total da soma dos proximos 10 sucessores é de: " << total;
  }
    else if (letra == 'a' || letra == 'S'){
      total =(numero-1) + (numero-2) + (numero-2) + (numero-3) + (numero-4) + (numero-5) + (numero-6) + (numero-7) + (numero-8) + (numero-9) + (numero-10);
    cout << "O total da soma dos proximos 10 antecessores e de:" << total;
    }
   
  
}