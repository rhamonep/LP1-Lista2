#pragma once

#include "Funcionario.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"
#include <vector>

using namespace std;

class SistemaGerenciaFolha{

    private:

        double orcamentoMaximo;
        vector<Funcionario*> funcionarios;

    public:

        SistemaGerenciaFolha(double orcamentoMaximo);

        void setFuncionario(Funcionario *funcionario);

        Funcionario* buscaFuncionario(string nome);
        double calculaTotalFolha();
        double consultaSalarioFuncionario(string nome);

};