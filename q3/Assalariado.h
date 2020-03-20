#pragma once

#include "Funcionario.h"

using namespace std;

class Assalariado : public Funcionario{
    
    private:

        double salario;

    public:

        Assalariado(string nome, int matricula, double salario);

        double getSalario();
        void setSalario(double salario);

        double calcularSalario();
};