#include "ValorAbaixoException.h"
#include <iostream>

using namespace std;

const char* ValorAbaixoException::what() const throw(){

    cerr << "EXCEÇÃO LANÇADA: Valor menor ou igual a 0." << endl;

}