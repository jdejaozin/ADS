#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Inicializacao das variaveis
    float a, b, c, d, r, r1, r2;

    // Cabecalho de introducao ao usuario
    printf("------- ROOTS -------\n");
    printf("Para calcular suas raizes use o modelo ax^2 + bx + c = 0\n");

    // Outputs indicando o que o usuario deve digitar
    printf("Insira o valor de a: \n");
    scanf("%f", &a); // Inputs recebendo os valores correspondentes a cada parte da equacao
    printf("Insira o valor de b: \n");
    scanf("%f", &b);
    printf("Insira o valor de c: \n");
    scanf("%f", &c);

    // Condicional para testar se o "a" da equacao e igual a 0
    if(a ==  0){
        //Condicional para testar se o "b" da equacao e igual a 0
        if(b == 0){

            // Caso seja True sera indicado ao usuario que nao e uma equacao
            printf("Os valores inseridos nao correspondem a uma equacao.\n");

        }else{

            // Caso seja False indica que e uma equacao de primeiro grau e continua a execucao do programa
            printf("Os valores inseridos correspondem a uma equacao de primeiro grau.\n");

            // Calculo da raiz da equacao de primeiro grau
            r = (c*-1) / b;

            // Condicional apenas para um incremento visual para o usuario
            if(c >= 0){

                // Print com o + para caso o "c" seja maior que 0
                printf("O valor da raiz da equacao %.2fx + %.2f = 0, e de R= %.2f\n", b, c, r);

            }else{

                // Print sem o + para caso o "c" seja menor que 0
                printf("O valor da raiz da equacao %.2fx %.2f = 0, e de R= %.2f\n", b, c, r);

            }
        }
    }else{

        // Indicacao ao usuario de que e uma equacao de segundo grau
        printf("Os valores inseridos correspondem a uma equacao de segundo grau\n");

        // Calculo do delta da equacao, funcao pow() da biblioteca math.h
        d = pow(b, 2) - 4.0 * a * c;

        // Condicionais para identificar qual sera a sequencia a ser executada
        if(d < 0){

            // Caso o delta seja negativo, printf com a indicacao de qual foi o resultado de delta
            printf("O delta da equacao e negativo D= %.2f, nao existem raizes reais para essa equacao\n", d);

        }else if(d == 0){

            // Caso o delta seja igual a 0 pode-se calcular apenas uma raiz, ja que as duas serao iguais
            r1 = ((b*-1) + sqrt(d)) / 2.0 * a;

            // Indicacao ao usuario de quanto foi o delta da equacao e sua raiz
            printf("O delta da equacao e igual a 0 D= %.2f, resultando em duas raizes iguais R= %.2f\n", d, r1);

        }else if(d > 0){

            // Caso o delta seja maior que 0 calcula-se as duas raizes, uma positiva e a outra negativa
            r1 = ((b*-1) + sqrt(d)) / 2.0 * a;
            r2 = ((b*-1) - sqrt(d)) / 2.0 * a;

            // Indicacao ao usuario de quanto foi o delta da equacao e suas raizes
            printf("O delta da equacao e maior que 0 D= %.2f, resultando em duas raizes diferentes R1= %.2f, R2= %.2f\n", d, r1, r2);
        }
    }
    return 0;
    
}
