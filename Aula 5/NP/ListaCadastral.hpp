#ifndef LISTA_CADASTRAL_H
#define LISTA_CADASTRAL_H

#include <iostream>

struct Node 
{
    int valor;
    Node* prox;

    Node(int valor) : valor(valor), prox(nullptr)
    { 
    };
};

class ListaCadastral
{
private:
    Node* cabeca;
    int numeroElementos;

public: 
    ListaCadastral();
    void inserir(int valor);
    int remover(int agulha);
    void imprimir() const;

    Node* procuraX(int x) const; 
    void inserirOrdenado(int valor);

    void interseccao(ListaCadastral& outraLista);

};

#endif