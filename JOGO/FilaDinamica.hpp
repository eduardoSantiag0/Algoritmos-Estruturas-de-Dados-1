#ifndef FILA_DINAMICA_HPP
#define FILA_DINAMICA_HPP

#include <iostream>
#include <vector>
#include <string>
#include "utils.cpp"

enum Cores 
{
    VERMELHO,
    VERDE,
    AZUL 
};

class FilaDinamica
{
private:
    std::vector<Cores> fila;
    int comeco, fim, numElementos;
public:
    std::string corParaString(Cores cor) const ;
    FilaDinamica();
    bool enfileirar(int num);
    Cores desenfileirar();
    bool estaVazia() const;

    Cores mostrarFrente() const;

    void mostrarFila() const;

};


#endif