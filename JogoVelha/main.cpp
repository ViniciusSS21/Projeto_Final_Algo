#include <iostream>
#include "idosa.h"
using namespace std;

int main(){

  int a=0;
  string p1, p2;
  //inicio:

  cout << "\tBem vindo ao Jogo da Velha" << endl;
  cout << "\n" << "(1)Começar jogo..." << endl << "\n(2)Tutorial..." << endl << "\n(3)Sair..."<< endl << endl;

  cout << "Digite uma das opções:";
    
  cin >> a;

  cout << endl;
    
  //erros: 
  while(a<1 || a>3) { 
    cout << "ERRO...DIGITE UM NUMERO VALIDO:";
    cin >> a;
  } 
  //lobby
    LobbyJogo(a);

  //jogo
  if(a==1){
    Jogo(p1, p2);
  }
  return 0;
}
