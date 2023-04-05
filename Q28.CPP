//LER VALOR TOTAL DA COMPRA
//LER QUANTIDADE E VALOR DAS PARCELAS
//VERIFICAR SE A QUANTIDADE FOI COM OU SEM JUROS
//JUROS ATÃ‰ EM 4 PARCELAS

#include <iostream>
using namespace std;

int main(){
    float valor_compra, quant_parcelas;

    cout << "Digite o valor total da compra: ";
    cin >> valor_compra;
    cout << "Digite a quantidade de parcelas dejeada (ate 4 sem juros e ate 12 com juros): ";
    cin >> quant_parcelas;

    if (quant_parcelas <=4);
        cout << "O total de parcelas foi: " <<quant_parcelas << ", e o valor de cada sera de: " << ((valor_compra/quant_parcelas)*105)/100;
}