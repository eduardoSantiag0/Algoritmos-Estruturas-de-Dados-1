#ifndef FILA_ESTATICA_HPP
#define FILA_ESTATICA_HPP

#define MAX_TAM 3

class FilaEstatica
{
private:
    int vetor[MAX_TAM];
    int comeco, fim, numElementos;

public:
    FilaEstatica();
    bool enfileirar(int novoElemento);
    bool desenfileirar(int& out);
    bool estaVazia();
    bool estaCheia();

    void mostrarFila();
    bool verificarFilaCheiaSemVariavel();
    void reiniciarFila();

    bool compararFilas(FilaEstatica& f2);

};


#endif