#pragma once

#include "Conta.h"

using namespace std;

class ContaEspecial: public Conta{

    public:

        ContaEspecial(string nomeCliente, double salarioMensal, int numeroConta, double saldo);

        void definirLimite();
};