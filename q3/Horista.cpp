#include "Horista.h"

Horista::Horista(std::string nome, int matricula, double salarioPorHora, int horasTrabalhadas) :
Funcionario(nome, matricula){   
    this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::getHorasTrabalhadas(){ 
    return horasTrabalhadas; 
}

double Horista::getSalarioPorHora(){ 
    return salarioPorHora; 
}

void Horista::setSalarioPorHora(double salarioPorHora){ 
    this->salarioPorHora = salarioPorHora; 
}

void Horista::setHorasTrabalhadas(double horasTrabalhadas){ 
    this->horasTrabalhadas = horasTrabalhadas; 
}

double Horista::calcularSalario(){

    int extra = horasTrabalhadas - 40;

    if(extra < 0){
        extra = 0;
    }

    int horas = horasTrabalhadas - extra;

    return (salarioPorHora * horas) + (salarioPorHora * 1.5 * extra);
}