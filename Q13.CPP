//LER PESO
//LER ALTURA
//LER GENERO
//FORMULA MASCULINO = (72,7 * altura) - 58
//FOMULA FEMININO = (62,1 * altura) - 44,7

#include <iostream>
using namespace std;

int main(){
  float peso, altura;
  char genero;

  cout << "Qual é o seu peso em KILOS: ";
  cin >> peso;
  cout << "Qual é a sua altura em METROS: ";
  cin >> altura;
  cout << "Qual é o seu gênero (M/F): ";
  cin >> genero;

  if (genero == 'M' || genero == 'm'){
    cout << "Seu IMC é de: " << (72.7 * altura) - 58;
    }else if (genero != 'M' && genero != 'F' && genero != 'm' && genero != 'f'){
      cout << "Genero não identificado, cancelando programa.";
  }else{
    cout << "Seu IMC é de: " << (62.1 * altura) - 44.7 << "kg";
  }
}
