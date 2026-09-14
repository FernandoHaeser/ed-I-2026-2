#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Lista.h"
#include "Interacoes.h"

int main()
{

    criar_lista();

    int valor, pos, choice;
    bool keep = true;

    do
    {

        limpaTela();
        menu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            limpaTela();
            pos = escolhePosicao();
            valor = escolheValor();
            inserir(valor, (pos - 1));
            aguardaConfirmar();
            break;
        case 2:
            limpaTela();
            pos = escolhePosicao();
            remover((pos - 1));
            aguardaConfirmar();
            break;
        case 3:
            limpaTela();
            valor = escolheValor();
            buscaExibeValor(valor);
            aguardaConfirmar();
            break;
        case 4:
            limpaTela();
            listar();
            aguardaConfirmar();
            break;
        case 0:
            keep = false;
            break;
        default:
            limpaTela();
            printf("\nValor inserido é inválido para as opções!\n");
            catShow();
            aguardaConfirmar();
        }
    } while (keep);

    return 0;
}