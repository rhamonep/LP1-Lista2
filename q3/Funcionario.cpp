#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario(string nome, int matricula){
    this->nome = nome;
    this-> matricula = matricula;
}

string Funcionario::getNome(){ 
    return nome; 
}

int Funcionario::getMatricula(){ 
    return matricula; 
}

void Funcionario::setNome(string nome){ 
    this->nome = nome; 
}

void Funcionario::setMatricula(int matricula){ 
    this->matricula = matricula; 
}