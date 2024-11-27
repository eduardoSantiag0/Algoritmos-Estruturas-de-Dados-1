#ifndef LISTA_ENCADEADA_H
#define LISTA_ENCADEADA_H

#include <iostream>

struct Node 
{
    int valor;
    Node* prox;

    Node(int valor) : valor(valor), prox(nullptr)
    { 
    };
};

class ListaEncadeada
{
private:
    Node* cabeca;
    int numeroElementos;

public: 
    ListaEncadeada();
    void inserir(int valor);
    int remover(int agulha);
    void imprimir() const;

    Node* procuraX(int x) const; 
    void inserirOrdenado(int valor);

};

#endif