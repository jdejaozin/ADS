/*
Instituto Federal do Triângulo Mineiro- IFTM
Algoritmos e Linguagem de Programação- Profa. Daniela Resende
Tecnólogo em Análise e Desenvolvimento de Sistemas
João Pedro Teixeira Justino- 1° Período

Prova 2
Questão 1 - Calculo de desvio padrão
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Inicializacao das variaveis que serao utilizadas no decorrer do programa
    int quantNumeros = 0, mostrador = 1;
    float arrayNumeros [100], medAritimetica = 0, somatoria = 0, desvioPadrao;

    // Cabecalho de introducao
    printf("----------------------\n");
    printf("    DESVIO PADRAO\n");
    printf("----------------------\n");

    // printf enviando a mensagem para o usuario perguntando quantos numeros terao o seu calculo de desvio padrao
    printf("Deseja calcular o desvio padrao de quantos numeros?(max 100) ");
    scanf("%i", &quantNumeros);
    // Primeira entrada de dados recebendo a quantidade de numeros do usuario

    // Laco de repeticao for para coletar os numeros e posicionar dentro do array
    for (int i = 0; i < quantNumeros; i++){
        printf("\nInsira o numero %d -> ", mostrador);
        // A variavel "mostrador" ja foi iniciada com o valor 1 para poder apresentar a posicao inicial correta
        scanf("%f", &arrayNumeros[i]);
        // Coleta dos numeros que serao utilizados no calculo, a cada novo for a variavel "i" sera incrementada
        // apresentando um novo indice para o vetor
        mostrador++;
        // Incremento do "mostrador" para que a sequencia de numeros seja apresentada identificando ao usuario
        // qual numero deve fornecer
    }

    // Laco de repeticao para que seja calculada a soma dos numeros para a media aritimetica da funcao
    for (int i = 0; i < quantNumeros; i++){
        medAritimetica += arrayNumeros[i];
        // A variavel "medAritimetica" foi inicializada com 0, entao pode ser feita a somatoria inicial sem que haja problemas
    }
    medAritimetica = medAritimetica / quantNumeros;
    // Nova atribuicao para a variavel "medAritimetica" recebendo o seu valor divido pela quantidade de numeros informados
    // assim obtendo finalmente o valor real da media

    // Laco for para que seja feita a somatoria
    for (int i = 0; i < quantNumeros; i++){
        somatoria += pow((arrayNumeros[i] - medAritimetica), 2);
        // Variavel "somatoria" tambem inicializada com 0 para que não aconteca problemas na soma dos valores
        // Foi utilizada a funcao "pow()" da biblioteca "math.h" para a realizacao da potenciacao da subtracao dos
        // numeros pela media
    }
    desvioPadrao = sqrt(somatoria / quantNumeros);
    // Calculo final do desvio padrao, foi utilizada a funcao "sqrt()", tambem da biblioteca "math.h" para o calculo
    // da raiz quadrada da somatoria dividida pela quantidade de numeros informados

    printf("\n----------------------------------\n");
    printf("O seu desvio padrao e de %f\n", desvioPadrao);
    // Output para informar ao usuario qual foi o valor final do calculo do desvio padrao
    printf("Obrigado por utilizar o calculador de Desvio Padrao!\n");
    // Mensagem final cordial
    printf("----------------------------------");

    return 0;
}
