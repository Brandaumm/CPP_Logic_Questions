//VALORES X Y e Z PARA CADA LADO DO TRIANGULO
//VERIFICAR SE É POSSIVEL FAZER UM TRINGULO
//VERIFICAR POR MEIO DO TAMANHO DOS TRIANGULOS QUAL É O SEU TIPO

#include <iostream>
using namespace std;
int main(){
  float a, b, c;
cout << "Escreva os 3 lados do triangulo em sequencia utilizando espaços entre as respostas: ";
cin >> a >> b >> c;
  if (a + b <= c || a + c <=b || b+c <= a)
    cout << "Não é possivel formular um triangulo";
    else if( a == b && a == c && b == c)
      cout << "\nÉ um triangulo equilátero!";
    else if (a == b || a == c || b == c)
      cout << "\nÉ um triangulo isóceles!";
    else if (a != b && a != b || b != c)
      cout << "\nÉ um triangulo escaleno!";     
}
