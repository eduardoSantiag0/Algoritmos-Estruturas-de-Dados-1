# 1. Lista Simplesmente Encadeada
### Operação de Remoção
1. **Lista Vazia:** Não há elementos para remover.

1. **Apenas um elemento:** O único elemento na lista precisa ser removido.

1. **Ser o primeiro:** O elemento a ser removido é o primeiro.

1. **Ser o último:** O elemento a ser removido é o último.

5. **Retirar no Meio:** O elemento a ser removido está no meio da lista.

1. **Não encontrado na lista:** O elemento não está na lista.

- Atualizar ponteiro Node->prox

### Operação de Inserção
1. Inserir em uma lista vazia.

1. Inserir no início da lista.

1. Inserir no fim da lista.

1. Inserir em uma posição específica.
- Atualizar ponteiro Node->prox



# 2. Lista Duplamente Encadeada
### Operação de Remoção
1. **Lista Vazia:** Não há elementos para remover.

2. **Apenas um elemento:** O único elemento na lista precisa ser removido.

3. **Ser o primeiro:** O elemento a ser removido é o primeiro.

4. **Ser o último:** O elemento a ser removido é o último.

5. **Retirar no Meio:** O elemento a ser removido está no meio.
- Atualizar ponteiro Node->prox e Node->anterior de Anterior a ser removido e do Seguinte do Node removido

6. **Não encontrado na lista:** O elemento não está na lista.



### Operação de Inserção
1. Inserir em uma lista vazia.

1. Inserir no início da lista.

1. Inserir no fim da lista.

1. Inserir em uma posição específica.



# 3. Lista Circular
### Operação de Remoção
1. **Lista Vazia:** Não há elementos para remover.

1. **Apenas um elemento:** O único elemento na lista precisa ser removido 
- (necessário ajustar o ponteiro circular para NULL).
3. **Ser o primeiro:** O elemento a ser removido é o primeiro 
- (requer atualizar o último para apontar para o novo primeiro).
4. **Ser o último:** O elemento a ser removido é o último 
- (requer busca pelo anterior).
5. **Retirar no Meio:** O elemento a ser removido está no meio da lista.

1. **Não encontrado na lista:** O elemento não está na lista.

### Operação de Inserção
1. Inserir em uma lista vazia.

1. Inserir no início da lista 

- (atualizar o ponteiro do último para o novo primeiro).
3. Inserir no fim da lista 
- (atualizar o ponteiro do novo último para o primeiro).
4. Inserir em uma posição específica.

# 4. Lista com Nó Header
### Operação de Remoção
1. **Lista Vazia:** Não há elementos para remover 
- (o header aponta apenas para si mesmo).

2. **Apenas um elemento:** O único elemento na lista precisa ser removido.

1. **Ser o primeiro:** O elemento a ser removido é o primeiro 
- (ajustar o próximo do header).

4. **Ser o último:** O elemento a ser removido é o último 
- (ajustar o anterior do header).

5. **Retirar no Meio:** O elemento a ser removido está no meio da lista.

1. **Não encontrado na lista:** O elemento não está na lista.
### Operação de Inserção
1. Inserir em uma lista vazia.

1. Inserir no início da lista 
- (ajustar os ponteiros do header e do próximo elemento).
3. Inserir no fim da lista 
- (ajustar os ponteiros do header e do último elemento).
4. Inserir em uma posição específica.