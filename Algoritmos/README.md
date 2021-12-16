# Algoritmos
Provas e trabalhos da materia de algoritmos do primeiro período de ADS.<br>
<br>
A professora Daniela optou por ensinar lógica de programação em C pois no mês de agosto (2021), C estava em primeiro lugar no indice TIOBE, atualmente (novembro 2021) Python está em primeiro lugar.
<br>
De qualquer modo temos que reconhecer que C chegou quando aqui era tudo mato e asfaltou todo nosso trajeto até aqui.<br>
<br>
<strong>Prova1-questao1.c</strong><br>
Primeira questão da primeira prova de algoritmos. A proposta era criar um programa para calcular raizes de equações.<br>
<br>
<strong>Prova1-questao2.c</strong><br>
Segunda questão da primeira prova de algoritmos. A proposta era criar um programa para calcular IMC de 100 idosos e mostrar sua classificação de acordo com o IMC, o percentual de mulheres e de homens informados, o percentual de mulheres e homens, separadamente, nas faixas de obesidade.<br>
<br>
<strong>Prova1-questao3.c</strong><br>
Terceira questão da primeira prova de algoritmos. A proposta era criar um programa para ajudar uma loja de tintas, o programa deve receber o tamanho em metros quadrados da área a ser pintada e os preços das latas e galões de tinta, considerando que a cobertura de tinta é de 1 litro para cada 6 metros quadrados deve ser feito o orçamento em 3 situações diferentes:<br>
- Ao comprar apenas latas de 18 litros: mostre o valor e o número de latas<br>
- Ao comprar apenas galões de 3,6 litros: mostre o valor e o número de galões<br>
- Ao misturar latas e galões, de forma que o gasto de tinta seja o menor: mostre o valor e o número de latas e galões<br>
<br>
<strong>Prova2-questao1.c</strong><br>
Primeira questão da segunda prova de algoritmos. A proposta era criar um programa para o desvio padrão de um conjunto de valores.<br>
<br>
<strong>Prova2-questao2.c</strong><br>
Segunda questão da segunda prova de algoritmos. A proposta era criar um programa para monitorar a temperatura de uma estufa, o máximo de temperaturas é 24, uma para cada hora do dia. O vetor mantem os últimos 24 valores e a cada nova leitura de temperatura o valor mais antigo é descartado.<br>
<br>
<strong>Prova3-questao1.c</strong><br>
Primeira questão da terceira prova de algoritmos. A proposta era criar um programa para calcular apólices de seguro para um corretor que trabalha com duas companhias de seguro. O corretor deve fornecer ao programa o sexo do cliente, idade e valor do automóvel a ser assegurado. A seguradora Itaú Seguros não faz distinção quanto ao sexo dos segurados. No entanto, segurados com menos de 30 anos têm um acréscimo de 1% para cada ano abaixo dos 30, chegando à 12% no caso do segurado ter 18 anos. Já os segurados com mais de 50 anos têm desconto de 1% por ano, limitando-se a 15% de desconto.A Bradesco Seguros dá desconto de 5% para clientes do sexo feminino e mais 10% de desconto caso o cliente tenha 30 anos de idade ou mais. O programa deve ser estruturado em funções:<br>
- Função que calcula o valor bruto da apólice de seguro. Essa função recebe como parâmetros o valor do automóvel e uma identificação da seguradora ‘I’ para Itaú e ‘B’ para Bradesco e retorna o valor da apólice;<br>
- Função que calcula e retorna o valor líquido da apólice para o Itaú. Essa função recebe o valor bruto da apólice e a idade do cliente;<br>
- Função que calcula e retorna o valor líquido da apólice para o Bradesco. Essa função o valor bruto da apólice, a idade do cliente e o sexo do cliente;<br>
- Um programa principal que lê a idade e o sexo do cliente e valor do automóvel a ser segurado e mostra os valores dos seguros para as duas seguradoras, utilizando as funções dos itens anteriores, de acordo com a necessidade, para realizar os cálculos. O programa também indica, para cada cliente, qual é a melhor opção de seguradora, com base no menor valor de apólice líquida. O programa deve estar apto a processar vários clientes, encerrando a execução quando um código inválido para o sexo do cliente for digitado.<br>
<strong>Prova3-questao2.c</strong><br>
Segunda questão da terceira prova de algoritmos. A proposta era criar um programa para ajudar a encontrar os cartões sorteados da loteria. Deveria ser obtido via teclado o valor do prêmio, os 20 números sorteados (digitados em ordem crescente), a quantidade de cartões (máximo de 100 cartões) e os números de cada cartão (também digitados em ordem crescente), cada cartão contem 20 números.Para cada cartão vencedor, deve ser impresso o seu código identificador (o número a que corresponde na entrada de dados, sequencialmente numerados, o 1º. Cartão informado é o cartão 0). Ao final do programa, deve ser impresso o valor rateado do prêmio ou uma mensagem informando que o prêmio acumulou, caso não haja vencedores. O programa deve seguir a seguinte estrutura. (Era obrigatório o uso da matriz para armazenar os números marcados em cada cartão e um vetor para os números sorteados, e também não era permitido o uso de variáveis globais)<br>
- Faça uma função para preencher os números sorteados;<br>
- Faça uma função para preencher a matriz de apostas;<br>
- Faça uma função para verificar e mostrar quais apostas acertaram os números sorteados;<br>
- Faça uma função para mostrar o valor do prêmio para cada aposta vencedora;<br>
- Faça um programa principal faça as chamadas das funções.<br>
<br>
<strong>Trabalho-algoritmo.c</strong><br>
Trabalho prático de algoritmos. A proposta era criar uma rede social para alunos do IFTM contendo os seguintes passos (nesse trabalho eu sei que não fiz nada o que os professores pediram, mas mesmo com as rotas alternativas meu trabalho entregou o que eles queriam e então aceitaram, de 10pts e eu consegui os 10pts):<br>
– O perfil de cada membro da rede Perfil_IFTM terá: int codigo, char nome[40], int idade, char sexo, char estado_civil (sendo, S – Solteiro; C – Casado; N – Namorando; D – Divorciado), char profissao (sendo, D – Desempregado; I – Trabalha com informática; O – outros), int media_notas (média de todas as disciplinas), int disciplina_favorita (sendo, 1 – Algoritmos; 2 – Engenharia de Software; 3 – Sistemas de Informação; 4 – Banco de Dados; 5 – Programação WEB; 6 – Matemática). Cabe a você definir como armazenar essas informações de forma adequada com os conhecimentos que você tem atualmente.<br>
– Crie uma função InicializaPerfis que receba os dados que representem os perfis dos alunos do IFTM e inicialize os dados do tipo de dado int iguais ao valor zero (0), e os campos do tipo de dado char iguais a ‘ ‘. Você determina os parâmetros necessários e o retorno da função.<br>
– Crie uma função RecebePerfis que receba do usuário os dados dos perfis dos alunos do IFTM. O usuário deverá informar o código, nome, idade, sexo, estado civil, profissão, média das notas e disciplina favorita de cada perfil do aluno e você deverá armazena-los para uso posterior.<br>
– Crie uma função QtdeEstadoCivilPerfis que receba os perfis dos alunos do IFTM e o estado civil. Esta função deverá retornar a quantidade de alunos (perfis) que possuem o estado civil recebido pelo parâmetro.<br>
– Crie uma função QtdeProfissaoPerfis que receba os perfis dos alunos do IFTM e a profissão. Esta função deverá retornar a quantidade de alunos (perfis) que possuem a profissão recebida pelo parâmetro.<br>
– Crie uma função MediaIdadePerfis que receba os perfis dos alunos do IFTM e o sexo. Esta função deverá retornar a média de idade dos alunos (perfis) que possuem o sexo recebido pelo parâmetro.<br>
– Crie uma função PerfilMelhorMediaNotas que receba os perfis dos alunos do IFTM. Esta função deverá retornar o aluno (perfil) que possui a melhor (maior) média de notas de todas as disciplinas.<br>
– Crie uma função que receba um vetor que represente os perfis dos alunos do IFTM, e o tamanho do vetor. Esta função deverá retornar o aluno (perfil) que possui a pior (menor) média de notas de todas as disciplinas.<br>
- Simule a rede social Perfil IFTM. O programa deverá exibir um menu de opções:<br>
	0: Adicionar o perfil de um aluno na rede<br>
	1: Quantidade de alunos, informando o estado civil.<br>
	2: Quantidade de alunos, informando a profissão.<br>
	3: Média de idade, informando o sexo.<br>
	4: Perfil do aluno com melhor média de notas em todas as disciplinas.<br>
	5: Mostrar todos perfis cadastrados.<br>
	6: Sair<br>
