#include "ValorMuitoAcimaException.h"
#include <iostream>

using namespace std;

const char* ValorMuitoAcimaException::what() const throw(){

    cerr << "EXCEÇÃO LANÇADA: Valor maior ou igual a 1000." << endl;

}