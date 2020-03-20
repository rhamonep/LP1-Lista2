#pragma once

#include <string>

using namespace std;

class Pedido{

    private:

        int numero;
        int quantidade;
        string descricao;
        double preco;

    public:
    
        Pedido();
        Pedido(int numero, int quantidade, string descricao, double preco);

        int getNumero();
        int getQuantidade();
        string getDescricao();
        double getPreco();

        void setNumero(int numero);
        void setQuantidade(int quantidade);
        void setDescricao(std::string descricao);
        void setPreco(double preco);
};