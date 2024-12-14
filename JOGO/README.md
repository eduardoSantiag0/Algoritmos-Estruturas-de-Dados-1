## 🧠 Lógica da Fila
- 🗂️ A fila é implementada utilizando a estrutura genérica ``std::vector`` para armazenar elementos de forma dinamica. 
- 🛠️ ``std::vector`` apenas ajuda a manipular a estrutura de forma dinâmica. O comportamento de fila é criado utilizando os métodos que ele oferece.
- ➕ ``.push_back(novoElemento)`` insere o novo elemento no final da fila
- ➖`` .erase(fila.begin())`` remove o primeiro elemento da fila. ``erase()`` remove o elemento da estrutura enquanto o ``fila.begin()`` é passado para informar a posição na qual se deseja remover.
- 🖌 **Cores:** Cada elemento da fila é representado por uma cor, definida pelo enum Cores, que pode ser:
  - 🔴 VERMELHO
  - 🟢 VERDE
  - 🔵 AZUL 
- 🚀**FilaDinamica:** oferece funcionalidades para adicionar, remover e visualizar elementos na fila, além de verificar se a fila está vazia.

## 🖥️ Main

- O seguinte código tem a função de gerar uma seed e gerar um numero entre 1 e 3

```cpp
void initializeRandomSeed() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

int randomIntGenerator(int max) {
    return std::rand() % max;
}
```

## 📋 Opções:
**1 - Adicionar pacote na fila:** Insere um novo pacote com uma cor aleatória (0 → VERMELHO, 1 → VERDE, 2 → AZUL).

**2 - Entregar carga:** Remove pacotes da fila com cor correspondente ao ponto de entrega atual.

**3 - Mudar cor do ponto de entrega:** Atualiza a cor do ponto de entrega com uma nova cor aleatória.


- ### 📌 Exemplo: 
````
        1 - Adicionar pacote na fila
        2 - Entregar carga
        3 - Mudar Cor do Ponto de Entrega
        4 - Finalizar aplicação

Cor do Ponto de Entrega: VERMELHO
VERMELHO VERDE 	FIM DA FILA

2

Cor do Ponto de Entrega: VERMELHO
VERDE 	FIM DA FILA

Finalizando...
VERDE 	FIM DA FILA
````
