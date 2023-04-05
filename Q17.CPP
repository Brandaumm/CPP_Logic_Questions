//LER CODIGO DOS PRODUTOS
//LER QUANTIDADE DE CADA UM
//CALCULAR VALOR TOTAL
//MOSTRAR VALOR TOTAL

#include <iostream>
using namespace std;

int main(){
  int codigoSanduiche, quant_Sanduiches;
  
  int codigoBebida, quant_Bebida;

  float total_bebida,total_sanduiche, total_final;
 
cout << "\nSanduiches"
"\n\nCódigo     Descrição      Preço Unitário"
"\n100     Cachorro quente        1,10"
"\n101      Baurú simples         1,30"
"\n102      Baurú com ovo         1,50"
"\n103        Hamburger           1,10"
"\n104       Cheesburger          1,30";
cout <<"\n\nBebida"
"\n\nCódigo     Descrição      Preço Unitário"
"\n105       Refrigerante         1,00"
"\n106          Suco              2,00"
"\n107         Nescau             1,50";

  cout << "\nEscolha o código de seu Sanduiches: ";
  cin >> codigoSanduiche;
  cout << "Escolha a quantidade de Sanduiches desejada: ";
  cin >> quant_Sanduiches;
  cout << "Escolha o código da sua bebdida: ";
  cin >> codigoBebida;
  cout << "Escolha a quantidade de bebida desejada: ";
  cin >> quant_Bebida;

  if (codigoSanduiche == 100)
    total_sanduiche = quant_Sanduiches * 1.10;
    else if (codigoSanduiche == 101)
      total_sanduiche = quant_Sanduiches * 1.30;
    else if (codigoSanduiche == 102)
      total_sanduiche = quant_Sanduiches * 1.50;
    else if (codigoSanduiche == 103)
      total_sanduiche = quant_Sanduiches * 1.10;
    else if (codigoSanduiche == 104)
      total_sanduiche = quant_Sanduiches * 1.30;
    
  if (codigoBebida == 105)
      total_bebida = quant_Bebida * 1;
    else if (codigoBebida == 106)
      total_bebida = quant_Bebida * 2;
    else if (codigoBebida == 107)
      total_bebida = quant_Bebida * 1.5;
  total_final = total_bebida + total_sanduiche;
  cout << " O total a ser pago será de: " << total_final;
}