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
    p.push(6);
    p.push(7);
    p.push(8);
    p.push(9);
    p.push(10);

    std::cout << "\nPilha 1" << std::endl; 
    p.mostrarPilha();

    p.push(11);

    PilhaEstatica p2;

    p.transfereElementos(p2);

    std::cout << "\nPilha 2" << std::endl; 

    p2.mostrarPilha();

}