#include "ListaEncadeada.hpp"

int main ()
{

    ListaEncadeada lista = ListaEncadeada();

    lista.inserirOrdenado(1);
    lista.inserirOrdenado(3);
    lista.inserirOrdenado(5);
    lista.inserirOrdenado(2);
    lista.inserirOrdenado(4);

    lista.imprimir();

    if (lista.procuraX(4)) {
        std::cout << "Valor encontrado: " << std::endl;
    }

    lista.remover(4);
    lista.remover(1);

    lista.imprimir();

    if (!lista.procuraX(6)) {
        std::cout << "Valor NÃO encontrado! " << std::endl;
    }

    return 0;
}