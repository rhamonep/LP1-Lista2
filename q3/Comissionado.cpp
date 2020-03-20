#include "Comissionado.h"

Comissionado::Comissionado(std::string nome, int matricula, double salarioBase, double percentualComissao, double vendasSemanais) : 
Funcionario(nome, matricula){
    this->salarioBase = salarioBase;
    this->percentualComissao = percentualComissao;
    this->vendasSemanais = vendasSemanais;
}

 void Comissionado::setVendasSemanais(double vendasSemanais){ 
     this->vendasSemanais = vendasSemanais; 
}

void Comissionado::setPercentualComissao(double percentualComissao){ 
    this->percentualComissao = percentualComissao; 
}

void Comissionado::setSalarioBase(double salarioBase){ 
    this->salarioBase = salarioBase; 
}

double Comissionado::getPercentualComissao(){ 
    return percentualComissao; 
}

double Comissionado::getVendasSemanais(){ 
    return vendasSemanais; 
}

double Comissionado::getSalarioBase(){ 
    return salarioBase;
}

double Comissionado::calcularSalario(){
    double salario = salarioBase;
    salario += (percentualComissao/100) * vendasSemanais;
    return salario;
}