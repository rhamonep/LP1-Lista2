#pragma once
#include <exception>

using namespace std;

class ValorAcimaException : public exception{
    
    public:

        const char* what() const throw(); 

};