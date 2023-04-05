//LER IDADE
//IDADE < 10
//10 <= IDADE <=30
//31 <= IDADE <= 60
//IDADE >60

#include <iostream>
using namespace std;

int main(){
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade < 10 )
        cout << "O total a ser pago serÃ¡ de 80R$ mensais!";
        else if (idade >= 10 && idade <=30){
        cout << "O total a ser pago sera de 50R$ mensais!";
        }else if (idade >=31 && idade <=60)
        cout << "O total a ser pago sera de 95R$ mensais!";
        else if (idade >60)
        cout << "O total a ser pago sera de 120R$ mensais";        
}