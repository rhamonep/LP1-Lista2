#pragma once

#include "IConta.h"
#include <string>

using namespace std;

class Conta: public IConta{

    protected:

        string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;

    public:

        Conta(string nomeCliente, double salarioMensal, int numeroConta, double saldo);

        string getNomeCliente();
        double getSalarioMensal();
        int getNumeroConta();
        double getSaldo();
        double getLimite();

        void setNomeCliente(string nomeCliente);
        void setSalarioMensal(double salarioMensal);
        void setNumeroConta(int numeroConta);
        void setLimite(double limite);

        virtual void definirLimite();
        void sacar(double valor);
        void depositar(double valor);
        void exibeConta();
};