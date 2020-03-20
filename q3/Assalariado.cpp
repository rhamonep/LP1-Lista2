#include "Assalariado.h"

Assalariado::Assalariado(std::string nome, int matricula, double salario) :
Funcionario(nome, matricula){      
    this->salario = salario;
}

double Assalariado::getSalario(){
    return salario;
}
void Assalariado::setSalario(double salario){
    this->salario = salario;
}
double Assalariado::calcularSalario(){
    return getSalario();
}