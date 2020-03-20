#include "Conta.h"
#include <iostream>

using namespace std;

string Conta::getNomeCliente(){ 
    return nomeCliente; 
}

double Conta::getSalarioMensal(){ 
    return salarioMensal; 
}

int Conta::getNumeroConta(){ 
    return numeroConta; 
}

double Conta::getSaldo(){ 
    return saldo; 
}

double Conta::getLimite(){ 
    return limite; 
}

void Conta::setNomeCliente(string nomeCliente){ 
    this->nomeCliente = nomeCliente; 
}

void Conta::setSalarioMensal(double salarioMensal){ 
    this->salarioMensal = salarioMensal; 
}

void Conta::setNumeroConta(int numeroConta){ 
    this->numeroConta = numeroConta; 
}

void Conta::setLimite(double limite){
    this->limite = limite;
}


Conta::Conta(string nomeCliente, double salarioMensal, int numeroConta, double saldo){
    this->nomeCliente = nomeCliente;
    this->salarioMensal = salarioMensal;
    this->numeroConta = numeroConta;
    this->saldo = saldo;
    definirLimite();
}

void Conta::definirLimite(){
    limite = salarioMensal * 2;
}

void Conta::sacar(double valor){
    saldo -= valor;
}

void Conta::depositar(double valor){
    saldo += valor;
}

void Conta::exibeConta(){
    cout << "Nome: " << nomeCliente << endl;
    cout << "Salario: " << salarioMensal << endl;
    cout << "Numero: " << numeroConta << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Limite: " << limite << endl;
    cout << endl;
}