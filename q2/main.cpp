#include <iostream>
#include <vector>
#include "ContaEspecial.h"
#include "Conta.h"
#include "SaldoNaoDisponivelException.h"

using namespace std;

int main(void){
    vector<Conta*> banco;

    Conta* conta1 = new Conta("Rhamon", 5000, 1, 10000);
    Conta* conta2 = new Conta("Lucas", 1000, 2, 0);
    Conta* conta3 = new Conta("Pedro", 2500, 3, 500);

    banco.push_back(conta1);
    banco.push_back(conta2);
    banco.push_back(conta3);

    for(Conta* atual : banco){

        cout << "CONTA ANTES DO SAQUE: " << endl; 
        atual->exibeConta();

        try{
            atual->sacar(3333);
            cout << "CONTA DEPOIS DO SAQUE: " << endl; 
            atual->exibeConta();
            cout << endl;
        }catch(SaldoNaoDisponivelException ex){
            cout << "ERRO! Saldo em conta é menor que o saque!" << endl;
            cout << endl;
        }
    }


    return 0;
}
