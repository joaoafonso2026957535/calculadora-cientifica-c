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
            soma();
            break;

        case 2:
            subtracao();
            break;

        case 3:
            multiplicacao();
            break;

        case 4:
         divisao();
            break;

        case 5:
            potencia();
            break;

        case 6:
            raizQuadrada();
            break;

        case 7:
            seno();
            break;

        case 8:
            cosseno();
            break;

        case 9:
            tangente();
            break;

        case 10:
            mostrarHistorico();
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
void soma()
{
    float num1;
    float num2;
    float resultado;

    printf("\n=== SOMA ===\n");

    printf("Digite o primeiro numero: ");

    if(scanf("%f", &num1) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    printf("Digite o segundo numero: ");

    if(scanf("%f", &num2) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    resultado = num1 + num2;

    printf("\nResultado: %.2f\n", resultado);

    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Soma: %.2f + %.2f = %.2f",
        num1,
        num2,
        resultado
    );

    totalHistorico++;
}
}

void subtracao()
{
    float num1;
    float num2;
    float resultado;

    printf("\n=== SUBTRACAO ===\n");

    printf("Digite o primeiro numero: ");

    if(scanf("%f", &num1) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    printf("Digite o segundo numero: ");

    if(scanf("%f", &num2) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    resultado = num1 - num2;

    printf("\nResultado: %.2f\n", resultado);

    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Subtracao: %.2f - %.2f = %.2f",
        num1,
        num2,
        resultado
    );

    totalHistorico++;
}
}


void multiplicacao()
{
    float num1;
    float num2;
    float resultado;

    printf("\n=== MULTIPLICACAO ===\n");

    printf("Digite o primeiro numero: ");

    if(scanf("%f", &num1) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    printf("Digite o segundo numero: ");

    if(scanf("%f", &num2) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }
  resultado = num1 * num2;

    printf("\nResultado: %.2f\n", resultado);

    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Multiplicacao: %.2f * %.2f = %.2f",
        num1,
        num2,
        resultado
    );

    totalHistorico++;
}
}

void divisao()
{
    float num1;
    float num2;
    float resultado;

    printf("\n=== DIVISAO ===\n");

    printf("Digite o primeiro numero: ");

    if(scanf("%f", &num1) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

   printf("Digite o segundo numero: ");

if(scanf("%f", &num2) != 1)
{
    printf("\nEntrada invalida! Digite apenas numeros.\n");

    while(getchar() != '\n');

    return;
}

if(num2 == 0)
{
    printf("\nErro! Divisao por zero nao e permitida.\n");
    return;
}
    resultado = num1 / num2;

printf("\nResultado: %.2f\n", resultado);

if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Divisao: %.2f / %.2f = %.2f",
        num1,
        num2,
        resultado
    );

    totalHistorico++;
}
}

void potencia()
{
    float base;
    float expoente;
    float resultado;

    printf("\n=== POTENCIA ===\n");

    printf("Digite a base: ");

    if(scanf("%f", &base) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    printf("Digite o expoente: ");

    if(scanf("%f", &expoente) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    resultado = pow(base, expoente);

    printf("\nResultado: %.2f\n", resultado);
    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Potencia: %.2f ^ %.2f = %.2f",
        base,
        expoente,
        resultado
    );

    totalHistorico++;
}
}

void raizQuadrada()
{
    float numero;
    float resultado;

    printf("\n=== RAIZ QUADRADA ===\n");

    printf("Digite um numero: ");

    if(scanf("%f", &numero) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    if(numero < 0)
    {
        printf("\nErro! Nao existe raiz quadrada real de numero negativo.\n");
        return;
    }

    resultado = sqrt(numero);

    printf("\nResultado: %.2f\n", resultado);
    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Raiz Quadrada: raiz(%.2f) = %.2f",
        numero,
        resultado
    );

    totalHistorico++;
}
}

void seno()
{
    float angulo;
    float resultado;

    printf("\n=== SENO ===\n");

    printf("Digite o angulo em graus: ");

    if(scanf("%f", &angulo) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    resultado = sin(angulo * M_PI / 180);

    printf("\nResultado: %.4f\n", resultado);
    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Seno: sen(%.2f) = %.4f",
        angulo,
        resultado
    );

    totalHistorico++;
}
}

void cosseno()
{
    float angulo;
    float resultado;

    printf("\n=== COSSENO ===\n");

    printf("Digite o angulo em graus: ");

    if(scanf("%f", &angulo) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    resultado = cos(angulo * M_PI / 180);

    printf("\nResultado: %.4f\n", resultado);
    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Cosseno: cos(%.2f) = %.4f",
        angulo,
        resultado
    );

    totalHistorico++;
}
}

void tangente()
{
    float angulo;
    float resultado;

    printf("\n=== TANGENTE ===\n");

    printf("Digite o angulo em graus: ");

    if(scanf("%f", &angulo) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    resultado = tan(angulo * M_PI / 180);

    printf("\nResultado: %.4f\n", resultado);
    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Tangente: tan(%.2f) = %.4f",
        angulo,
        resultado
    );

    totalHistorico++;
}
}

void mostrarHistorico()
{
    int i;

    printf("\n=== HISTORICO DE OPERACOES ===\n");

    if(totalHistorico == 0)
    {
        printf("Nenhuma operacao realizada.\n");
        return;
    }

    for(i = 0; i < totalHistorico; i++)
    {
        printf("%d - %s\n", i + 1, historico[i].descricao);
    }
}

