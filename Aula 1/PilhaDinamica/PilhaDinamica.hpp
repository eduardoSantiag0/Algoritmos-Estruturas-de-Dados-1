#ifndef PILHA_DINAMICA_HPP
#define PILHA_DINAMICA_HPP

#include <iostream>

struct No 
{
    int valor;    
    No* prox;      
};

class PilhaDinamica
{
private:
    No* topo;

public:
    PilhaDinamica();

    bool pop(int& out);
    bool push(int novoElemento);
    bool estaVazia();

    bool transfereElementos(PilhaDinamica& pilhaDestino);
    void mostrarPilha();

};


#endif