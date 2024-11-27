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
    //* Começo da Lista
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


void ListaEncadeada::inserirOrdenado(int valor)
{    
    Node* novo = new Node(valor);

    
    if (cabeca == nullptr) { // Primeiro da Lista
        cabeca = novo;
        numeroElementos++;
        return;
    }

    Node* walk = cabeca;
    Node* ant = nullptr;

    while (walk && walk->valor < valor)
    {
        ant = walk;
        walk = walk->prox;
    }

    
    if (ant) { // Meio e Fim da Lista 
        ant->prox = novo;
        novo->prox = walk;
    } else { // Novo  é maior do que Cabeca
        novo->prox = cabeca;
        cabeca = novo;
    }
    
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
    if (!cabeca) return;
    Node* atual = cabeca;
    std::cout << "\tTotal de numeros: " << numeroElementos << std::endl;
    
    while (atual)
    {
        std::cout << "Valor: " << atual->valor << std::endl;
        atual = atual->prox;
    }

    std::cout << "\tFIM DA LISTA" << std::endl;
}

Node* ListaEncadeada::procuraX(int x) const
{

    if (cabeca == nullptr) return nullptr;
    
    if (cabeca->valor == x) return cabeca;

    Node* atual = cabeca;

    while (atual && atual->valor < x)
    {
        if (atual->valor == x) {
            return atual;
        }
        atual = atual->prox;
    }

    return nullptr;

}

