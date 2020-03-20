#pragma once
#include <exception>

using namespace std;

class ValorMuitoAcimaException : public exception{

    public:

        const char* what() const throw(); 

};