#include "ContaEspecial.h"

using namespace std;

ContaEspecial::ContaEspecial(string nomeCliente, double salarioMensal, int numeroConta, double saldo): 
Conta(nomeCliente, salarioMensal, numeroConta, saldo){

}

void ContaEspecial::definirLimite(){
    limite = salarioMensal * 3;
}