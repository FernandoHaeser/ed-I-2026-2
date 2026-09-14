#include <stdio.h>
#include "Lista.h"

static int lista[MAX];
static int n;

void criar_lista()
{
    n = 0;
}

void inserir(int valor, int pos) // posicao arbitrária
{

    if (lista_cheia())
    {
        printf("Lista cheia!\n");
        return;
    }

    if (pos < 0 || pos > n)
    {
        printf("Posicao invalida!\n");
        return;
    }

    for (int i = n; i > pos; i--)
    {
        lista[i] = lista[i - 1];
    }
    printf("Número adicionado com sucesso!\n");
    lista[pos] = valor;
    n++;
}

void inserir_inicio(int valor) // posição [0]
{
    inserir(valor, 0);
}

void inserir_final(int valor) // posicao [9]
{
    inserir(valor, n);
}

void remover(int pos)
{

    if (lista_vazia())
    {
        printf("Lista vazia!\n");
        return;
    }

    if (pos < 0 || pos >= n)
    {
        printf("Posicao invalida!\n");
        return;
    }

    for (int i = pos; i < n - 1; i++)
    {
        lista[i] = lista[i + 1];
    }
    printf("Número removido com sucesso!");
    n--;
}

void remover_inicio(void)
{
    remover(0);
}

void remover_final(void)
{
    remover(n - 1);
}

void remover_valor(int valor)
{

    int pos = buscar(valor);

    if (pos == -1)
    {
        printf("Valor nao encontrado!\n");
        return;
    }

    remover(pos);
}

int lista_vazia(void)
{
    return n == 0;
}

int lista_cheia(void)
{
    return n == MAX;
}

void listar(void)
{

    if (lista_vazia())
    {
        printf("\nA lista está vazia!");
    }
    else
    {
        printf("Lista: ");

        for (int i = 0; i < n; i++)
        {
            printf("%d ", lista[i]);
        }

        printf("\n");
    }
}

void buscaExibeValor(int valor)
{

    int busca = buscar(valor);

    if (busca != -1)
    {
        printf("Valor encontrado na posição %d!\n", (busca + 1));
    }
    else
    {
        printf("Valor não encontrado!\n");
    }
}

int buscar(int valor)
{

    for (int i = 0; i < n; i++)
    {

        if (lista[i] == valor)
        {
            return i;
        }
    }

    return -1;
}

int obter(int pos)
{

    if (pos < 0 || pos >= n)
    {
        printf("Posicao invalida!\n");
        return -1;
    }

    return lista[pos];
}

int tamanho(void)
{
    return n;
}
