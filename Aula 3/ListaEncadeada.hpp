#ifndef LISTA_ENCADEADA_H
#define LISTA_ENCADEADA_H

#include <iostream>

struct Node 
{
    int valor;
    Node* prox;

    Node(int valor) : valor(valor), prox(nullptr) { };
};

class ListaEncadeada
{
private:
    Node* cabeca;
    Node* cauda;
    int numeroElementos;

public: 
    ListaEncadeada();
    bool cheia() const;
    bool vazia() const;
    void inserir(int valor);
    int remover(int agulha);
    void imprimir() const;

};

#endif