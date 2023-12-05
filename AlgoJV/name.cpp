#include <iostream>
#include <fstream>
#include <cstdlib>
#include "idosa.h"
using namespace std;

bool validarNickname(const string& nickname) { //valida os nomes (ter no maximo 3 caracteres)...
    return nickname.length() <= 3;
}

void exibirNicknames() {//exibe os nomes dos vencedores...
    ifstream fin("vencedores.txt");
    string nickname;

    cout << "Lista dos últimos Vencedores:\n";

    while (fin >> nickname) {
        cout << nickname << endl;
    }

    fin.close();
}

void addNickname(const string& novoNickname) {//adiciona os nomes dos vencedores no arquivo...
    if (validarNickname(novoNickname)) {
        ofstream fout("vencedores.txt", ios::app);
        fout << novoNickname << endl;
      
        fout.close();
    } 
  
}
