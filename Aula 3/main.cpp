#include "ListaEncadeada.hpp"

int main ()
{

    ListaEncadeada lista = ListaEncadeada();

<<<<<<< HEAD
    lista.inserir(1);
    lista.inserir(2);
    lista.inserir(3);
    lista.inserir(4);
    lista.inserir(5);
=======
    lista.inserirOrdenado(1);
    lista.inserirOrdenado(3);
    lista.inserirOrdenado(5);
    lista.inserirOrdenado(2);
    lista.inserirOrdenado(4);

>>>>>>> 2a10cd592d1ac4f491b4af57634600840592ce7d
    lista.imprimir();

    if (lista.procuraX(4)) {
        std::cout << "Valor encontrado: " << std::endl;
    }

    lista.remover(4);
    lista.remover(1);

    lista.imprimir();

<<<<<<< HEAD
=======
    if (!lista.procuraX(6)) {
        std::cout << "Valor NÃO encontrado! " << std::endl;
    }

>>>>>>> 2a10cd592d1ac4f491b4af57634600840592ce7d
    return 0;
}