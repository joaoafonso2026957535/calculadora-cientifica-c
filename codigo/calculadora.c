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

//menus
void menuBasico();  
void menuCientifico(); 

//operações basicas
void soma();
void subtracao();
void multiplicacao();
void divisao();

//operações cientificas
void potencia();
void raizQuadrada();
void seno();
void cosseno();
void tangente();

//recursos
void mostrarHistorico();

/* Funcionalidades em desenvolvimento */
void expressoesComplexas();
void logaritmo();
void fatorial();
void exponencial();

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

       printf("\n1 - Operacoes Basicas\n");
       printf("\n2 - Operacoes Cientificas\n");
       printf("\n3 - Historico\n");
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
    menuBasico();
    break;

case 2:
    menuCientifico();
    break;

case 3:
    mostrarHistorico();
    break;

        case 0:
            printf("\nEncerrando o sistema...\n");
            break;

        default:
            printf("\nOpcao invalida! Escolha uma opcao entre 0 e 3.\n");
    }
} 

    } while(opcao != 0);

    return 0;
}
void menuBasico()
{
    int opcao;

    do
    {
        printf("\n============================\n");
        printf("   OPERACOES BASICAS\n");
        printf("============================\n");

        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Expressoes Complexas\n");
        printf("0 - Voltar\n");

        printf("\nEscolha uma opcao: ");

        if(scanf("%d", &opcao) != 1)
        {
            printf("\nEntrada invalida!\n");

            while(getchar() != '\n');

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
                    expressoesComplexas();
                    break;

                case 0:
                    break;

                default:
                    printf("\nOpcao invalida!\n");
            }
        }

    } while(opcao != 0);
}


void soma()
{
    double num1;
    double num2;
    double resultado;

    printf("\n=== SOMA ===\n");

    printf("Digite o primeiro numero: ");

    if(scanf("%lf", &num1) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    printf("Digite o segundo numero: ");

    if(scanf("%lf", &num2) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    resultado = num1 + num2;

    printf("\nResultado: %.2lf\n", resultado);

    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Soma: %.2lf + %.2lf = %.2lf",
        num1,
        num2,
        resultado
    );

    totalHistorico++;
}
}

void subtracao()
{
    double num1;
    double num2;
    double resultado;

    printf("\n=== SUBTRACAO ===\n");

    printf("Digite o primeiro numero: ");

    if(scanf("%lf", &num1) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    printf("Digite o segundo numero: ");

    if(scanf("%lf", &num2) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    resultado = num1 - num2;

    printf("\nResultado: %.2lf\n", resultado);

    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Subtracao: %.2lf - %.2lf = %.2lf",
        num1,
        num2,
        resultado
    );

    totalHistorico++;
}
}


void multiplicacao()
{
    double num1;
    double num2;
    double resultado;

    printf("\n=== MULTIPLICACAO ===\n");

    printf("Digite o primeiro numero: ");

    if(scanf("%lf", &num1) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    printf("Digite o segundo numero: ");

    if(scanf("%lf", &num2) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }
  resultado = num1 * num2;

    printf("\nResultado: %.2lf\n", resultado);

    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Multiplicacao: %.2lf * %.2lf = %.2lf",
        num1,
        num2,
        resultado
    );

    totalHistorico++;
}
}

void divisao()
{
    double num1;
    double num2;
    double resultado;

    printf("\n=== DIVISAO ===\n");

    printf("Digite o primeiro numero: ");

    if(scanf("%lf", &num1) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

   printf("Digite o segundo numero: ");

if(scanf("%lf", &num2) != 1)
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

printf("\nResultado: %.2lf\n", resultado);

if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Divisao: %.2lf / %.2lf = %.2lf",
        num1,
        num2,
        resultado
    );

    totalHistorico++;
}
}

void expressoesComplexas()
{
    printf("\nFuncionalidade em desenvolvimento.\n");
}


void menuCientifico()
{
    int opcao;

    do
    {
        printf("\n============================\n");
        printf(" OPERACOES CIENTIFICAS\n");
        printf("============================\n");

        printf("1 - Potencia\n");
        printf("2 - Raiz Quadrada\n");
        printf("3 - Seno\n");
        printf("4 - Cosseno\n");
        printf("5 - Tangente\n");
        printf("6 - Logaritmo\n");
        printf("7 - Fatorial\n");
        printf("8 - Exponencial\n");
        printf("0 - Voltar\n");

        printf("\nEscolha uma opcao: ");

        if(scanf("%d", &opcao) != 1)
        {
            printf("\nEntrada invalida!\n");

            while(getchar() != '\n');

            opcao = -1;
        }
        else
        {
            switch(opcao)
            {
                case 1:
                    potencia();
                    break;

                case 2:
                    raizQuadrada();
                    break;

                case 3:
                    seno();
                    break;

                case 4:
                    cosseno();
                    break;

                case 5:
                    tangente();
                    break;

                case 6:
                    logaritmo();
                    break;

                case 7:
                    fatorial();
                    break;

                case 8:
                    exponencial();
                    break;

                case 0:
                    break;

                default:
                    printf("\nOpcao invalida!\n");
            }
        }

    } while(opcao != 0);
}

void potencia()
{
    double base;
    double expoente;
    double resultado;

    printf("\n=== POTENCIA ===\n");

    printf("Digite a base: ");

    if(scanf("%lf", &base) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    printf("Digite o expoente: ");

    if(scanf("%lf", &expoente) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    resultado = pow(base, expoente);

    printf("\nResultado: %.2lf\n", resultado);
    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Potencia: %.2lf ^ %.2lf = %.2lf",
        base,
        expoente,
        resultado
    );

    totalHistorico++;
}
}

void raizQuadrada()
{
    double numero;
    double resultado;

    printf("\n=== RAIZ QUADRADA ===\n");

    printf("Digite um numero: ");

    if(scanf("%lf", &numero) != 1)
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

    printf("\nResultado: %.2lf\n", resultado);
    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Raiz Quadrada: raiz(%.2lf) = %.2lf",
        numero,
        resultado
    );

    totalHistorico++;
}
}

void seno()
{
    double angulo;
    double resultado;

    printf("\n=== SENO ===\n");

    printf("Digite o angulo em graus: ");

    if(scanf("%lf", &angulo) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    resultado = sin(angulo * M_PI / 180);

    printf("\nResultado: %.4lf\n", resultado);
    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Seno: sen(%.2lf) = %.4lf",
        angulo,
        resultado
    );

    totalHistorico++;
}
}

void cosseno()
{
    double angulo;
    double resultado;

    printf("\n=== COSSENO ===\n");

    printf("Digite o angulo em graus: ");

    if(scanf("%lf", &angulo) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    resultado = cos(angulo * M_PI / 180);

    printf("\nResultado: %.4lf\n", resultado);
    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Cosseno: cos(%.2lf) = %.4lf",
        angulo,
        resultado
    );

    totalHistorico++;
}
}

void tangente()
{
    double angulo;
    double resultado;

    printf("\n=== TANGENTE ===\n");

    printf("Digite o angulo em graus: ");

    if(scanf("%lf", &angulo) != 1)
    {
        printf("\nEntrada invalida! Digite apenas numeros.\n");

        while(getchar() != '\n');

        return;
    }

    resultado = tan(angulo * M_PI / 180);

    printf("\nResultado: %.4lf\n", resultado);
    if(totalHistorico < 100)
{
    sprintf(
        historico[totalHistorico].descricao,
        "Tangente: tan(%.2lf) = %.4lf",
        angulo,
        resultado
    );

    totalHistorico++;
}
}

void logaritmo()
{
    printf("\nFuncionalidade em desenvolvimento.\n");
}

void fatorial()
{
    printf("\nFuncionalidade em desenvolvimento.\n");
}

void exponencial()
{
    printf("\nFuncionalidade em desenvolvimento.\n");
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

