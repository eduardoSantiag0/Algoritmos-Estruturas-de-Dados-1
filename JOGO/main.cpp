#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include "FilaDinamica.hpp"
// #include "utils.cpp"

void initializeRandomSeed() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

int randomIntGenerator(int max) {
    return std::rand() % max;
}

void printMenu()
{
    std::cout << "\t 1 - Adicionar pacote na fila \n"
              << "\t 2 - Entregar carga \n"
              << "\t 3 - Mudar Cor do Ponto de Entrega \n"
              << "\t 4 - Finalizar aplicação" << std::endl;
}

Cores mudarCor(int num) {
    Cores mudar;
    switch (num) {
        case 0: mudar = Cores::VERMELHO; break;
        case 1: mudar = Cores::VERDE; break;
        case 2: mudar = Cores::AZUL; break;
    }

    return mudar;
}

void mostrarPontoDeEntrega(Cores pontoDeEntrega)
{
    std::string corString;
    switch (pontoDeEntrega) {
        case Cores::VERMELHO: corString = "VERMELHO"; break;
        case Cores::AZUL: corString = "AZUL"; break;
        case Cores::VERDE: corString = "VERDE"; break;
    }
    std::cout << "\nCor do Ponto de Entrega: " << corString << std::endl; 

}


void entregarCarga(FilaDinamica& fila, Cores corPontoDeEntrega)
{
    if (corPontoDeEntrega != fila.mostrarFrente()) {
        std::cout << "Não é possível entregar, as cores são diferentes" << std::endl;
        return;
    }

    while (!fila.estaVazia() && corPontoDeEntrega == fila.mostrarFrente()) {
        fila.desenfileirar();
    }

}

int main (void)
{
    initializeRandomSeed();
    FilaDinamica fila;


    int escolha = 0;
    Cores corPontoDeEntrega = Cores::VERMELHO;

    while (escolha != 4)
    {

        printMenu();
        switch (escolha)
        {
            case 1: fila.enfileirar(randomIntGenerator(3));break;
            case 2: entregarCarga(fila, corPontoDeEntrega);break;
            case 3: corPontoDeEntrega = mudarCor(randomIntGenerator(3));
            default: break;
        }

        mostrarPontoDeEntrega(corPontoDeEntrega);
        fila.mostrarFila();
        std::cin >> escolha; 
        std::cout << std::endl;
    }

    std::cout << std::endl;

    fila.mostrarFila();

    return 0;
}