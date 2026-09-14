#ifndef LISTA_H
#define LISTA_H

#define MAX 10

void criar_lista();
void inserir(int valor, int pos);
void inserir_inicio(int valor);
void inserir_final(int valor);

void remover(int pos);
void remover_inicio(void);
void remover_final(void);
void remover_valor(int valor);

int lista_vazia(void);
int lista_cheia(void);

int buscar(int valor); // usado para encontrar os valores.
void buscaExibeValor(int valor); // usado para resposta da busca.
void listar(void);
int tamanho(void);
int obter(int pos);

#endif