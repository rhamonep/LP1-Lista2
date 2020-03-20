#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"
#include <iostream>

using namespace std;

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamentoMaximo){
    this->orcamentoMaximo = orcamentoMaximo;
}

void SistemaGerenciaFolha::setFuncionario(Funcionario *funcionario) { 
    funcionarios.push_back(funcionario); 
}

double SistemaGerenciaFolha::calculaTotalFolha(){

    double total = 0;

    for(Funcionario* atual : funcionarios){
        total += atual->calcularSalario();
    }

    try{
        if(total > orcamentoMaximo){
            throw OrcamentoEstouradoException();
        }
        return total;

    }catch(OrcamentoEstouradoException ex){
        cerr << "Valor da folha é maior do que o orçamento máximo." << endl;
    }
}

Funcionario* SistemaGerenciaFolha::buscaFuncionario(string nome){

    for(Funcionario* atual : funcionarios){
        if(atual->getNome() == nome)
            return atual;
    }

    throw FuncionarioNaoExisteException();
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(string nome){

    try{
        Funcionario* atual;

        atual = buscaFuncionario(nome);
        return atual->calcularSalario();

    }catch(FuncionarioNaoExisteException ex){
        cerr << "Não existe funcionário com esse nome." << endl;
    }
}