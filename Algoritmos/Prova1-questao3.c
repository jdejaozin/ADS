#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Definicao das variaveis que serao utilizadas
    float precoGalao = 0.0, precoLata = 0.0, areaTotal = 0.0, tinta = 0.0, precoLataFinal = 0.0, precoGalaoFinal = 0.0,
        precoMisto = 0.0;
    int totalLata = 0, totalGalao = 0, mistoLata = 0, mistoGalao = 0, resto = 0;

    // Cabeçalho de introducao para o usuario
    printf("--------------------------\n");
    printf("   CORACAO DE TINTA\n");
    printf("--------------------------\n");
    printf("- Atendimento online\n");
    printf("\n");

    // Informacoes iniciais sobre a lata e o galao de tinta
    printf("===============================\n");
    printf("Lata de tinta = 18 litros\n");
    printf("Galao de tinta = 3.6 litros\n");
    printf("===============================\n");
    printf("Qual e o preco da lata de tinta(R$): ");
    scanf("%f",&precoLata);
    printf("Qual e o preco do galao de tinta(R$): ");
    scanf("%f",&precoGalao);
    printf("\n");
    // Coleta dos valores dos preços da lata e do galao de tinta

    printf("Qual e a area total a ser pintada(m^2): ");
    scanf("%f",&areaTotal);
    // Coleta do tamanho da area total a ser pintada

    tinta = (1 * areaTotal)/ 6;
    // Calculo de quantos litros de tinta serao necessarios para pintar a area informada

    printf("Voce ira precisar de %.2f litros de tinta\n", tinta);
    printf("\n");
    // Print mostrando para o usuario quantos litros de tinta ele ira precisar

    totalLata = ceil(tinta / 18); // O arredondamento para cima e para que em qualquer caso sobre tinta, e nao falte
    precoLataFinal = (float)totalLata * precoLata; // (float) para prevenir possiveis erros com tipos diferentes
    // Calculo da primeira opcao para saber quantas latas de tinta serao necessarias, e o valor final

    totalGalao = ceil(tinta/ 3.6);
    precoGalaoFinal = (float)totalGalao * precoGalao;
    // Calculo da segunda opcao para saber quantos galoes de tinta serao necessarios, e o valor final

    // Calculo da terceira opcao, onde as latas e galoes sao mistos
    mistoLata = ceil(tinta) / 18; // O arredondamento feito apenas da variavel "tinta" e para que sejam apenas divisoes inteiras
                                  // assim e possivel descobrir quantas latas serao necessarias
    resto = (int)ceil(tinta) % 18; // (int) e para que seja possivel realizar a operacao "%"(modulo), para que seja possivel
                                   // saber quantos litros de tinta restou para que seja feita as contas com galoes
    mistoGalao = ceil(resto/ 3.6); // Conta com o que sobrou de tinta para descobrir quantos galoes serao necessarios
    precoMisto = ((float)mistoGalao * precoGalao) + ((float)mistoLata * precoLata); // Soma dos precos para obter o total misto

    // Prints para mostrar ao usuario as opcoes possiveis para sua compra
    printf("Opcao 1: Voce ira precisar de comprar %d lata(s) de tinta, resultando em R$ %.2f\n", totalLata, precoLataFinal);
    printf("Opcao 2: Voce ira precisar de comprar %d galao(oes) de tinta, resultando em R$ %.2f\n", totalGalao, precoGalaoFinal);
    printf("Opcao 3: Voce ira precisa de comprar %d lata(s) de tinta e %d galao(oes) de tinta, resultando em R$ %.2f\n",
           mistoLata, mistoGalao, precoMisto);

    return 0;
}

