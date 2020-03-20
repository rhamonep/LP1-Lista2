#include "ValorAcimaException.h"
#include <iostream>

using namespace std;

const char* ValorAcimaException::what() const throw(){

    cerr << "EXCEÇÃO LANÇADA: Valor maior que 100 e menor que 1000." << endl;

}