#include "PilhaDinamica.hpp"

PilhaDinamica::PilhaDinamica()
{
    topo = nullptr;
}

bool PilhaDinamica::estaVazia()
{
    return topo == nullptr;
}

bool PilhaDinamica::pop(int& out)
{
    if (estaVazia()) {
        std::cout << "Pilha está Vazia" << std::endl;
        return false;
    }

    No* deletar = topo;
    out = topo->valor;
    topo = topo->prox;

    delete deletar;

    return true;

}

bool PilhaDinamica::push(int novoElemento)
{
    No* novoNo = new No;
    novoNo->valor = novoElemento;
    novoNo->prox = topo;
    topo = novoNo;
    return true;
}

bool PilhaDinamica::transfereElementos(PilhaDinamica& pilhaDestino)
{
    if (estaVazia()) {
        std::cout << "Pilha está vazia" << std::endl;
        return false;
    }

    int walk = topo->valor;
    PilhaDinamica pilhaAux;

    while (!this->estaVazia())
    {
        this->pop(walk);
        pilhaAux.push(walk);
    }

    while (!pilhaAux.estaVazia())
    {
        pilhaAux.pop(walk);
        pilhaDestino.push(walk);
    }

    return estaVazia();
}

void PilhaDinamica::mostrarPilha()
{
    if (estaVazia()) {
        std::cout << "Pilha está vazia" << std::endl;
        return;
    }

    int walk = topo->valor;
    PilhaDinamica pilhaAux;

    while (!estaVazia())
    {
        pop(walk);
        std::cout << walk << " ";
        pilhaAux.push(walk);
    }

    std::cout << std::endl;


    while (!pilhaAux.estaVazia())
    {
        pilhaAux.pop(walk);
        push(walk);
    }

    std::cout << "Fim da Pilha" << std::endl;
}