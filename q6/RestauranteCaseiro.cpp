#include "RestauranteCaseiro.h"

void RestauranteCaseiro::adicionaAoPedido(int mesa, int numero, int quantidade, std::string descricao, double preco){
    mesas[mesa].adicionaAoPedido(numero, quantidade, descricao, preco);
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    double total = 0;

    for(MesaDeRestaurante atual : mesas){
        total += atual.calculaTotal();
    }

    return total;
}

MesaDeRestaurante* RestauranteCaseiro::getMesa(int pos){
    return &mesas[pos];
}