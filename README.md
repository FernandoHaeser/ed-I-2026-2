# Trabalho de Estrutura de Dados

Implementação de uma **lista sequencial de 10 posições**, utilizando um vetor de inteiros, com operações de inserção, remoção, busca e listagem.

## 📌 Objetivo

O objetivo deste trabalho é desenvolver uma implementação de **lista sequencial** utilizando um vetor de inteiros.

O trabalho tem como foco:

* Compreender a organização de dados em memória;
* Implementar operações fundamentais de listas;
* Exercitar inserção e remoção fora de ordem;
* Desenvolver habilidades básicas de depuração;
* Estruturar o código em módulos reutilizáveis.

> Este trabalho também servirá como base conceitual para o **Trabalho 2**, no qual a estrutura será reimplementada utilizando alocação dinâmica de memória e ponteiros.

---

## 🧩 Cenário do Sistema

Será implementado um sistema simples para gerenciamento de **valores inteiros armazenados em uma lista**.

Cada elemento será representado por um número inteiro, podendo ser:

* Positivo;
* Negativo;
* Zero.

Os valores funcionam apenas como identificadores (IDs) e não possuem um significado específico para o sistema.

### Exemplo

```text
[ 15, -8, 30, 0, 12 ]
```

O sistema deverá permitir realizar operações como:

* Inserção;
* Remoção;
* Busca;
* Listagem.

A lista **não precisa manter os elementos ordenados**.

As inserções e remoções devem ocorrer, preferencialmente, na posição indicada pelo usuário.

### Regras da lista

* Não podem existir "buracos" entre elementos válidos;
* Os elementos ocupam sempre as posições `0` até `n - 1`;
* A lista deve aceitar números positivos, negativos e zero.

---

## 🗃️ Estrutura da Lista

A lista será implementada utilizando:

```c
#define MAX 10

int lista[MAX];
int n;
```

Onde:

* `lista` é o vetor responsável por armazenar os elementos;
* `MAX` define a capacidade máxima da lista;
* `n` representa a quantidade atual de elementos armazenados.

### Organização da memória

Se `n = 5`, os elementos válidos estarão em:

```text
lista[0]
lista[1]
lista[2]
lista[3]
lista[4]
```

As posições a partir de `lista[5]` são consideradas livres.

A lista possui capacidade máxima de **10 elementos**.

---

## ⚙️ Operações Obrigatórias

### Operações Básicas

A implementação deverá possuir operações para:

* [ ] Criar uma lista vazia;
* [ ] Verificar se a lista está vazia;
* [ ] Verificar se a lista está cheia;
* [ ] Obter o tamanho atual da lista.

### Inserção

Deverão ser implementadas as seguintes formas de inserção:

* [ ] Inserir no início;
* [ ] Inserir no final;
* [ ] Inserir em uma posição arbitrária.

Ao inserir um elemento em uma posição intermediária, os elementos existentes deverão ser **deslocados para a direita**.

Exemplo:

```text
Antes:

[ 10, 20, 30, 40 ]

Inserir 15 na posição 1:

[ 10, 15, 20, 30, 40 ]
```

### Remoção

Deverão ser implementadas as seguintes formas de remoção:

* [ ] Remover do início;
* [ ] Remover do final;
* [ ] Remover de uma posição arbitrária;
* [ ] Remover elemento pelo valor.

Ao remover um elemento, os elementos posteriores deverão ser **deslocados para a esquerda**, evitando a criação de "buracos".

Exemplo:

```text
Antes:

[ 10, 20, 30, 40 ]

Remover posição 1:

[ 10, 30, 40 ]
```

### Consulta

Deverão ser implementadas operações para:

* [ ] Buscar a posição de um determinado valor;
* [ ] Obter o valor armazenado em uma determinada posição;
* [ ] Imprimir todos os elementos da lista.

---

## 📁 Organização do Projeto

O código deverá ser dividido em múltiplos arquivos:

```text
.
├── lista.h
├── lista.c
└── main.c
```

### `lista.h`

Responsável por:

* Definir a capacidade máxima da lista;
* Declarar os protótipos das funções.

### `lista.c`

Responsável por:

* Implementar as operações da lista;
* Controlar inserções e remoções;
* Realizar buscas e consultas.

### `main.c`

Responsável por:

* Interface do programa;
* Menu de operações;
* Entrada de dados do usuário;
* Chamada das funções da lista.

---

## 🖥️ Interface do Programa

A interface será baseada em terminal e deverá possuir, no mínimo, um menu semelhante a:

```text
================================
       LISTA SEQUENCIAL
================================

1 - Inserir na posição
2 - Remover da posição
3 - Buscar valor
4 - Listar elementos
0 - Sair

Escolha uma opção:
```

A interface poderá ser adaptada conforme a implementação do grupo, desde que as operações obrigatórias estejam disponíveis.

---

## 🧪 Testes

Serão realizados testes para verificar o comportamento da lista em diferentes situações.

### Casos de teste

* [ ] Inserir em uma lista vazia;
* [ ] Inserir no início;
* [ ] Inserir no meio;
* [ ] Inserir no final;
* [ ] Remover do início;
* [ ] Remover do meio;
* [ ] Remover do final;
* [ ] Remover um valor existente;
* [ ] Tentar remover um valor inexistente;
* [ ] Inserir quando a lista estiver cheia;
* [ ] Remover quando a lista estiver vazia;
* [ ] Buscar um valor existente;
* [ ] Buscar um valor inexistente;
* [ ] Testar valores negativos;
* [ ] Testar o valor `0`.

### Exemplo de sequência de teste

```text
1. Criar lista vazia
2. Inserir 10 no final
3. Inserir 20 no final
4. Inserir 15 na posição 1
5. Listar

Resultado esperado:
[ 10, 15, 20 ]

6. Remover posição 1
7. Listar

Resultado esperado:
[ 10, 20 ]
```

Os testes podem ser realizados através da execução do programa, de sequências documentadas de operações ou de funções auxiliares de teste.

> Não é necessário utilizar frameworks de teste.

---

## 🤖 Uso de Inteligência Artificial

Ferramentas de IA generativa podem ser utilizadas como **apoio ao desenvolvimento**.

Entretanto, é necessário que:

* O código desenvolvido seja compreendido pelos alunos;
* Os alunos sejam capazes de explicar o funcionamento da implementação;
* As sugestões fornecidas por ferramentas de IA sejam avaliadas criticamente;
* A implementação final seja de responsabilidade dos alunos.

Durante a apresentação, os alunos deverão demonstrar domínio sobre o código desenvolvido.

---

## 🚧 Checkpoint

Antes da entrega final haverá um **checkpoint obrigatório**.

### Objetivos

O checkpoint tem como finalidade:

* Verificar o andamento real do trabalho;
* Acompanhar a evolução do desenvolvimento;
* Identificar dificuldades antecipadamente;
* Garantir a autoria do código desenvolvido.

### Entrega

Deverão ser enviados:

* Código-fonte atual do projeto.

### Apresentação

Durante o checkpoint, cada dupla deverá realizar uma breve apresentação demonstrando:

* O que já foi implementado;
* Como o código está organizado;
* Quais operações já estão funcionando.

> A avaliação do checkpoint compõe a nota final do trabalho.

---

## 📋 Status do Desenvolvimento

| Funcionalidade          | Status |
| ----------------------- | ------ |
| Criar lista vazia       | ⬜      |
| Verificar lista vazia   | ⬜      |
| Verificar lista cheia   | ⬜      |
| Obter tamanho           | ⬜      |
| Inserir no início       | ⬜      |
| Inserir no final        | ⬜      |
| Inserir em posição      | ⬜      |
| Remover no início       | ⬜      |
| Remover no final        | ⬜      |
| Remover em posição      | ⬜      |
| Remover por valor       | ⬜      |
| Buscar valor            | ⬜      |
| Obter valor por posição | ⬜      |
| Listar elementos        | ⬜      |
| Menu do sistema         | ⬜      |
| Testes                  | ⬜      |

---

## 📚 Conceitos Trabalhados

Este projeto aborda os seguintes conceitos de Estrutura de Dados:

* Lista sequencial;
* Vetores;
* Índices;
* Controle de tamanho;
* Inserção de elementos;
* Remoção de elementos;
* Deslocamento de elementos;
* Busca linear;
* Modularização;
* Arquivos `.h` e `.c`;
* Separação entre interface e implementação;
* Depuração e testes.

---

## 🔮 Próxima Etapa

Este trabalho servirá como base para o **Trabalho 2**, no qual a lista será reimplementada utilizando:

* Alocação dinâmica de memória;
* Ponteiros;
* Gerenciamento dinâmico da estrutura de dados.
