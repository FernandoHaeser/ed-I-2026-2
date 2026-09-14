#include <stdio.h>
#include <stdlib.h>
#include "Interacoes.h"

int valor;
int pos;

// consultas iniciais
void menu()
{
    printf("=== MENU ==="
           "\n1 - Inserir na posição"
           "\n2 - Remover da posição"
           "\n3 - Buscar valor"
           "\n4 - Listar elementos"
           "\n0 - Sair"
           "\nR: ");
}

void limpaTela()
{
    system("cls || clear");
}

int escolhePosicao()
{
    printf("Informe a posição (1,2,3,4...): ");
    scanf("%d", &pos);
    return pos;
}

int escolheValor()
{
    printf("Informe o valor: ");
    scanf("%d", &valor);
    return valor;
}

void aguardaConfirmar()
{
    printf("\nAperte ENTER para continuar...\n");
    getchar();
    getchar();
}

void catShow()
{
    printf("\n──────▄▀▄─────▄▀▄\n");
    printf("─────▄█░░▀▀▀▀▀░░█▄\n");
    printf("─▄▄──█░░░░░░░░░░░█──▄▄\n");
    printf("█▄▄█─█░░▀░░┬░░▀░░█─█▄▄\n");
}