#ifndef PILHA_ESTATICA_HPP
#define PILHA_ESTATICA_HPP

#define TAM_MAX 20

class PilhaEstatica
{

private:
    int topo;
    int cartas[TAM_MAX];

public: 

    PilhaEstatica();

    bool pop(int& out);
    bool push(int novoElemento);
    bool estaVazia();
    bool estaCheia();

    bool transfereElementos(PilhaEstatica& pilhaDestino);
    void mostrarPilha();

};

#endif