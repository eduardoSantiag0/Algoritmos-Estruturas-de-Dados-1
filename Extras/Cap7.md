- PARA FAZER: 5, 8, 12, 17
- FEITOS: 4, 6, 10, 13, 15, 16

1. Circular
2. Duplamente Encadeada
Empilha (Pilha P, Char X, bool deuCerto) {

    //CHEIA
    se (Cheaio(P)) deuCerto = false; return;

    pAux = newNode();
    pAux->info = X;
    pAux->prox = NULL;
    pAux->ant = NULL;

    //VAZIA
    se (Vazia(P)) {
        pAux->prox = pAux;
        pAux->ant = pAux;
        P.Topo = pAux;
        deuCerto = true;
        return;
    }

    // Não Vazia
    pAux->prox = P.Topo;
    pAux->ant = P.Topo->ant;

    P.Topo->ant->prox = pAux;
    P.Topo->ant = pAux;
    P.Topo = pAux;
    
    deuCerto = true;
}





## 7.4 Implemente uma Fila como Lista Circular Duplamente Encadeada
### Circular
### Duplamente Encadeado
//Caso: Fila Vazia, Único Elemento, Vários elementos

Emfilera (Fila F, Char X, bool deuCerto) {
    se (Cheio(F)) deuCerto = false; return;

    novoNodo = new Node();
    novoNodo->info = X;

    //Vazia
    se (Vazia(F)) {
        novoNodo->prox = novoNodo;
        novoNodo->ant = novoNodo;
        F.Inicio = novoNodo;
        F.Ultimo = pAxu;
        deuCerto = true;
        return;
    }

    //Único Elemento
    if (F.Inicio->prox == F.Inicio->ant) {
        novoNodo->ant = F.Ultimo;
        novoNodo->prox = F.Inicio;

        F.Ultimo->prox = novoNodo;
        F.Inicio->ant = novoNodo;
        F.Inicio->prox = novoNodo;

        F.Ultimo = novoNodo;

        deuCerto = true;
        return;
    }

    //Vários Elementos - Inserir no Fundo

    F.Ultimo = novoNodo;
    F.Inicio->prox = novoNodo;
    novoNodo->ant = F.Inicio;


}


## 7.15 Que vantagens você pode apontar quanto ao uso de um Nó Header, em uma estrutura de armazenamento? 
- Resposta: Torna as operações de inserir e remover, no caso de uma da estrutura estar vazia ou com um único elemento, mais simples pois não precisam ser tratadas como exceções.   

- Com Header
InserirInicio(lista, elemento):
    novoNodo ← criarNodo()
    novoNodo.dado ← elemento

    novoNodo.prox ← lista.header.prox
    lista.header.prox ← novoNodo

- Sem Header
InserirInicio(lista, elemento):
    novoNodo ← criarNodo()
    novoNodo.dado ← elemento

    SE lista.inicio = NULL ENTÃO // Condição necessária sem o Nó Header
        novoNodo.prox ← NULL
        lista.inicio ← novoNodo
    SENÃO
        novoNodo.prox ← lista.inicio
        lista.inicio ← novoNodo
    FIM_SE


## 7.6  TAD  Lista  Cadastral  Implementada  como  Lista  Circular  Duplamente  Encadeada  Não  Ordenada,  Sem Elementos Repetidos, e com Nó Header
// Casos Inserir: Vazia, Fim da Lista

- Circular
- Duplamente  Encadeada
- Sem Elementos Repetidos
- Nó header

Inserir (Lista L, Char X) {
    novoNodo = criarNodo();
    novoNodo.valor = X;


    //Vazia

    // if (L->Header->prox == NULL) {
    if (L->Header->prox == L->Header) { // Header aponta para ele mesmo
        L->Header->prox = novoNodo;
        novoNodo->ant = L->Header;
        novoNodo->prox = L->Header;

        L->Header->ant = novoNodo; // Atualizar o ponteiro 'ant' do Header

        return true;
    }

    pAux = L->Header->prox;

    while (pAux != L->Header && pAux.valor != X) 
    {
        //Sem Elementos Repetidos
        if (pAux.valor == X) {
            return false;
        }
        pAux = pAux->prox;
    }


    ultimo = L->Header->ant;
    ultimo->prox = novoNodo;
    novoNodo->ant = ultimo;
    novoNodo->prox = L->Header; // Circular
    L->Header->ant = novoNodo;

    return true;

}


## 7.8 Pilha  Implementada  a  Partir  das  Operações  de Baixo Nível para Manipulação de Listas Encadeadas - pg 14


## 7.10 Lista Cadastral Sem Repetições a Partir de Operações de Baixo Nível para Listas Encadeadas - pg 16 e ver pg 13
- Lista Circular
- Duplamente Encadeada 
- Nó Header
- Sem repetições

Insere (Lista L, char X, bool OK) {

    // Sem reeptições
    if (EstaNaLista(L, X, pAux)) return;

    // Vazia 
    if(Vazia(L)) {
        insereADireitaDeP(L, L->Header, X, OK);
        return;
    }

    pAux = PegaOPrimeiro();


    pUltimo = L->Header->ant;
    InsereADireitaDeP (L, pUltimo, X, OK);    

} 

Retira (Lista L, Char X, bool DeuCerto) {
    Criar(paraDeletar);
    if (estaNaLista(L, X, paraDeletar)) {
        Remove_P (L, paraDeletar, DeuCerto);
        return;
    }

    DeuCerto = false;

}


## 7.16 Em sua opinião, quais são as vantagens e as desvantagens de implementar Pilhas, Filas e Listas Cadastrais a partir de primitivas de baixo nível para manipulação de Listas Encadeadas, como as do Quadro 7.11?

- R: Utilizar operações primitivas permite maior controle na implementação. Enquanto que a abstração de alto nível permite que o desenvolvedor foque nas apenas lógica, sem se preocupar com a implementação. 

## 7.5  TAD  Lista  Cadastral  Implementada  como  Lista Circular Duplamente Encadeada, Não Ordenada 
- R: