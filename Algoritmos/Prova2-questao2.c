#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Declaração das variaveis que serão utilizadas
    int autoFill;
    float vetorHoraTemp[23], novaEntrada = 1, somaTemperatura = 0, mediaTemperatura= 0;

    // Cabecalho de apresentacao do programa
    printf("-----------------------------\n");
    printf("   MONITORAMENTO 1000grau\n");
    printf(" Qual sera a maxima de hoje?\n");
    printf("-----------------------------\n");

    // Laco for para criacao de valores iniciais aleatorios
    for (int i = 0; i < 24; i++){
        autoFill = rand() % 40;
        // Utilizando a funcao "rand()" para criar numeros aleatorios
        vetorHoraTemp[i] = autoFill;
        // Vetor recebendo os valores de acordo com o indice "i"
    }

    // Laco de repeticao while para executar sequencialmente o bloco de codigo
    // a condicao para que o laco sera interrompido e que o valor digita seja negativo
    while(novaEntrada > 0){
        // Output de indicacao de como terminar o laco de repeticao
        printf("*Para parar a execucao digite um valor negativo*\n");
        printf("Insira o valor atual da temperatura:(C) ");
        scanf("%f", &novaEntrada);
        // Recebendo o input da nova entrada correspondente a temperatura

        // Condicional criado para que nao ocorra erros quando um numero negativo for digitado
        // apenas se o numero digita for positivo os codigos a seguir serao executados
        if (novaEntrada > 0){
            for (int i = 0; i < 24; i++){
                vetorHoraTemp[i] = vetorHoraTemp[i+1];
                // Troca de valores dentro do vetor, para que o primeiro valor seja descartado
            }
            vetorHoraTemp[23] = novaEntrada;
            // Vetor recebendo o valor que foi digitado pelo usuario e sendo colocado na ultima posicao
            // do vetor
        }
    };

    // Laco for para ser feita a soma das ultimas 12 temperaturas lidas
    for (int i = 12; i < 24; i++){
        somaTemperatura += vetorHoraTemp[i];
        // Variavel "somaTemperatura" recebendo a soma dos ultimos 12 valores do vetor
    }
    mediaTemperatura = somaTemperatura / 12;
    // Variavel mediaTemperatura recebendo a divisao da vairial "somaTemperatura" por 12, para que
    // seja obtida a real media dos valores
    printf("\n----------------------------------------\n");
    printf("A media das temperaturas correspondente as ulimas 12 horas e de %.2f C\n", mediaTemperatura);
    // Output para mostrar ao usuario qual foi a media calculada
    printf("Obrigado por utilizar o MONITORAMENTO 1000grau!");
    // Mensagem final cordial

    return 0;
}
