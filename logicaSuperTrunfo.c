#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Carta 01
    char estado;
    char codigicidade [50];
    char nomeCidade[50];
    unsigned long int populacao;
    float areaemkm ;
    float pib ;
    int NumeroPontosTuristico;
    float Dens;
    float PibPercaoita;
    
    // Carta 02
    char estado02;
    char codigicidade02[50];
    char nomeCidade02[50];
    unsigned long int populacao02;
    float areaemkm02;
    float pib02;
    int NumeroPontosTuristico02;
    float Dens02;
    float PibPercaoita02;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    // Codigo Da Carta 1

    printf("Desafio Super Trunfo - Países \n");
    printf("\n");

    // Primeira Carta
    
    
    printf("Insira os dados da primeira carta \n");

    // Estado
    printf("Digite uma letra de A-H para a carta 1 (representando um dos oito estados): \n");
    scanf("%c", &estado),

    // Codigo da cidade
    printf("Digite o codigo da cidade:\n");
    scanf("%s", codigicidade);
    

    // Nome da cidade
    printf("Digite o nome da cidade \n");
    scanf("%s", nomeCidade);
    
    // Numero de habitantes

    printf("Digite o numero de habitantes:\n");
    scanf("%lu", &populacao);

    // A área da cidade em quilômetros quadrados

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &areaemkm);

    // Produto Interno Bruto da cidade

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib);

    // Número de Pontos Turísticos

    printf("Digite a quantidade de pontos turistos na cidade: \n");
    scanf("%d", &NumeroPontosTuristico);

  

    Dens = (float)(populacao) / areaemkm;
    //PibPercaoita = (float)(pib)/ populacao;
    PibPercaoita = (float)(pib * 1000000000.0f)/ populacao;

    printf("\n"); 

    // Segunda Carta

    

    printf("Insira os dados da segunda carta \n");
    printf("\n");

    // Estado
    printf("Digite uma letra de A-H para a carta 2 (representando um dos oito estados):\n");
    scanf(" %c", &estado02);

    // Codigo da carta

    printf("Digite o codigo da carta:\n");
    scanf("%s", codigicidade02);
    
    // Nome da cidade
    printf("Digite o nome da cidade \n");
    scanf("%s", nomeCidade02);
    //fgets(nomeCidade02,50,stdin);
    // Numero de habitantes

   printf("Digite o numero de habitantes:\n");
    scanf("%lu", &populacao02);

    // A área da cidade em quilômetros quadrados

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &areaemkm02);

    // Produto Interno Bruto da cidade

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib02);

    // Número de Pontos Turísticos

    printf("Digite a quantidade de pontos turistos na cidade: \n");
    scanf("%d", &NumeroPontosTuristico02);

    Dens02 = (float)(populacao02) / areaemkm02;
   // PibPercaoita02 = (float)(pib02)/ populacao02;
    PibPercaoita02 = (float)(pib02 * 1000000000.0f) / populacao02;


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    //Comparação População


    if(populacao > populacao02){
        printf("***Comparação de cartas (Atributo: População):***\n");
        printf("Numero de habitantes carta 01: %lu \n", populacao);
        printf("Numero de habitantes carta 02: %lu \n", populacao02);
        printf("Cidade 1 - Venceu! \n");
    }else{
        printf("***Comparação de cartas (Atributo: População):***\n");
        printf("Numero de habitantes carta 01: %lu \n", populacao);
        printf("Numero de habitantes carta 01: %lu \n", populacao02);
        printf("Cidade 2 - Venceu! \n");

    }

    //Comparação Area

    if(areaemkm > areaemkm02){
        printf("***Comparação de cartas (Atributo: Area por Km):***\n");
        printf("Numero de habitantes carta 01: %.2f \n", areaemkm);
        printf("Numero de habitantes carta 02: %.2f \n", areaemkm02);
        printf("Cidade 1 - Venceu! \n");
    }else{
        printf("***Comparação de cartas (Atributo: Area por Km):***\n");
        printf("Numero de habitantes carta 01: %.2f \n", areaemkm);
        printf("Numero de habitantes carta 02: %.2f \n", areaemkm02);
        printf("Cidade 2 - Venceu! \n");
    }
    //Comparação Pib

    if(pib > pib02){
        printf("***Comparação de cartas (Atributo: Pib):***\n");
        printf("Numero de habitantes carta 01: %.2f \n", pib);
        printf("Numero de habitantes carta 02: %.2f \n", pib02);
        printf("Cidade 1 - Venceu! \n");
    } else {
        printf("***Comparação de cartas (Atributo: Pib):***\n");
        printf("Numero de habitantes carta 01: %.2f \n", pib);
        printf("Numero de habitantes carta 02: %.2f \n", pib02);
        printf("Cidade 2 - Venceu! \n");
    }

    //Comparação Pontos Turistico

    if(NumeroPontosTuristico > NumeroPontosTuristico02){
        printf("***Comparação de cartas (Atributo: Pontos Turisticos):***\n");
        printf("Numero de habitantes carta 01: %d \n", NumeroPontosTuristico);
        printf("Numero de habitantes carta 02: %d \n", NumeroPontosTuristico02);
        printf("Cidade 1 - Venceu! \n");
    } else {
        printf("***Comparação de cartas (Atributo: Pontos Turisticos):***\n");
        printf("Numero de habitantes carta 01: %d \n", NumeroPontosTuristico);
        printf("Numero de habitantes carta 02: %d \n", NumeroPontosTuristico02);
        printf("Cidade 2 - Venceu! \n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
    }

