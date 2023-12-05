#include <iostream>
#include "idosa.h"
using namespace std;

void Tutorial(){
  
    cout << "\t\t TUTORIAL" << endl;
    cout << endl;
    cout << "  O Jogo Da Velha é uma matriz composta por até 9 espaços que serão preenchidos com 'x' ou 'o', sendo respectivamente, jogador 1 e jogador 2." << endl << endl;

    cout << "------------------------------" << endl << endl;

    cout << "\t\t" << 1 << "  |  " << 2 << "  |  " << 3 << endl;
    cout << "\t  -----------------" << endl;
    cout << "\t\t" << 4 << "  |  " << 5 << "  |  " << 6 << endl;
    cout << "\t  -----------------" << endl;
    cout << "\t\t" << 7 << "  |  " << 8 << "  |  " << 9 << endl;
    cout << endl;
    cout << "------------------------------" << endl << endl;


    cout << "  O Jogador deve escolher um número de 1 a 9 para digitar, e o local será preenchido com seu símbolo, o primeiro que conseguir formar uma sequência reta (linha/coluna/diagonal) com seu determinado símbolo, ganha o jogo. Porém, haverá chances de um empate se nenhum dos dois jogadores conseguir fechar sua sequência reta." << endl;

    int d=0;
    string p1, p2;
  
    cout << endl;
    cout << "\nDeseja começar uma partida?"<< endl << endl;
    cout << "\t(1)Começar..."<< endl;
    cout << "\t(2)Sair..."<< endl;
  
      cin >> d;
    //Possiveis erros:
    while(d<1 || d>2 || d==0){
      cout << "ERRO...DIGITE UM NUMERO VALIDO:";
      cin >> d;
    }

  if(d==1){
    Jogo(p1, p2);
  }
  
  if(d==2){
    cout << "\nsaindo...\n";
    cout << "________________________________\n";
    exit(0);
  }
  
}
