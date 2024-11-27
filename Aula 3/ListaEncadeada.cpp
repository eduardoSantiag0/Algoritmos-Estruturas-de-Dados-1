#include "ListaEncadeada.hpp"



ListaEncadeada::ListaEncadeada() 
{
    cabeca = nullptr;
    numeroElementos = 0;
}


void ListaEncadeada::inserir(int valor)
{
   std::cout << "INSERINDO... " << std::endl;
    
    Node* novo = new Node(valor);
    if (cabeca == nullptr) {
        cabeca = novo;
        numeroElementos++;
        return;
    }

    Node* walk = cabeca;
    while (walk->prox != nullptr)
    {
        walk = walk->prox;
    }

    walk->prox = novo;
    numeroElementos++;

}

int ListaEncadeada::remover(int agulha)
{
    Node* atual = cabeca;
    Node* ant = nullptr;
    int out = -1;

    //* Caso seja o Primeiro
    if (cabeca->valor == agulha) {
        out = cabeca->valor;
        Node* temp = cabeca;
        cabeca = cabeca->prox;
        delete temp;
        numeroElementos--;
        return out;
    }
    while (atual != nullptr && atual->valor != agulha)
    {
        ant = atual;
        atual = atual->prox;
    }

    //* ATUALIZAR PONTEIROS

    if (atual != nullptr && atual->valor == agulha) {
        ant->prox = atual->prox;
        std::cout << "REMOVENDO: " << atual->valor << std::endl;
        out = atual->valor;
        delete atual;
        numeroElementos--;
    } else {
        std::cout << "404 Not Found" << std::endl;
    }
    
    return out;
    
}

void ListaEncadeada::imprimir() const
{
    Node* walk = cabeca;
    std::cout << "Total de numeros:: " << numeroElementos << std::endl;
    
    while (walk)
    {
        std::cout << "Valor: " << walk->valor << std::endl;
        walk = walk->prox;
    }

    std::cout << "FIM DA LISTA " << std::endl;
}