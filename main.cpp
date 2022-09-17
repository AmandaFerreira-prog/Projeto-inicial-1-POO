#include <iostream>
#include "questao1.h"

using namespace std;

int main() {
  ContadePoupança poupador1("Leandro Almeida",2000);
  ContadePoupança poupador2("Any Caroliny",300);
  poupador1.tostring();
  poupador2.tostring();
  poupador1.sacar(200);
  poupador2.sacar(300);
  poupador1.calculeRendimentoMensal();
  poupador2.calculeRendimentoMensal();
  poupador1.tostring();
  poupador2.tostring();
  
}