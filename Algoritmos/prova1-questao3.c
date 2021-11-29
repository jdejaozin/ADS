/*
Instituto Federal do Triângulo Mineiro- IFTM
Algoritmos e Linguagem de Programação- Profa. Daniela Resende
Tecnólogo em Análise e Desenvolvimento de Sistemas
João Pedro Teixeira Justino- 1° Período

Prova 1
Questão 3 - Atendimento online de um loja de tintas
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Definição das variáveis que serão utilizadas
    float precoGalao = 0.0, precoLata = 0.0, areaTotal = 0.0, tinta = 0.0, precoLataFinal = 0.0, precoGalaoFinal = 0.0,
        precoMisto = 0.0;
    int totalLata = 0, totalGalao = 0, mistoLata = 0, mistoGalao = 0, resto = 0;

    // Cabeçalho de introdução para o usuário
    printf("--------------------------\n");
    printf("   CORACAO DE TINTA\n");
    printf("--------------------------\n");
    printf("- Atendimento online\n");
    printf("\n");

    // Informações iniciais sobre a lata e o galão de tinta
    printf("===============================\n");
    printf("Lata de tinta = 18 litros\n");
    printf("Galao de tinta = 3.6 litros\n");
    printf("===============================\n");
    printf("Qual e o preco da lata de tinta(R$): ");
    scanf("%f",&precoLata);
    printf("Qual e o preco do galao de tinta(R$): ");
    scanf("%f",&precoGalao);
    printf("\n");
    // Coleta dos valores dos preços da lata e do galão de tinta

    printf("Qual e a area total a ser pintada(m^2): ");
    scanf("%f",&areaTotal);
    // Coleta do tamanho da área total a ser pintada

    tinta = (1 * areaTotal)/ 6;
    // Calculo de quantos litros de tinta serão necessários para pintar a área informada

    printf("Voce ira precisar de %.2f litros de tinta\n", tinta);
    printf("\n");
    // Print mostrando para o usuário quantos litros de tinta ele irá precisar

    totalLata = ceil(tinta / 18); // O arredondamento para cima é para que em qualquer caso sobre tinta, e não falte
    precoLataFinal = (float)totalLata * precoLata; // (float) para prevenir possíveis erros com tipos diferentes
    // Calculo da primeira opção para saber quantas latas de tinta serão necessárias, e o valor final

    totalGalao = ceil(tinta/ 3.6);
    precoGalaoFinal = (float)totalGalao * precoGalao;
    // Calculo da segunda opção para saber quantos galões de tinta serão necessários, e o valor final

    // Calculo da terceira opção, onde as latas e galões são mistos
    mistoLata = ceil(tinta) / 18; // O arredondamento feito apenas da variável "tinta" é para que sejam apenas divisões inteiras
                                  // assim é possível descobrir quantas latas serão necessárias
    resto = (int)ceil(tinta) % 18; // (int) é para que seja possível realizar a operação "%"(módulo), para que seja possível
                                   // saber quantos litros de tinta restou para que seja feita s contas com galões
    mistoGalao = ceil(resto/ 3.6); // Conta com o que sobrou de tinta para descobrir quantos galões serão necessários
    precoMisto = ((float)mistoGalao * precoGalao) + ((float)mistoLata * precoLata); // Soma dos preços para obter o total misto

    // Prints para mostrar ao usuário as opções possíveis para sua compra
    printf("Opcao 1: Voce ira precisar de comprar %d lata(s) de tinta, resultando em R$ %.2f\n", totalLata, precoLataFinal);
    printf("Opcao 2: Voce ira precisar de comprar %d galao(oes) de tinta, resultando em R$ %.2f\n", totalGalao, precoGalaoFinal);
    printf("Opcao 3: Voce ira precisa de comprar %d lata(s) de tinta e %d galao(oes) de tinta, resultando em R$ %.2f\n",
           mistoLata, mistoGalao, precoMisto);

    return 0;
}
