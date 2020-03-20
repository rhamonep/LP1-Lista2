#include "MesaDeRestaurante.h"

void MesaDeRestaurante::adicionaAoPedido(int numero, int quantidade, std::string descricao, double preco){
    for(int i = 0; i < pedidos.size(); i++){
        if(pedidos[i].getNumero() == numero){
            pedidos[i].setQuantidade(pedidos[i].getQuantidade() + quantidade);
            return;
        }
    }
    Pedido novo = Pedido(numero, quantidade, descricao, preco);
    pedidos.push_back(novo);
}

void MesaDeRestaurante::zeraPedidos(){
    for(int i = 0; i < pedidos.size(); i++){
        pedidos[i] = Pedido();
    }
}

double MesaDeRestaurante::calculaTotal(){
    double total = 0;
    
    for(int i = 0; i < pedidos.size(); i++){
        total += (pedidos[i].getPreco() * pedidos[i].getQuantidade());
    }

    return total;
}