#include <iostream>
using namespace std;

int main(){
  float n1, n2, n3, media;

  cout << "Digite as notas 1, 2 e 3 consecutivamente utilizando espasos entre as repostas: ";
  cin >> n1 >> n2 >> n3;

  media = (((n1*2) + (n2*3) + (n3*5))/10);
  cout << media;
  if (media >= 0 && media <=2.9)
    cout << "Você foi reprovado com média: " << media;
    else if (media >= 3 && media <= 4.9)
      cout << "Você ficou em recuperação com a média: " << media;
  else
      cout << "Você foi aprovado com a média: " << media;
  
}

