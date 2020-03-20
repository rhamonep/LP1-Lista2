#include "CopiadorDeTxt.h"
#include <iostream>

int main(){

    CopiadorDeTxt copiador;

    if(copiador.copiaArquivo("original.txt", "copia.txt")){
        cout << "Cópia realizada com sucesso!" << endl;
    }else{
        cout << "A Cópia NÃO foi realizada com sucesso." << endl;
    }

    return 0;
}