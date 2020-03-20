#pragma once
#include <exception>

using namespace std;

class ValorAbaixoException : public exception{

    public:

        const char* what() const throw(); 

};