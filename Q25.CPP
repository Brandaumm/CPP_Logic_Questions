//PEDIR AS RAIZES DA EQUAÇÃO DE SEGUNDO GRAU
//UTILIZAR AS FORMULAS
//MOSTRAR AS POSSIVEIS RAIZES
//SE "a" == 0 ESCREVA "NÃO É EQUAÇÃO DE SEGUNDO GRAU"
//SE "∆" < 0 ESCREVA "NÃO EXISTE RAIZ"
//SE "∆" = 0 ESCREVA A RAIZ E "RAIZ UNICA"
//SE "∆" >= 0 ESCREVA AS DUAS RAIZES

#include <iostream> 
#include <cmath>

using namespace std;

int main(){
  int a,b,c,delta,tudoA,tudoB,raiz;

  cout << "Digite 'a', 'b' e 'c' respectivamente separado por espaços: ";
  cin >> a >> b >> c;
  
  delta =  sqrt(b*b-(4*a*c));
  tudoA = (-b + delta)/2*a;
  tudoB = (-b - delta)/2*a;

  if (a == 0)
    cout << "Não é equação de segundo grau";
  else if (delta < 0)
    cout << "Não exite raiz";
  if (delta == 0)
    cout << "Raiz unica: " << tudoA;
  if  (delta >= 0)
    cout << "As raizes são: X1 = " << tudoA << "\nX2 = " << tudoB;  
cout << "\nDelta: " << delta;
}