/*
Instituto Federal do Tri�ngulo Mineiro- IFTM
Algoritmos e Linguagem de Programa��o- Profa. Daniela Resende
Tecn�logo em An�lise e Desenvolvimento de Sistemas
Jo�o Pedro Teixeira Justino- 1� Per�odo

Prova 2
Quest�o 3 - Registro pluviom�trico
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Declara��o da variaveis
    int regioes[6][9], volumePluviometrico = 0, maiorIndice = 0, indiceI, indiceJ;

    // Cabecalho de introdu��o do programa
    printf("----PREVENCAO DE CHUVAS NO RIO DE JANEIRO----\n");
    printf("---------------------------------------------\n");
    printf("Leituras das estacoes pluviometricas\n");

    // Laco for aninhado para que os valores pluviometricos das regi��es sejam inseridos
    for(int i = 0; i < 6; i++){
        // Laco for que ira representar as linhas da matriz
        for (int j = 0; j < 9; j++){
            printf("Insira a quantidade da regiao (%d,%d)\n", i+1, j+1);
            // Como as matrizes se iniciam em 0, para nao confundir o usuario esta sendo adicionado 1 aos indices
            scanf("%d", &volumePluviometrico);
            // Entrada de dados do usuario com os valores para os volumes pluviometricos

            regioes[i][j] = volumePluviometrico;
            // Matriz recebendo os volumes para as respectivas regioes
        }
        printf("\n");
    }

    // Como o programa ir� mostrar apenas os indices 5, 6 e 7 e nao havera processos relevantes com os outros indices
    // foi optado fazer apenas dos indices relevantes para o resultado final, assim poupando processamento
    printf("Regioes com categoria 5:\n");
    for(int i = 0; i < 6; i++){
        for (int j = 0; j < 9; j++){
            // if para compara��o dos volumes com a tabela para identificar as regioes com indice 5
            if(regioes[i][j] >= 61 && regioes[i][j] <= 75){
                // printf para mostrar as coordenadas das regioes que se enquadram no respectivo indice
                printf("(%d , %d)\n", i+1, j+1);
                // Como as matrizes se iniciam em 0, para nao confundir o usuario esta sendo adicionado 1 aos indices
            }
        }
    }

    printf("Regioes com categoria 6:\n");
    for(int i = 0; i < 6; i++){
        for (int j = 0; j < 9; j++){
            // if para compara��o dos volumes com a tabela para identificar as regioes com indice 6
            if(regioes[i][j] >= 76 && regioes[i][j] <= 90){
                // printf para mostrar as coordenadas das regioes que se enquadram no respectivo indice
                printf("(%d , %d)\n", i+1, j+1);
                // Como as matrizes se iniciam em 0, para nao confundir o usuario esta sendo adicionado 1 aos indices
            }
        }
    }

    printf("Regioes com categoria 7:\n");
    for(int i = 0; i < 6; i++){
        for (int j = 0; j < 9; j++){
            // if para compara��o dos volumes com a tabela para identificar as regioes com indice 7
            if(regioes[i][j] > 90){
                // printf para mostrar as coordenadas das regioes que se enquadram no respectivo indice
                printf("(%d , %d)\n", i+1, j+1);
                // Como as matrizes se iniciam em 0, para nao confundir o usuario esta sendo adicionado 1 aos indices
            }
        }
    }

    // Laco for para identificar qual � o maior volume pluviometrico
    for(int i = 0; i < 6; i++){
        for (int j = 0; j < 9; j++){
            // Condicao para encontrar o maior indice
            if (regioes[i][j] > maiorIndice){
                // Variavel "maiorIndice" recebendo o maior volume pluviometrico
                maiorIndice = regioes[i][j];
                // Variavel para receber as posicoes da matriz para serem mostradas ao final do programa
                indiceI = i+1;
                indiceJ = j+1;
                // Como as matrizes se iniciam em 0, para nao confundir o usuario esta sendo adicionado 1 aos indices
            }
        }
    }

    // Print final mostrando o maior indice pluviometrico encontrado
    printf("O maior indice pluviometrico do estado e: %d mm, na regiao (%d, %d)", maiorIndice, indiceI, indiceJ);


    return 0;
}
