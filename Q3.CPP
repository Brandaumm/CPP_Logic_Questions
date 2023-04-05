//LER VALOR TOTAL GASTO
//CALCULAR PREÇO EM PARCELAS ESCOLHIDAS PELO USUÁRIO
//MOSTRAR PREÇO DAS PARCELAR
#include <iostream>
using namespace std;

int main(){
  float valor_gasto;
  int quant_parcelas;

  cout << "Digite o valor total gasto nas compras: ";
  cin >> valor_gasto;
  cout << "O preço poderá ser a vista (1) ou até em dez vezes sem juros (10)";
  cin >> quant_parcelas;
  cout << "O total de parcelas a ser pago será: " << valor_gasto/quant_parcelas;
  
}
