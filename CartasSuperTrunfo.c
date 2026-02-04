#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {


    // Declaração das variáveis para os atributos das cidades

    int populacao, pontosturisticos, populacao2, pontosturisticos2;
    long int pib, pib2;
    // mudei o pib, pois o valor do pib é muito grande, e o tipo float não é adequado para armazenar valores tão grandes, pois pode ocorrer perda de precisão. O tipo long int é mais apropriado para armazenar valores inteiros grandes, como o PIB de uma cidade.
    float area, densidade, pibpercapta, area2, densidade2, pibpercapta2;
    char estado[50], cidade[50], estado2[50], cidade2[50], codigo[10], codigo2[10];


    // requerimentos do usuário para 1ª carta:

    printf("Digite o nome do 1º estado: ");
    scanf("%s", estado);

    printf("Digite o nome da 1ª cidade: ");
    scanf(" %[^\n]", cidade); // "%[^\n]" lê até a quebra de linha (nome com espaços) -- vi no arquivo de um colega aqui no github

    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%ld", &pib);


    // requerimentos do usuário para 2ª carta:

    printf("\nDigite o nome do 2º estado: ");
    scanf("%s", estado2);

    printf("Digite o nome da 2ª cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:");
    scanf("%ld", &pib2);


    // Cálculo de densidade populacional e PIB per capita:

    // Carta 1:
    densidade = populacao / area;
    pibpercapta = pib / populacao;

    // Carta 2:
    densidade2 = populacao2 / area2;
    pibpercapta2 = pib2 / populacao2;


    // exibição 1ª carta:

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Pontos Turísticos: %d\n", pontosturisticos);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %ld\n", pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: R$ %.2f\n", pibpercapta);
    
    // exibição 2ª carta:
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %ld\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapta2);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
