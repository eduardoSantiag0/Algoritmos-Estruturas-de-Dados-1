#include "ListaEncadeada.hpp"


ListaEncadeada::ListaEncadeada() 
{
    cabeca = nullptr;
    cauda = nullptr;
    numeroElementos = 0;
}

bool ListaEncadeada::vazia() const
{
    return cabeca == nullptr;
}

void ListaEncadeada::inserir(int valor)
{
   std::cout << "INSERINDO... " << std::endl;
    
    Node* novo = new Node(valor);

    if (cabeca == nullptr) {
        cabeca = novo;
        cauda = novo;
        novo->prox = cabeca;
    } else {
        cauda->prox = novo;
        novo->prox = cabeca;
        cauda = novo;
    }

    // Node* walk = cabeca;
    // while (walk->prox != nullptr)
    // {
    //     walk = walk->prox;
    // }
    // walk->prox = novo;
    numeroElementos++;

}

int ListaEncadeada::remover(int agulha)
{
    if (cabeca == nullptr) {
        return -1;
    }

    Node* atual = cabeca;
    Node* ant = cauda;
    int out = -1;

    //* Seja o Primeiro
    if (cabeca->valor == agulha) {
        out = cabeca->valor;

        //* Só tem a cabeca
        if (cabeca == cabeca->prox) {
            delete cabeca;
            cabeca = nullptr;
            cauda = nullptr;
        } else { //* Tenha mais de um elemento
            Node* temp = cabeca;
            cabeca = cabeca->prox;
            cauda->prox = cabeca;
            delete temp;
        }
        
        numeroElementos--;
        return out;
    }


    do {
        ant = atual;
        atual = atual->prox;
    } while (atual != cabeca && atual->valor != agulha);

    //* ATUALIZAR PONTEIROS

    if (atual != cabeca && atual->valor == agulha) {

        ant->prox = atual->prox;
        if (atual == cauda) {
            cauda = ant;
            cauda->prox = cabeca;
        }
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
    if (cabeca == nullptr) {
        std::cout << "A lista está vazia." << std::endl;
        return;
    }

    Node* walk = cabeca;
    std::cout << "Total de numeros:: " << numeroElementos << std::endl;
    
    do {
        std::cout << "Valor: " << walk->valor << std::endl;
        walk = walk->prox;
    } while (walk != cabeca);

    std::cout << "FIM DA LISTA " << std::endl;
}