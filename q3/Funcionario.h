#pragma once

#include <string>

using namespace std;

class Funcionario{

    private:

        string nome;
        int matricula;

    public:

        Funcionario(string nome, int matricula);

        string getNome();
        int getMatricula();

        void setNome(string nome);
        void setMatricula(int matricula);
        
        virtual double calcularSalario() = 0;
};