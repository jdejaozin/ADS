#include <stdio.h>
#include <stdlib.h>

// Funcao para calcular o valor bruto das apolices de seguro, recebendo como argumento o valor do automovel e o codigo
// referente ao banco
int valorBrutoApolice(valorAutomovel, banco)
{
    // Inicializacao das variaveis
    int seguradoraI, seguradoraB;

    // Condicional para idfentificar qual banco, "i" - Itau, "b" - Bradesco
    if (banco == "i"){

        // Variavel recebendo o valor bruto da apolice do Itau
        seguradoraI = valorAutomovel * ((float)4 / 100);

        // Retorno do valo bruto final
        return seguradoraI;
    }else if (banco == "b"){

        // Variavel recebendo o valor bruto da apolice do Bradesco
        seguradoraB = valorAutomovel * ((float)6/100);

        // Retorno do valo bruto final
        return seguradoraB;
    }
}

// Funcao para calcular o valor da apolice liquida do banco Itau, recebendo como argumento o valor da apolice bruta e a idade
int apoliceLiquidaItau(apoliceBrutoI, idade){

    // Inicializacao das variaveis
    int porcentagemAcrescimo, porcentagemDesconto, valorAcrescimo, valorDesconto, apoliceLiquidoI;

    // Condicional para testar a idade do usuario
    if(idade < 30){

        // Variavel recebendo a diferenca de idade para ser calculada a porcentagem de acrescimo
        porcentagemAcrescimo = 30 - idade;

        // Variavel recebendo o valor do acrescimo que sera feito
        valorAcrescimo = apoliceBrutoI * ((float)porcentagemAcrescimo/100);

        // Variavel recebendo o valor final liquido da apolice
        apoliceLiquidoI = apoliceBrutoI + valorAcrescimo;

        // Retorno do valor da apolice liquida
        return apoliceLiquidoI;
    }else if(idade > 50){

        // Variavel recebendo a diferenca de idade para ser calculada a porcentagem de desconto
        porcentagemDesconto = idade - 50;
        // Laco para que caso a diferenca de idade seja maior que 15, o valor do desconto continue sendo 15%
        if(porcentagemDesconto > 15){

            // Variavel recebendo o valor do desconto que sera feito
            valorDesconto = apoliceBrutoI * ((float)15/100);

            // Variavel recebendo o valor final liquido da apolice
            apoliceLiquidoI = apoliceBrutoI - valorDesconto;

            // Retorno do valor da apolice liquida
            return apoliceLiquidoI;
        }else{

            // Variavel recebendo o valor do desconto que sera feito
            valorDesconto = apoliceBrutoI * ((float)porcentagemDesconto/100);

            // Variavel recebendo o valor final liquido da apolice
            apoliceLiquidoI = apoliceBrutoI - valorDesconto;

            // Retorno do valor da apolice liquida
            return apoliceLiquidoI;
        }
    }
}

// Funcao para calcular o valor da apolice liquida do banco Bradesco, recebendo como argumento
// o valor da apolice bruta, sexo e a idade
int apoliceLiquidaBradesco(apoliceBrutoB, sexo, idade){

    // Inicializacao das variaveis
    int porcentagemDesconto, valorDesconto, valorLiquidoB;

    // Condicao para identificar o sexo feminino
    if(sexo == 1){

        // Porcentagem inicial de desconto para mulheres
        porcentagemDesconto = 5;
        //Condicional para a idade
        if(idade >= 30){

            // Adicao dos 10% de desconto
            porcentagemDesconto += 10;

            // Variavel recebendo o valor do desconto que sera feito
            valorDesconto = apoliceBrutoB * ((float)porcentagemDesconto/100);

            // Variavel recebendo o valor final liquido da apolice
            valorLiquidoB = apoliceBrutoB - valorDesconto;

            // Retorno do valor da apolice liquida
            return valorLiquidoB;
        }else{

            // Variavel recebendo o valor do desconto que sera feito
            valorDesconto = apoliceBrutoB * ((float)porcentagemDesconto/100);

            // Variavel recebendo o valor final liquido da apolice
            valorLiquidoB = apoliceBrutoB - valorDesconto;

            // Retorno do valor da apolice liquida
            return valorLiquidoB;
        }
    }
}

int main()
{

    // Inicializacao das variaveis
    int sexo, idade, valorAutomovel, apoliceBrutaI, apoliceBrutaB, apoliceLiquidaI, apoliceLiquidaB;

    // Laco de repeticao para a execucao do programa, com a condicao de parada
    while(sexo != 3){

        // Cabecalho
        printf("-------------- MARCELINHO SEGUROS --------------\n");
        printf("    Assegurando a seguranca do seu carro\n");
        printf("\n");

        // Output indicando a condicao de parada e a primeira entrada do usuario
        printf("Para fechar o programa informe um valor de sexo invalido\n");
        printf("Insira o sexo do cliente: (1- Feminino | 2- Masculino)\n");
        scanf("%d", &sexo);
        // Input recebendo o sexo

        // Condicional para que o programa pare imediatamente caso a condicao de parada seja ativada
        if(sexo == 3){

        }else{
            // Output e input dos valores restantes
            printf("Insira a idade do cliente: \n");
            scanf("%d", &idade);
            printf("Insira o valor do automovel: \n");
            scanf("%d", &valorAutomovel);

            // Variaveis recebendo os valores retornados pela funcao "valorBrutoApolice()" que estao recebedo os
            // argumentos de valor do automovel e o identificador do banco
            apoliceBrutaI = valorBrutoApolice(valorAutomovel, "i");
            apoliceBrutaB = valorBrutoApolice(valorAutomovel, "b");

            // Variaveis recebendo os valores retornados pelas funcoes de calculos de apolice liquida
            apoliceLiquidaI = apoliceLiquidaItau(apoliceBrutaI, idade);
            apoliceLiquidaB = apoliceLiquidaBradesco(apoliceBrutaB, sexo, idade);

            // Condicional para identificar qual apolice sera a melhor para o cliente
            if(apoliceLiquidaI > apoliceLiquidaB){

                // Outputs indicando os valores finais
                printf("Os valores das apolices liquidas foram de Itau= R$%d e Bradesco= R$%d\n",  apoliceLiquidaI, apoliceLiquidaB);
                printf("Sendo assim o valor mais viavel para o cliente e do banco Bradesco, R$%d\n", apoliceLiquidaB);
            }else{

                // Outputs indicando os valores finais
                printf("Os valores das apolices liquidas foram de Itau= R$%d e Bradesco= R$%d\n",  apoliceLiquidaI, apoliceLiquidaB);
                printf("Sendo assim o valor mais viavel para o cliente e do banco Itau, R$%d\n", apoliceLiquidaI);
            }
        }
    }

    return 0;
}
