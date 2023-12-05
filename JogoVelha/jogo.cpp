#include <iostream> 
#include "idosa.h"
using namespace std;

void Jogo(string play1, string play2){
bool algmGanhou = false, empate = false, jogValid;
  
  cout << "digite o nome de P1:" << endl;
  cin >> play1;
  
  if(play1.length()>3){cout << "Erro: O nickname deve ter no máximo 3 caracteres." << endl;
    play1=""; //"zera" a string para digitar novamente
    cin>>play1;                    
    }
  
  cout << "digite o nome de P2:" << endl;
  cin >> play2;

  if(play2.length()>3){cout << "Erro: O nickname deve ter no máximo 3 caracteres." << endl;
    play2=""; //"zera" a string para digitar novamente
    cin>>play2;                    
    }
  
  cout << endl;
  cout << endl;
  cout << "\t" << "|-"<< play1 << "-|"<< " vs " << "|-"<< play2 << "-|"<< endl;
  cout << endl;
  cout << endl;
  
  char m[3][3];
  int cont, cont2; 
  
  for (cont = 0; cont < 3; cont++){
    for (cont2 = 0; cont2 < 3; cont2++){
        m[cont][cont2] = ' ';            
    }
  }

  cout << "\t\t JOGO DA VELHA" << endl << endl;
  cout << "------------------------------" << endl << endl;

  cout << "\t\t" << m[0][0] << "  |  " << m[0][1] << "  |  " << m[0][2] << endl;
  cout << "\t  -----------------" << endl;
  cout << "\t\t" << m[1][0] << "  |  " << m[1][1] << "  |  " << m[1][2] << endl;
  cout << "\t  -----------------" << endl;
  cout << "\t\t" << m[2][0] << "  |  " << m[2][1] << "  |  " << m[2][2] << endl;
  cout << endl;
  cout << "------------------------------" << endl << endl;

  while(algmGanhou==false || empate==false ){//enquanto algmGanhou e empate forem false o jogo continuará

  int jog1=-1, jog2=0;
  //VEZ DO JOGADOR 1:
  jogValid = false;
  cout << "Vez de: "<< play1 << endl;
  cin >> jog1;
  
    cout << "------------------------------" << endl << endl;
    
    //correção de bugs:
    while(jog1<1 || jog1 > 9){
      cout << "Jogada inválida, digite um número existente" << endl;
      cin>>jog1;
    }

     while(jog1 == 1 && m[0][0] != ' ' || jog1==2 && m[0][1] != ' ' || jog1==3 && m[0][2] != ' ' || jog1==4 && m[1][0] != ' ' || jog1==5 && m[1][1] != ' ' || jog1==6 && m[1][2] != ' ' || jog1==7 && m[2][0] != ' ' || jog1==8 && m[2][1] != ' ' || jog1==9 && m[2][2] != ' '){cout << "Jogada incorreta, posição já jogada" << endl;
    cin >> jog1;                                          }
    
  //POSSIVEIS JOGADAS:
  switch (jog1){
      case 1:
          if (m[0][0] == ' '){
              m[0][0] = 'x';
              jogValid = true;
          } else{
              cout << "Jogada incorreta, posição já jogada" << endl;
            continue;
          }
      break;

      case 2:
          if (m[0][1] == ' '){
              m[0][1] = 'x';
              jogValid = true;
          } else{
              cout << "Jogada incorreta, posição já jogada" << endl;
            continue;
          }
      break;

      case 3:
          if (m[0][2] == ' '){
              m[0][2] = 'x';
              jogValid = true;
          } else{
              cout << "Jogada incorreta, posição já jogada" << endl;
            continue;
          }
      break;

      case 4:
          if (m[1][0] == ' '){
              m[1][0] = 'x';
              jogValid = true;
          } else{
              cout << "Jogada incorreta, posição já jogada" << endl;
            continue;
          }
      break;

      case 5:
          if (m[1][1] == ' '){
              m[1][1] = 'x';
              jogValid = true;
          } else{
              cout << "Jogada incorreta, posição já jogada" << endl;
            continue;
          }
      break;

      case 6:
          if (m[1][2] == ' '){
              m[1][2] = 'x';
              jogValid = true;
          } else{
              cout << "Jogada incorreta, posição já jogada" << endl;
            continue;
          }
      break;

      case 7:
          if (m[2][0] == ' '){
              m[2][0] = 'x';
              jogValid = true;
          } else{
              cout << "Jogada incorreta, posição já jogada" << endl;
            continue;
          }
      break;

      case 8:
          if (m[2][1] == ' '){
              m[2][1] = 'x';
              jogValid = true;
          } else{
              cout << "Jogada incorreta, posição já jogada" << endl;
            continue;

          }
      break;

      case 9:
          if (m[2][2] == ' '){
              m[2][2] = 'x';
              jogValid = true;
          } else{
              cout << "Jogada incorreta, posição já jogada" << endl;
            continue;
          }
      break;

      default:
          cout << "Jogada inválida, digite um número existente" << endl;
        continue;
      break;

  } 

  //FIM DA VEZ 1

  cout << "\t\t JOGO DA VELHA" << endl;
  cout << "------------------------------" << endl << endl;

  cout << "\t\t" << m[0][0] << "  |  " << m[0][1] << "  |  " << m[0][2] << endl;
  cout << "\t  -----------------" << endl;
  cout << "\t\t" << m[1][0] << "  |  " << m[1][1] << "  |  " << m[1][2] << endl;
  cout << "\t  -----------------" << endl;
  cout << "\t\t" << m[2][0] << "  |  " << m[2][1] << "  |  " << m[2][2] << endl;
    cout << endl;
  cout << "------------------------------" << endl << endl;
  //condição de vitória jogador 1:

  //linha:
  if(m[0][0]=='x' && m[0][1]=='x' && m[0][2]=='x' || 
    m[1][0]=='x' && m[1][1]=='x' && m[1][2]=='x' || 
    m[2][0]=='x' && m[2][1]=='x' && m[2][2]=='x'){
    algmGanhou = true;
    addNickname(play1);
    cout << play1 << " VENCEU!"<<endl;
    exibirNicknames();
    exit(0);
  }
  //coluna:
  else if(m[0][0]=='x' && m[1][0]=='x' && m[2][0]=='x' || 
  m[0][1]=='x' && m[1][1]=='x' && m[2][1]=='x' || 
  m[0][2]=='x' && m[1][2]=='x' && m[2][2]=='x'){
    algmGanhou = true;
    addNickname(play1);
    cout << play1 << " VENCEU!"<<endl;
    exibirNicknames();
    exit(0);
  }
  //diagonal
  else if(m[0][0]=='x' && m[1][1]=='x' && m[2][2]=='x' || 
  m[0][2]=='x' && m[1][1]=='x' && m[2][0]=='x'){
    algmGanhou = true;
    addNickname(play1);
    cout <<  play1 << " VENCEU!"<<endl;
    exibirNicknames();
    exit(0);
  }


  //EMPATEEEEE:
  if(m[0][0] !=' ' &&  m[0][1] !=' ' &&  m[0][2] !=' ' &&  m[1][0] !=' ' &&  m[1][1]!=' ' &&  m[1][2] !=' ' &&  m[2][0] !=' ' &&  m[2][1] != ' ' &&  m[2][2] != ' ' ){
    empate = true;
    cout << "Deu EMPATE" << endl;
    exit(0);
  }
  //...

    while(jog1==jog2){
      cout << "Jogada incorreta, posição já jogada" << endl;
      cin >> jog1;
    }

  //VEZ DO JOGADOR 2:
    jogValid = false;
    cout << "Vez de: "<< play2 << endl;
    cin >> jog2;

      cout << "------------------------------" << endl << endl;
    
    while(jog2<1 || jog2 > 9){
      cout << "Jogada inválida, digite um número existente" << endl;
      cin>>jog2;

    }
    while(jog2 == 1 && m[0][0] != ' ' || jog2==2 && m[0][1] != ' ' || jog2==3 && m[0][2] != ' ' || jog2==4 && m[1][0] != ' ' || jog2==5 && m[1][1] != ' ' || jog2==6 && m[1][2] != ' ' || jog2==7 && m[2][0] != ' ' || jog2==8 && m[2][1] != ' ' || jog2==9 && m[2][2] != ' ' ){cout << "Jogada incorreta, posição já jogada" << endl;
      cin >> jog2;                                                 }
    
    //POSSIVEIS JOGADAS:
    switch (jog2){
        case 1:
            if (m[0][0] == ' '){
                m[0][0] = 'o';
                jogValid = true;
            } else{
                cout << "Jogada incorreta, posição já jogada" << endl;

                continue;
            }
        break;

        case 2:
            if (m[0][1] == ' '){
                m[0][1] = 'o';
                jogValid = true;
            } else{
                cout << "Jogada incorreta, posição já jogada" << endl;
              continue;
            }
        break;

        case 3:
            if (m[0][2] == ' '){
                m[0][2] = 'o';
                jogValid = true;
            } else{
                cout << "Jogada incorreta, posição já jogada" << endl;
              continue;
            }
        break;

        case 4:
            if (m[1][0] == ' '){
                m[1][0] = 'o';
                jogValid = true;
            } else{
                cout << "Jogada incorreta, posição já jogada" << endl;
              continue;
            }
        break;

        case 5:
            if (m[1][1] == ' '){
                m[1][1] = 'o';
                jogValid = true;
            } else{
                cout << "Jogada incorreta, posição já jogada" << endl;
              continue;
            }
        break;

        case 6:
            if (m[1][2] == ' '){
                m[1][2] = 'o';
                jogValid = true;
            } else{
                cout << "Jogada incorreta, posição já jogada" << endl;
              continue;
            }
        break;

        case 7:
            if (m[2][0] == ' '){
                m[2][0] = 'o';
                jogValid = true;
            } else{
                cout << "Jogada incorreta, posição já jogada" << endl;
              continue;
            }
        break;

        case 8:
            if (m[2][1] == ' '){
                m[2][1] = 'o';
                jogValid = true;
            } else{
                cout << "Jogada incorreta, posição já jogada" << endl;
              continue;
            }
        break;

        case 9:
            if (m[2][2] == ' '){
                m[2][2] = 'o';
                jogValid = true;
            } else{
                cout << "Jogada incorreta, posição já jogada" << endl;
              continue;
            }
        break;

        default:
            cout << "Jogada inválida, digite um número existente" << endl;
          continue;
        break;

    }

  //FIM DA VEZ 2

  cout << "\t\t JOGO DA VELHA" << endl;
  cout << "------------------------------" << endl << endl;

  cout << "\t\t" << m[0][0] << "  |  " << m[0][1] << "  |  " << m[0][2] << endl;
  cout << "\t  -----------------" << endl;
  cout << "\t\t" << m[1][0] << "  |  " << m[1][1] << "  |  " << m[1][2] << endl;
  cout << "\t  -----------------" << endl;
  cout << "\t\t" << m[2][0] << "  |  " << m[2][1] << "  |  " << m[2][2] << endl;
    cout << endl;
  cout << "------------------------------" << endl << endl;

  //condição de vitória jogador 2:

  //linha:
  if(m[0][0]=='o' && m[0][1]=='o' && m[0][2]=='o' || 
    m[1][0]=='o' && m[1][1]=='o' && m[1][2]=='o' || 
    m[2][0]=='o' && m[2][1]=='o' && m[2][2]=='o'){
    algmGanhou = true;
    addNickname(play2);
    cout <<  play2 << " VENCEU!" << endl;
    exibirNicknames();
    exit(0);
  }

  //coluna:
  else if(m[0][0]=='o' && m[1][0]=='o' && m[2][0]=='o' || 
  m[0][1]=='o' && m[1][1]=='o' && m[2][1]=='o' || 
  m[0][2]=='o' && m[1][2]=='o' && m[2][2]=='o'){
    algmGanhou = true;
    addNickname(play2);
    cout <<  play2 << " VENCEU!"<<endl;
    exibirNicknames();
    exit(0);
  }

  //diagonal:
  else if(m[0][0]=='o' && m[1][1]=='o' && m[2][2]=='o' || 
  m[0][2]=='o' && m[1][1]=='o' && m[2][0]=='o'){
    algmGanhou = true;
    addNickname(play2);
    cout <<  play2 << " VENCEU!"<<endl;
    exibirNicknames();
    exit(0);
  }

  //EMPATE:

  if(m[0][0] !=' ' &&  m[0][1] !=' ' &&  m[0][2] !=' ' &&  m[1][0] !=' ' &&  m[1][1]!=' ' &&  m[1][2] !=' ' &&  m[2][0] !=' ' &&  m[2][1] != ' ' &&  m[2][2] != ' ' ){
    empate = true;
    cout << "Deu EMPATE" << endl;
    exit(0);
  }
  //...
 }
    
} 