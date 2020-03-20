#include "Pedido.h"

Pedido::Pedido(){
    numero = 0;
    quantidade = 0;
    descricao = "";
    preco = 0;
}

Pedido::Pedido(int numero, int quantidade, std::string descricao, double preco){
    this->numero = numero;
    this->quantidade = quantidade;
    this->descricao = descricao;
    this->preco = preco;
}

int Pedido::getNumero(){
    return numero;
}
int Pedido::getQuantidade(){
    return quantidade;
}
std::string Pedido::getDescricao(){
    return descricao;
}
double Pedido::getPreco(){
    return preco;
}

void Pedido::setNumero(int numero){
    this->numero = numero;
}
void Pedido::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}
void Pedido::setDescricao(std::string descricao){
    this->descricao = descricao;
}
void Pedido::setPreco(double preco){
    this->preco = preco;
}
