#include <iostream> 
#include "idosa.h"
using namespace std;

void LobbyJogo(int b){//, string p1, string p2){

  switch(b){

    case 1:
      if(b==1){
        //jogo...
        cout << "\niniciando jogo... " << endl;
        cout << "\n";
        cout << "\n";
        cout << "\n";
        //porque que a função system não está funcionando?
      } break;
    
    case 2:
      if(b==2){
        cout << "\n";
        cout << "________________________________\n";
        cout << endl;
        Tutorial();
        cout << "________________________________\n";
      } break;
    
    case 3:
    if(b==3){
      cout << "\nsaindo...\n";
      cout << "________________________________\n";
      exit(0);
    } break;
   }

}

