#include <iostream>
#include "idosa.h"
#include <cstdlib>
using namespace std;

int main(){

  int a=0;
  //inicio:

  cout << "\tBem vindo ao Jogo da Velha" << endl;
  cout << "\n" << "(1)Começar jogo..." << endl << "\n(2)Tutorial..." << endl << "\n(3)Sair..."<< endl << endl;

  cout << "Digite uma das opções:";
  cin >> a;
  cout << endl;
    
  //erros:
  while(a<1 ||a>3) { 
    cout << "ERRO...DIGITE UM NUMERO VALIDO OU DE RUN NOVAMENTE:";
    cin >> a;
    break;
       
  }
  //lobby
    LobbyJogo(a);

  return 0;
}
