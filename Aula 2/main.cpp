#include "FilaEstatica.hpp"
#include <iostream>

int main (void)
{
    FilaEstatica f1;
    f1.enfileirar(1);
    f1.enfileirar(2);
    f1.enfileirar(3);
    f1.mostrarFila();
    f1.enfileirar(4);

    FilaEstatica f2;
    f2.enfileirar(1);
    f2.enfileirar(4);
    f2.enfileirar(3);

    bool ok = f1.compararFilas(f2);

    if (ok) 
        std::cout << "Filas iguais" << std::endl;
    else 
        std::cout << "Filas Diferentes" << std::endl;

    f1.reiniciarFila();
    f1.mostrarFila();
    
    return 0;
}