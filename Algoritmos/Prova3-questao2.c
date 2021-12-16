/*
Instituto Federal do Triângulo Mineiro- IFTM
Algoritmos e Linguagem de Programação- Profa. Daniela Resende
Tecnólogo em Análise e Desenvolvimento de Sistemas
João Pedro Teixeira Justino- 1° Período

Prova 3
Questão 2 - Resultado da loteria
*/
#include <stdio.h>
#include <stdlib.h>

// Funcao para receber o numeros sorteados
int funcNumerosSorteados ()
{
    // Inicializacao das variaveis, vetor sendo declarado com ponteiros
    int x = 20;
    int *numerosSorteados = malloc(x * sizeof(int));

    // Laco de repeticao para receber os 20 numeros sorteados
    for (int i = 0; i < 20; i++){
        // Input dos numeros digitados pelo usuario
        scanf("%d", &numerosSorteados[i]);
    }

    // Retorno do vetor
    return numerosSorteados;
}

// Funcao para criacao das matrizes dos cartoes de apostas, recebendo a quantidade de cartoes e o array de sorteados como argumento
int matrizApostas(int quantCartoes, int *sorteados)
{

    // Inicializacao das variaveis, matriz sendo criada com ponteiros
    int y = 20;
    int **numerosApostados = malloc(quantCartoes * sizeof(int));

    // Laco de repeticao para que sejam criadas as matrizes de acordo com o total de cartoes inseridos
    for(int i = 0; i < quantCartoes; i++){
        numerosApostados[i] = malloc(y * (sizeof(int)));
    }

    // Laco de repeticao para que sejam inseridos os valores de cada cartao
    for(int i = 0; i < quantCartoes; i++){

        // Output indicando para inserir os numeros e qual o identificador do cartao
        printf("Entre com os numeros apostados no cartao com identificado %d: ", i);
        // Laco de repeticao para receber os 20 numeros selecionados do apostador
        for(int j = 0; j < 20; j++){
            scanf("%d", &numerosApostados[i][j]);
        }
    }

    // Chamada da funcao cartoesVencedores() para que seja feita a comparacao imediatamente apos os cartoes serem inseridos
    cartoesVencedores(quantCartoes, sorteados, numerosApostados, y);
}

// Funcao para comparar os cartoes com os numeros sorteados, recebendo a quantidade de cartoes, array dos sorteados
// e os valores referentes as matrizes como argumento
int cartoesVencedores(int quantCartoes, int *numSorteados, int **numerosApostados, int y)
{

    // Inicializacao das variaveis contadotas
    int cont = 0, ganhadores = 0;

    // Output para mostrar os cartoes ganhadores
    printf("Os cartoes ganhadores foram = ");
    // Laco de repeticao para comparar o vetor dos numeros sorteados e a matriz dos jogos feitos
    for(int i = 0; i < quantCartoes; i++){
        for(int j = 0; j < 20; j++){
            // Condicional para encontrar os numeros iguais
            if(numSorteados[j] == numerosApostados[i][j]){
                // Variavel contadora para somar quantos acertos foram
                cont += 1;
                // Condicional para caso o numero de acertos sejam 20 (significando que acertou todos os numeros)
                if(cont == 20){
                    // Output do identificador do cartao ganhador
                    printf("%d ", i);
                    // Variavel contadora para saber quantos foram os ganhadores
                    ganhadores++;
                }
            }
        }
        // Variavel contadora sendo zerada para um novo laco
        cont = 0;
    }

    // Retornando a variavel ganhadores
    return ganhadores;

}

// Funcao para mostrar qual foi o valor recebido pelo ganhador(es), recebendo os vencedores e o valor do premio como argumento
void valorRateado(vencedores, premio)
{
    // Inicializacao das variaveis
    int premioRateado;

    // Condicional para verificar se houve ganhadores
    if(vencedores == 0){
        // Output indicando que o premio acumulou
        printf("\nO premio acumulou\n");
    }else{
        // Calculo para dividir o premio entre os ganhadores
        premioRateado = premio / vencedores;

        // Output do valor da premiacao rateada
        printf("\nValor rateado do premio = %d", premioRateado);
    }
}

int main()
{

    // Inicializacao das variaveis
    int valorPremio, quantCartoes, vencedores;

    // Output e input das informacoes necessarias
    printf("Entre com o valor do premio: ");
    scanf("%d", &valorPremio);
    printf("Entre com os numeros sorteados: ");
    // Array sendo declarado como ponteiros e recebendo o array dos numeros sorteados
    int* arraySorteados = funcNumerosSorteados();
    printf("Entre com a quantidade de cartoes: ");
    scanf("%d", &quantCartoes);
    // Variavel vencedores chamando a funcao matrizApostas() para que ela receba o retorno da funcao cartoesVencedores()
    // que por sua vez esta dentro da funcao matrizApostas()
    vencedores = matrizApostas(quantCartoes, arraySorteados);
    // Funcao valorRateado() sendo chamada e recebendo como argumento a variavel "vencedores" e a variavel que carrega
    // o valor do premio
    valorRateado(vencedores, valorPremio);

    return 0;
}
