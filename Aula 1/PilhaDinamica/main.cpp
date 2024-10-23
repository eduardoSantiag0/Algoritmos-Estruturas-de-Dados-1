#include "PilhaDinamica.hpp"
#include <iostream>

int main (void)
{

    PilhaDinamica p;

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
    p.push(11);
    p.push(12);
    p.push(13);
    p.push(14);
    p.push(15);

    std::cout << "\nPilha 1" << std::endl; 
    p.mostrarPilha();


    PilhaDinamica p2;

    p.transfereElementos(p2);

    std::cout << "\nPilha 2" << std::endl; 

    p2.mostrarPilha();

}