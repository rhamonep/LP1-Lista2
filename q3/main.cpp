#include <iostream>
#include "SistemaGerenciaFolha.h"

using namespace std;

int main(){

    SistemaGerenciaFolha sistema(550200);

    Funcionario* funcionario1 = new Assalariado("Rhamon", 1, 5000);
    Funcionario* funcionario2 = new Horista("Lucas", 2, 30, 52);
    Funcionario* funcionario3 = new Comissionado("Marcelo", 3, 3000, 40, 1000);

    sistema.setFuncionario(funcionario1);
    sistema.setFuncionario(funcionario2);
    sistema.setFuncionario(funcionario3);

    cout << "Consulta salário \"Rodrigo\": " << sistema.consultaSalarioFuncionario("Rodrigo") << endl;

    cout << "Consulta salário \"Marcelo\": " << sistema.consultaSalarioFuncionario("Marcelo") << endl;

    cout << endl;

    cout << "Calcula Total da folha de pagamentos: " << sistema.calculaTotalFolha() << endl;

    Funcionario* funcionario4 = new Assalariado("Roberto", 5, 88888);
    sistema.setFuncionario(funcionario4);

    cout << "Calcula Total da folha de pagamentos: " << sistema.calculaTotalFolha() << endl;

    sistema.setFuncionario(new Horista("Thyago", 4, 9999, 999));

    cout << "Calcula Total da folha de pagamentos: " << sistema.calculaTotalFolha() << endl;

    return 0;
}