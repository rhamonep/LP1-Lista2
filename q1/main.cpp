#include <iostream>
#include <vector>
#include "ContaEspecial.h"
#include "Conta.h"

using namespace std;

int main(void){
    vector<Conta*> banco;

    Conta* conta1 = new Conta("Rhamon", 5000, 1, 10000);
    Conta* conta2 = new ContaEspecial("Lucas", 1000, 2, 0);

    banco.push_back(conta1);
    banco.push_back(conta2);

    for(Conta* atual : banco){
        atual->exibeConta();
    }

    banco[0]->sacar(3333);
    banco[1]->depositar(100.33);
    
    for(Conta* atual : banco){
        atual->exibeConta();
    }
    
    banco[0]->setSalarioMensal(5500);
    banco[1]->setSalarioMensal(2500);

    for(Conta* atual : banco){
        atual->definirLimite();
        atual->exibeConta();
    }

    return 0;
}
