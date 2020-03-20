#pragma once

#include "Pedido.h"
#include <vector>

using namespace std;

class MesaDeRestaurante{
    
    private:

        vector <Pedido> pedidos;

    public:

        void adicionaAoPedido(int numero, int quantidade, string descricao, double preco);
        void zeraPedidos();
        double calculaTotal();
};