#include "ListaEncadeada.hpp"

<<<<<<< HEAD

=======
>>>>>>> 2a10cd592d1ac4f491b4af57634600840592ce7d
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
<<<<<<< HEAD

=======
    //* Começo da Lista
>>>>>>> 2a10cd592d1ac4f491b4af57634600840592ce7d
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
<<<<<<< HEAD
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
=======
    if (!cabeca) return;
    Node* atual = cabeca;
    std::cout << "\tTotal de numeros: " << numeroElementos << std::endl;
    
    while (atual)
    {
        std::cout << "Valor: " << atual->valor << std::endl;
        atual = atual->prox;
    }
>>>>>>> 2a10cd592d1ac4f491b4af57634600840592ce7d

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

