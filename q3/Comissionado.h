#pragma once

#include "Funcionario.h"

class Comissionado : public Funcionario{
    
    private:

        double vendasSemanais;
        double percentualComissao;
        double salarioBase;

    public:

        Comissionado(string nome, int matricula, double salarioBase, double percentualComissao, double vendasSemanais);

        double getPercentualComissao();
        double getVendasSemanais();
        double getSalarioBase();

        void setVendasSemanais(double vendasSemanais);
        void setPercentualComissao(double percentualComissao);
        void setSalarioBase(double salarioBase);

        double calcularSalario();
};