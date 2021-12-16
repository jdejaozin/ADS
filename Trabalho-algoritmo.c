/*
Instituto Federal do Triângulo Mineiro- IFTM
Algoritmos e Linguagem de Programação- Profa. Daniela Resende
Tecnólogo em Análise e Desenvolvimento de Sistemas
João Pedro Teixeira Justino- 1° Período

Trabalho Prático - Perfil IFTM
*/

#include <stdio.h>
#include <stdlib.h>

// Definicao das variáveis no escopo global do programa, serao as variaveis que serao utilizadas globalmente
int codigo[30], idade[30], media_notas[30], disciplina_favorita[30], perfil = 0;
char nome[30][40], sexo[30], estado_civil[30], profissao[30];
// No nome tambem pode ser utilizado um ponteiro para alocar 30 nomes com o máximo de 40 caracter
// ou utilizar o modelo matriz para realizar tal acao

// Funcao para inicilar perfis
void inicializaPerfis ()
{

}

// Funcao para receber as entradas do usuario
void recebePerfis()
{

    // A variavel perfil e a variavel que indica quantos perfis ja existem
    if(perfil <30){

        // Outputs indicando ao usuario qual informacao ele deve inserir
        // Inputs para receber as informacoes do usuario
        printf("--------- PERFIL IFTM ---------\n");
        printf("\n");
        printf("Entre com o codigo do aluno %d: \n", perfil +1); // Adicionando 1 na variavel perfil para melhorar
        // fflush para limpar o buffer do teclado
        fflush(stdin);                                           // a experiencia do usuario
        scanf("%d", &codigo[perfil]); // Variavel de codigo do aluno
        printf("Entre com o nome do aluno %d: \n", perfil +1);
        fflush(stdin);
        scanf("%s", nome[perfil]); // Variavel de nome do aluno
        printf("Entre com a idade do aluno %d: \n", perfil +1);
        fflush(stdin);
        scanf("%d", &idade[perfil]); // Variavel de idade do aluno
        printf("Entre com o sexo do aluno %d: (f - Feminino | m - Masculino)\n", perfil +1);
        fflush(stdin);
        scanf("%c", &sexo[perfil]); // Variavel de sexo do aluno
        printf("Entre com o estado civil do aluno %d: (s - Solteiro | c - Casado | n - Namorando | d - Divorciado\n", perfil +1);
        fflush(stdin);
        scanf("%c", &estado_civil[perfil]); // Variavel de estado civil do aluno
        printf("Entre com a profissao do aluno %d: (d - Desempregado | i - Trabalha com informatica | o - outros)\n", perfil +1);
        fflush(stdin);
        scanf("%c", &profissao[perfil]); // Variavel de profissao do aluno
        printf("Entre com a media das notas do aluno %d: \n", perfil +1);
        fflush(stdin);
        scanf("%d", &media_notas[perfil]); // Variavel de media das notas do aluno
        printf("Entre com disciplina favorita do aluno %d: (1 - Algoritmos | 2 - Engenharia de Software | 3 - Sistemas de Informacao |"
               " 4 - Banco de Dados | 5 - Programacao WEB | 6 - Matematica)\n", perfil +1);
        fflush(stdin);
        scanf("%d", &disciplina_favorita[perfil]); // Variavel de disciplina favorita do aluno

        perfil++; // Acrescimo a variavel perfil para fazer a contagem de quantos já foram criados

    // Condicao para caso atinja o maximo de 30 perfis
    }else if(perfil == 30){
        printf("Não é possível adicionar mais perfis");
    }

}

// Funcao para calcular a quantidade de pessoas com o estado civil indicado, a funcao esta recebendo como parametro o estado civil
int qtdeEstadoCivilPerfis(estadoCivil)
{
    // Variavel para a contagem de pessoas com o estado civil selecionado
    int contagemEstadoCivil = 0;

    // Laco for para correr os itens dentro do vetor "estado_civil" procurando os valores iguais ao indicado pelo usuario
    for(int i = 0; i < 30; i++){
        if(estadoCivil == estado_civil[i]){
            contagemEstadoCivil += 1; // Acrescimo a variavel contadora toda vez que encontrar um valor igual ao indicado
        }
    }

    // Retorno do total de alunos com o estado civil indicado
    return contagemEstadoCivil;
}

// Funcao para calcular a quantidade de pessoas com a profissao indicada, a funcao esta recebendo como parametro a profissao
int qtdeProfissaoPerfis(profissaoEscolhida)
{
    // Variavel para a contagem de pessoas com a profissao selecionada
    int contagemProfissao;

    // Laco for para correr os itens dentro do vetor "profissao" procurando os valores iguais ao indicado pelo usuario
    for(int i = 0; i < 30; i++){
        if(profissaoEscolhida == profissao[i]){
            contagemProfissao += 1; // Acrescimo a variavel contadora toda vez que encontrar um valor igual ao indicado
        }
    }

    // Retorno do total de alunos com a profissao indicada
    return contagemProfissao;

}

// Funcao para calcular a media de pessoas com o sexo indicado, a funcao esta recebendo como parametro o sexo indicado
float mediaIdadePerfis(sexoIdade)
{
    // Inicializacao das variaveis do escopo da funcao
    int somaTotal = 0, quantidade = 0;
    float media = 0;

    // Laco for para correr os itens dentro do vetor "sexo" procurando os valores iguais ao indicado pelo usuario
    for(int i = 0; i< 30; i++){
        // Condicao para encontrar os alunos com o sexo indicado
        if(sexoIdade == sexo[i]){
            somaTotal += idade[i]; // Variavel "somaTotal" recebendo a soma das idades do vetor "idade"
            quantidade += 1;
            // Variavel "quantidade" para fazer a contagem de quantas pessoas tem o sexo informado para realizar a media final
        }
    }

    // Calculo da media final das idades
    media = (float)somaTotal / (float)quantidade;

    // Retorno da media final das idades
    return media;

}

// Funcao para selecionar o perfil com a melhor media
void perfilMelhorMediaNotas()
{
    // Inicializacao das variaveis do escopo da funcao
    int mMFinal, maiorMedia = 0;

    // Laco for para percorrer o vetor das medias para achar a maior
    for(int i = 0; i < 30; i++){
        // Condicional para que quando o valor do vetor for maior que o valor da variavel "maiorMedia"
        if(maiorMedia < media_notas[i]){
            maiorMedia = media_notas[i]; // Caso a nota do vetor for maior, "maiorMedia" recebe o valor que esta no vetor
            mMFinal = i; // Variavel "mMFinal" recebendo o indice que corresponde aos vetores correlacionados com a maior media
        }
    }

    // Output do perfil do aluno com a maior media
    printf("--- ALUNO COM A MAIOR NOTA ---\n");
    printf(" Codigo do aluno - %d\n Nome do aluno - %s\n Idade do aluno - %d\n Sexo do aluno %c\n Estado civil do aluno - %c\n"
           " profissao do aluno - %c\n Media das notas do aluno - %d\n Disciplina favorita do aluno - %d\n",
           codigo[mMFinal], nome[mMFinal], idade[mMFinal], sexo[mMFinal], estado_civil[mMFinal], profissao[mMFinal],
           media_notas[mMFinal], disciplina_favorita[mMFinal]);
}

// Funcao para selecionar o perfil com a pior media
void perfilPiorMediaNotas()
{
    // Inicializacao das variaveis do escopo da funcao
    int menorMFinal = 0, menorMedia;

    // Variavel "menorMedia" recebendo o primeiro valor do vetor "media_notas" para que o condicional funcione corretamente
    menorMedia = media_notas[0];

    // Laco for para percorrer o vetor das medias para achar a menor
    for(int i = 0; i < perfil; i++){
        // Condicional para verificar se a variavel "menorMedia" é maior que o valor do vetor
        if(menorMedia > media_notas[i]){
            menorMedia = media_notas[i]; // Caso o valor do vetor seja menor o variavel "menorMedia" recebe o valor do vetor
            menorMFinal = i; // Variavel "menorMFinal" recebendo o indice que corresponde aos vetores correlacionados com a menor media
        }
    }

    // Output do perfil do aluno com a pior media
    printf("--- ALUNO COM A MENOR NOTA ---\n");
    printf(" Codigo do aluno - %d\n Nome do aluno - %s\n Idade do aluno - %d\n Sexo do aluno %c\n Estado civil do aluno - %c\n"
           " profissao do aluno - %c\n Media das notas do aluno - %d\n Disciplina favorita do aluno - %d\n",
           codigo[menorMFinal], nome[menorMFinal], idade[menorMFinal], sexo[menorMFinal], estado_civil[menorMFinal],
           profissao[menorMFinal], media_notas[menorMFinal], disciplina_favorita[menorMFinal]);
}

// Funcao para mostrar todos os perfis cadastrados
void mostrarPerfis()
{
    // Laco for para percorrer todos os vetores
    for(int i = 0; i < perfil; i++){
        // Output de todos os perfis cadastrados pelo usuario
        printf("--- PERFIL IFTM ---\n");
        printf(" Codigo do aluno - %d\n Nome do aluno - %s\n Idade do aluno - %d\n Sexo do aluno %c\n Estado civil do aluno - %c\n"
               " profissao do aluno - %c\n Media das notas do aluno - %d\n Disciplina favorita do aluno - %d\n",
               codigo[i], nome[i], idade[i], sexo[i], estado_civil[i], profissao[i], media_notas[i], disciplina_favorita[i]);
    }
}

// Funcao principal do programa
int main()
{
    // Inicializacao das variaveis do escopo da funcao
    int opcao;
    char opcaoEstadoCivil, opcaoProfissao, sexoIdade;

    // Laco while com condição de parada quando o usuario digitar 7
    while(opcao != 7){

        // Output do menu do programa
        printf("--------- PERFIL IFTM ---------\n");
        printf("\n");
        printf("[0] Adicionar o perfil de um aluno na rede\n");
        printf("[1] Quantidade de alunos (filtro - estado civil)\n");
        printf("[2] Quantidade de alunos (filtro - profissao)\n");
        printf("[3] Media de idade (filtro - sexo)\n");
        printf("[4] Perfil do aluno com melhor media em todas as disciplinas\n");
        printf("[5] Perfil do aluno com pior media em todas as disciplinas\n");
        printf("[6] Mostrar todos os perfis cadastrados\n");
        printf("[7] Sair\n");
        fflush(stdin);
        scanf("%d", &opcao); // Variavel recebendo a opcao digitada pelo usuario

        // switch case pegando a varival "opcao" como referencia
        switch(opcao){
            case 0:

                // Caso 0 chama a funcao "recebePerfis"
                recebePerfis();
                break;

            case 1:

                // Caso 1 pergunta qual sera o estado civil
                printf("Deseja filtrar por qual estado civil? (s - solteiro | c - casado | n - namorando | d - divorciado)\n");
                fflush(stdin);
                scanf("%c", &opcaoEstadoCivil); // Variavel recebendo o estado civil indicado pelo usuario

                // Output que chama a funcao "qtdeEstadoCivilPerfis", que recebe o estado civil como parametro
                printf("O total de alunos com o estado civil escolhido e de %d\n", qtdeEstadoCivilPerfis(opcaoEstadoCivil));
                break;

            case 2:

                // Caso 2 pergunta qual sera a profissao
                printf("Deseja filtrar por qual profissao? (d - desempregado | i - trabalha com informatica | o - outros) \n");
                fflush(stdin);
                scanf("%c", &opcaoProfissao); // Variavel recebendo a profissao indicada pelo usuario

                // Output que chama a funcao "qtdeProfissaoPerfis", que recebe a profissao como parametro
                printf("O total de alunos com a profissao escolhida e de %d\n", qtdeProfissaoPerfis(opcaoProfissao));
                break;

            case 3:

                // Caso 3 pergunta qual sera o sexo
                printf("Deseja mostrar a media de idade de qual sexo? (f - feminino | m - masculino)\n");
                fflush(stdin);
                scanf("%c", &sexoIdade); // Variavel recebendo o sexo indicado pelo usuario

                // Output que chama a funcao "mediaIdadePerfis", que recebe o sexo como parametro
                printf("A media das idades do sexo escolhido e de %.2f\n", mediaIdadePerfis(sexoIdade));
                break;

            case 4:

                // Caso 4 faz a chamada da funcao "perfilMelhorMediaNotas"
                perfilMelhorMediaNotas();
                break;

            case 5:

                // Caso 5 faz a chamada da funcao "perfilPiorMediaNotas"
                perfilPiorMediaNotas();
                break;


            case 6:

                // Caso 6 faz a chamada da funcao "mostrarPerfis"
                mostrarPerfis();
                break;

            case 7:

                // Caso 7 envia mensagem de finzalicao do programa
                printf("Ate a proxima!");
                break;

            default:

                // Caso algum dos valores do menu nao seja digitado
                printf("Insira um valor valido\n");
                break;

        }
    }

    return 0;

}
