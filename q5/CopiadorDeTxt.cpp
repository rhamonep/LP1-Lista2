#include "CopiadorDeTxt.h"
#include <fstream>
#include <ostream>
#include <iostream>

using namespace std;

int CopiadorDeTxt::copiaArquivo(string nomeTxtOriginal, string nomeCopia){

    ifstream original; 
    original.open(nomeTxtOriginal, ios::in);

    ofstream copia;
    copia.open(nomeCopia, ios::out);

    if(!original.is_open() || !copia.is_open()){
        cout << "Não foi possível abrir algum dos arquivos." << endl;
        return 0;
    }

    string linhaDeTexto;

    while(!original.eof()){

        getline(original, linhaDeTexto);
        copia << linhaDeTexto;

        if(!original.eof())
            copia << endl;
    }
    return 1;
}