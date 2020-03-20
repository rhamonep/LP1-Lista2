#pragma once

#include "Funcionario.h"

using namespace std;

class Horista : public Funcionario{

    private:

        double salarioPorHora;
        double horasTrabalhadas;

    public:

        Horista(string nome, int matricula, double salarioPorHora, int horasTrabalhadas);

        double getHorasTrabalhadas();
        double getSalarioPorHora();

        void setSalarioPorHora(double salarioPorHora);
        void setHorasTrabalhadas(double horasTrabalhadas);

        double calcularSalario();
    };