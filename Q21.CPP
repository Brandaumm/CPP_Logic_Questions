//LER NUMERO INTEIRO MAIOR QUE ZERO MAX 5 ALGARISMOS
// VERIFICAR E ESCREVER SOMA DOS ALGARISMOS
// SE NUMERO MENOR QUE 0 = "NUMERO INVÁLIDO

#include <iostream>
using namespace std;

int main (){
  int numero, x1,x2,x3,x4,x5;
  cout << "Digite um numero entre 1 e 99999: ";
    cin >> numero;
    
    if (numero > 0){
      x1 = (numero/10000);
      x2 = (numero/1000)%10;
      x3 = (numero/100)%10;
      x4 = (numero/10)%10;
      x5 = (numero%10);
      cout << "A soma dos algarismos é: " << x1 + x2 + x3 + x4 + x5;
        
      }

  
        
    
}
