// CUSTO DO CONSUMIDOR = CUSTO FABRICA + PORCENTAGEM DO DITRIBUIDOR E IMPOSTOS
//PERCENTUAL DO DISTRIBUIDOR = 28% E IMPOSTOS = 45%
//LER CUSTO DE FABRICA DO CARRO
//APLICAR IMPOSTOS E GARAR O CUSTO AO CONSUMIDOR

//PERGUNTAR PREÇO DO CARRO
//CALCULAR PREÇO + PORCENTAGENS
//MOSTRAR PREÇO


#include <iostream>
using namespace std;

int main(){
int percentual_distribuidor = 48, impostos = 45, custo_carro_fabrica, custo_consumidor;

  cout << "Digite o valor do carro: ";
  cin >> custo_carro_fabrica;
  custo_consumidor = (((((custo_carro_fabrica*148)/100)*145)/100));
  cout << "O custo total a ser pago pelo consumidor será de:" << custo_consumidor;
}