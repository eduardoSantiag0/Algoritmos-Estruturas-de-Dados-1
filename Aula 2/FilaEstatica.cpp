#include "FilaEstatica.hpp"
#include <iostream>

#define MAX_TAM 3
//// Criar Fila
//// Queue
//// Dequeue
//// estaVazia
//// estaCheia
//// mostrarFila
//// verificarFilaCheiaSemVariavel


FilaEstatica::FilaEstatica()
{
    // vetor[MAX_TAM];
    numElementos = 0;
    comeco = 0;
    fim = 0;
}

bool FilaEstatica::enfileirar(int novo)
{
    if (estaCheia()) {
        std::cout << "Fila esta cheia :(" << std::endl;
        return false;
    }

    vetor[fim] = novo;
    fim = (fim + 1) % MAX_TAM; 
    numElementos++;

    return true;

}

bool FilaEstatica::desenfileirar (int& out)
{
    if (estaVazia()) {
        std::cout << "Fila está vazia :(" << std::endl;
        return false; 
    }

    out = vetor[comeco];
    comeco = (comeco + 1) % MAX_TAM;
    numElementos--;
    
    return true;
}

void FilaEstatica::mostrarFila()
{
    if (estaVazia()) {
        std::cout << "Fila esta Vazia" << std::endl;

        return;
    }
    for (int i = 0; i < numElementos ; i++) {
        int index = (comeco + i) % MAX_TAM;
        std::cout << vetor[index] << " ";
    }

    std::cout << std::endl;
    std::cout << "FIM DA FILA" << std::endl;

}


bool FilaEstatica::estaVazia()
{
    return numElementos == 0;
}

bool FilaEstatica::estaCheia()
{
    return numElementos == MAX_TAM; 
}


bool FilaEstatica::verificarFilaCheiaSemVariavel()
{
    if (comeco == fim) {
        std::cout << "Fila esta cheia (verificacao sem variavel)" << std::endl;
        return true;
    }
    std::cout << "Fila NAO esta cheia (verificacao sem variavel)" << std::endl;
    return false;
}

void FilaEstatica::reiniciarFila()
{
    std::cout << "FILA REINICIADA" << std::endl;

    numElementos = 0;
    comeco = 0;
    fim = 0;
}

bool FilaEstatica::compararFilas(FilaEstatica& f2)
{
    if (estaVazia() && f2.estaVazia())
        return true;

    if (numElementos != f2.numElementos)
        return false;
    
    int topo1 = comeco;
    int topo2 = f2.comeco;

    for (int i = 0; i < numElementos ; i++) {
        if (vetor[topo1] != f2.vetor[topo2]) {
            return false; 
        }

        topo1 = (topo1 + 1) % MAX_TAM;
        topo2 = (topo2 + 1) % MAX_TAM;
    }

    return true;
    
}