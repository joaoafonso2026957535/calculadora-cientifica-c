/*
=========================================
Projeto Final - Laboratório de Programação

Calculadora Científica em C

Autor: João Afonso
=========================================
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

/*
=========================================
STRUCT
=========================================
*/

struct Operacao
{
    char descricao[100];
};

/*
=========================================
VARIÁVEIS GLOBAIS
=========================================
*/

struct Operacao historico[100];

int totalHistorico = 0;

/*
=========================================
PROTÓTIPOS DAS FUNÇÕES
=========================================
*/

void soma();
void subtracao();
void multiplicacao();
void divisao();

void potencia();
void raizQuadrada();
void seno();
void cosseno();
void tangente();

void mostrarHistorico();

/*
=========================================
FUNÇÃO PRINCIPAL
=========================================
*/

int main()
{
    int opcao;

    do
    {
        printf("\n=================================\n");
        printf("     CALCULADORA CIENTIFICA\n");
        printf("=================================\n");

        printf("\nOPERACOES BASICAS\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");

        printf("\nOPERACOES CIENTIFICAS\n");
        printf("5 - Potencia\n");
        printf("6 - Raiz Quadrada\n");
        printf("7 - Seno\n");
        printf("8 - Cosseno\n");
        printf("9 - Tangente\n");

        printf("\nRECURSOS\n");
        printf("10 - Historico\n");

        printf("\n0 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

    } while(opcao != 0);

    return 0;
}
