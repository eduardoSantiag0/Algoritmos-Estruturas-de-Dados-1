#include "PilhaEstatica.hpp"
#define TAM_MAX 10

//// Pop
//// push 
//// Vazia 
//// Cheia 
//// Cria

PilhaEstatica::PilhaEstatica() 
{
    this->topo = -1;
}

bool PilhaEstatica::estaVazia()
{
    return topo == -1;
}

bool PilhaEstatica::estaCheia()
{
    return topo == TAM_MAX - 1;
}

bool PilhaEstatica::pop(int& out)
{
    if (estaVazia()) 
        return false;
    
    out = cartas[topo];
    topo--;
    return true;
}

bool PilhaEstatica::push(int novoElemento)
{
    if (estaCheia()) {
        std::cout << "Não foi possível inserir o elemento " << novoElemento  << " porque a Pilha está cheia " << std::endl;
        return false;
    }
    
    cartas[++topo] = novoElemento;
    return true;
}

bool PilhaEstatica::transfereElementos(PilhaEstatica& pilhaDestino)
{
    if (estaVazia())
        return false;

    if (pilhaDestino.estaCheia())
        return false;

    int walk;
    PilhaEstatica pilhaAuxiliar;

    while (!this->estaVazia())
    {
        this->pop(walk);
        pilhaAuxiliar.push(walk);
    }

    while (!pilhaAuxiliar.estaVazia())
    {
        pilhaAuxiliar.pop(walk);
        pilhaDestino.push(walk);
    }
    
    return estaVazia();

}

void PilhaEstatica::mostrarPilha()
{
    if (estaVazia()) {
        std::cout << "Pilha está vazia!" << std::endl;
        return;
    }

    int walk;
    PilhaEstatica pilhaAuxiliar;
    std::cout << std::endl;

    while (!estaVazia())
    {
        pop(walk);
        std::cout << walk << " ";
        pilhaAuxiliar.push(walk);
    }

    std::cout << std::endl;

    while (!pilhaAuxiliar.estaVazia())
    {
        pilhaAuxiliar.pop(walk);
        push(walk);
    }
    
    std::cout << "Fim da Pilha" << std::endl;
}