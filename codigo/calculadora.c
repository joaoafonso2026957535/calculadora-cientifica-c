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

 /* Verifica se o usuário digitou um número */
        if(scanf("%d", &opcao) != 1)
        {
            printf("\nEntrada invalida! Digite apenas numeros.\n");

            /* Limpa o buffer do teclado */
            while(getchar() != '\n');

            /* Define uma opção inválida para continuar o programa */
            opcao = -1;
        }
        else
        {
            
            
    switch(opcao)
    {
        case 1:
            printf("\nFuncao Soma sera executada.\n");
            break;

        case 2:
            printf("\nFuncao Subtracao sera executada.\n");
            break;

        case 3:
            printf("\nFuncao Multiplicacao sera executada.\n");
            break;

        case 4:
            printf("\nFuncao Divisao sera executada.\n");
            break;

        case 5:
            printf("\nFuncao Potencia sera executada.\n");
            break;

        case 6:
            printf("\nFuncao Raiz Quadrada sera executada.\n");
            break;

        case 7:
            printf("\nFuncao Seno sera executada.\n");
            break;

        case 8:
            printf("\nFuncao Cosseno sera executada.\n");
            break;

        case 9:
            printf("\nFuncao Tangente sera executada.\n");
            break;

        case 10:
            printf("\nHistorico sera exibido.\n");
            break;

        case 0:
            printf("\nEncerrando o sistema...\n");
            break;

        default:
            printf("\nOpcao invalida! Escolha uma opcao entre 0 e 10.\n");
    }
}

    } while(opcao != 0);

    return 0;
}
