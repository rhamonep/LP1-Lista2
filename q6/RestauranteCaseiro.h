#pragma once

#include "MesaDeRestaurante.h"

using namespace std;

class RestauranteCaseiro{

    private: 

        MesaDeRestaurante mesas[100];

    public:

        MesaDeRestaurante* getMesa(int pos);
        void adicionaAoPedido(int mesa, int numero, int quantidade, string descricao, double preco);
        double calculaTotalRestaurante();
};