#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Definicao das variaveis a serem utilizadas e seus tipos
    float peso = 0.0, altura = 0.0, IMC = 0.0, percentMulheres = 0.0, percentHomens = 0.0, percentMulheresObesas = 0.0,
        percentHomensObesos= 0.0;
    int sexo = 0, mulheres = 0, homens = 0, mulheresObesas = 0, homensObesos = 0;

    // Cabecalho de entrada
    printf("-------------------\n");
    printf("  IMC PARA IDOSOS\n");
    printf("-------------------\n");
    printf("AVISO: utilize apenas com maiores de 65 anos\n");
    printf("\n");

    // For onde estara a execução em loop da coleta de informações das pessoas
    for(int i = 1; i <= 100; i++){ // Foi usado o "i" iniciando em "1" para utiliza-lo nos prints indicando qual o número da pessoa atual
        printf("%d.o pessoa\n", i);
        printf("Altura(m): ");
        scanf("%f",&altura);
        printf("Peso(kg): ");
        scanf("%f",&peso);
        // Coleta de dados de peso e altura

        IMC = peso / (altura * altura);
        // Calculo do IMC

        printf("Sexo: [1] Feminino\n");
        printf("      [2] Masculino\n");
        scanf("%i",&sexo);
        // Indicacao de qual é o sexo da pessoa

        switch(sexo){ // Foi utilizado o switch case para fazer a distinção do IMC feminino e do masculino
            case 1: // Caso 1 para mulheres
                mulheres++; // Contador de mulheres para o calculo da porcentagem final

                // Cada if contem uma faixa do IMC feminino
                if(IMC <= 21.9){
                    printf("Voce esta abaixo do peso\n");
                    printf("\n");
                }
                else if(IMC >= 22.0 && IMC <= 27.0){
                    printf("Voce esta com peso normal\n");
                    printf("\n");
                }
                else if(IMC >= 27.1 && IMC <= 32.0){
                    printf("Voce esta com sobrepeso\n");
                    printf("\n");
                }
                else if(IMC >= 32.1 && IMC <= 37.0){
                    printf("Voce esta com obesidade grau I\n");
                    printf("\n");
                    mulheresObesas++; // Contador das mulheres obesas para que seja feita a porcentagem final
                }
                else if(IMC >= 37.1 && IMC <= 41.9){
                    printf("Voce esta com obesidade grau II(severa)\n");
                    printf("\n");
                    mulheresObesas++;
                }
                else if(IMC >= 42){
                    printf("Voce esta com obesidade grau III(morbida)\n");
                    printf("\n");
                    mulheresObesas++;
                }
                break;

            case 2: // Caso 2 para homens
                homens++; // Contador de homens para o calculo da porcentagem final

                // Cada if contem uma faixa do IMC masculino
                if(IMC <= 21.9){
                    printf("Voce esta abaixo do peso\n");
                    printf("\n");
                }
                else if(IMC >= 22.0 && IMC <= 27.0){
                    printf("Voce esta com peso normal\n");
                    printf("\n");
                }
                else if(IMC >= 27.1 && IMC <= 30.0){
                    printf("Voce esta com sobrepeso\n");
                    printf("\n");
                }
                else if(IMC >= 30.1 && IMC <= 35.0){
                    printf("Voce esta com obesidade grau I\n");
                    printf("\n");
                    homensObesos++; // Contador dos homens obesos para que seja feita a porcentagem final
                }
                else if(IMC >= 35.1 && IMC <= 39.9){
                    printf("Voce esta com obesidade grau II(severa)\n");
                    printf("\n");
                    homensObesos++;
                }
                else if(IMC >= 40){
                    printf("Voce esta com obesidade grau III(morbida)\n");
                    printf("\n");
                    homensObesos++;
                }
                break;

            default: // Default para prevenir erros na hora de indicar o sexo
                printf("Insira um numero valido\n");
                i--; // Decrescimo da variavel "i" para que os erros não sejam contados
        }
    }

    // Calculos dos percentuais finais, o (float) foi utilizado para transformar as variaveis int em float, para que nao ocorra
    // erros nos calculos
    percentMulheres = (100 * (float)mulheres)/ 100;
    percentHomens = (100 * (float)homens)/ 100;
    percentMulheresObesas = (100 * (float)mulheresObesas)/ (float)mulheres;
    percentHomensObesos = (100 * (float)homensObesos)/ (float)homens;

    // Print indicando para o usuario as informacoes coletadas
    printf("O percentual de mulheres idosas que calcularam o IMC foi de %.2f%%, dentre esse total %.2f%% estao obesas.\n",
           percentMulheres, percentMulheresObesas);
    printf("O percentual de homens idosos que calcularam o IMC foi de %.2f%%, dentre esse total %.2f%% estao obesos.\n",
           percentHomens, percentHomensObesos);

    // Mensagem final cordial
    printf("Obrigado por utilizar o programa!");

    return 0;
}
