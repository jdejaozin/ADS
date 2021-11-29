/*
Instituto Federal do Tri�ngulo Mineiro- IFTM
Algoritmos e Linguagem de Programa��o- Profa. Daniela Resende
Tecn�logo em An�lise e Desenvolvimento de Sistemas
Jo�o Pedro Teixeira Justino- 1� Per�odo

Prova 1
Quest�o 3 - Atendimento online de um loja de tintas
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Defini��o das vari�veis que ser�o utilizadas
    float precoGalao = 0.0, precoLata = 0.0, areaTotal = 0.0, tinta = 0.0, precoLataFinal = 0.0, precoGalaoFinal = 0.0,
        precoMisto = 0.0;
    int totalLata = 0, totalGalao = 0, mistoLata = 0, mistoGalao = 0, resto = 0;

    // Cabe�alho de introdu��o para o usu�rio
    printf("--------------------------\n");
    printf("   CORACAO DE TINTA\n");
    printf("--------------------------\n");
    printf("- Atendimento online\n");
    printf("\n");

    // Informa��es iniciais sobre a lata e o gal�o de tinta
    printf("===============================\n");
    printf("Lata de tinta = 18 litros\n");
    printf("Galao de tinta = 3.6 litros\n");
    printf("===============================\n");
    printf("Qual e o preco da lata de tinta(R$): ");
    scanf("%f",&precoLata);
    printf("Qual e o preco do galao de tinta(R$): ");
    scanf("%f",&precoGalao);
    printf("\n");
    // Coleta dos valores dos pre�os da lata e do gal�o de tinta

    printf("Qual e a area total a ser pintada(m^2): ");
    scanf("%f",&areaTotal);
    // Coleta do tamanho da �rea total a ser pintada

    tinta = (1 * areaTotal)/ 6;
    // Calculo de quantos litros de tinta ser�o necess�rios para pintar a �rea informada

    printf("Voce ira precisar de %.2f litros de tinta\n", tinta);
    printf("\n");
    // Print mostrando para o usu�rio quantos litros de tinta ele ir� precisar

    totalLata = ceil(tinta / 18); // O arredondamento para cima � para que em qualquer caso sobre tinta, e n�o falte
    precoLataFinal = (float)totalLata * precoLata; // (float) para prevenir poss�veis erros com tipos diferentes
    // Calculo da primeira op��o para saber quantas latas de tinta ser�o necess�rias, e o valor final

    totalGalao = ceil(tinta/ 3.6);
    precoGalaoFinal = (float)totalGalao * precoGalao;
    // Calculo da segunda op��o para saber quantos gal�es de tinta ser�o necess�rios, e o valor final

    // Calculo da terceira op��o, onde as latas e gal�es s�o mistos
    mistoLata = ceil(tinta) / 18; // O arredondamento feito apenas da vari�vel "tinta" � para que sejam apenas divis�es inteiras
                                  // assim � poss�vel descobrir quantas latas ser�o necess�rias
    resto = (int)ceil(tinta) % 18; // (int) � para que seja poss�vel realizar a opera��o "%"(m�dulo), para que seja poss�vel
                                   // saber quantos litros de tinta restou para que seja feita s contas com gal�es
    mistoGalao = ceil(resto/ 3.6); // Conta com o que sobrou de tinta para descobrir quantos gal�es ser�o necess�rios
    precoMisto = ((float)mistoGalao * precoGalao) + ((float)mistoLata * precoLata); // Soma dos pre�os para obter o total misto

    // Prints para mostrar ao usu�rio as op��es poss�veis para sua compra
    printf("Opcao 1: Voce ira precisar de comprar %d lata(s) de tinta, resultando em R$ %.2f\n", totalLata, precoLataFinal);
    printf("Opcao 2: Voce ira precisar de comprar %d galao(oes) de tinta, resultando em R$ %.2f\n", totalGalao, precoGalaoFinal);
    printf("Opcao 3: Voce ira precisa de comprar %d lata(s) de tinta e %d galao(oes) de tinta, resultando em R$ %.2f\n",
           mistoLata, mistoGalao, precoMisto);

    return 0;
}
