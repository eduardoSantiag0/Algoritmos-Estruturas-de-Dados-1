#include "PilhaEstatica.hpp"
#include <iostream>

int main (void)
{

    PilhaEstatica p;

    p.mostrarPilha();

    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);
    p.push(5);

    p.mostrarPilha();

}