#include "ListaEncadeada.hpp"

int main ()
{

    ListaEncadeada lista = ListaEncadeada();

    lista.inserir(1);
    lista.inserir(2);
    lista.inserir(3);
    lista.inserir(4);
    lista.inserir(5);

    lista.imprimir();

    lista.remover(4);
    lista.remover(1);

    lista.imprimir();


    return 0;
}