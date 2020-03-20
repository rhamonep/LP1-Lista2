#include <iostream>
#include <string>
#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include "RestauranteCaseiro.h"

using namespace std;

int main(){

    RestauranteCaseiro restaurante;

    restaurante.getMesa(10)->adicionaAoPedido(1, 10, "Pipoca", 10.0);
    restaurante.adicionaAoPedido(10, 1, 90, "Mais Pipoca", 10.0);

    cout << "Total da mesa 10: R$" << restaurante.getMesa(10)->calculaTotal() << endl;
    
    restaurante.adicionaAoPedido(1, 1, 5, "Chocolate", 5.5);
    
    cout << "Total da mesa 1: R$" << restaurante.getMesa(1)->calculaTotal() << endl;
    cout << "Soma de TODAS as mesas: R$" << restaurante.calculaTotalRestaurante() << endl;

    restaurante.getMesa(10)->zeraPedidos();

    cout << "\nMesa 10 zerada!\n" << endl;
    cout << "Soma de TODAS as mesas: R$" << restaurante.calculaTotalRestaurante() << endl;
    cout << "Total da mesa 10: R$" << restaurante.getMesa(10)->calculaTotal() << endl;

    return 0;
}