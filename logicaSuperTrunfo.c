#include <stdio.h>

/*
    Programa: Cadastro de Cartas do Super Trunfo de Cidades
    Nível: Novato
    Autor: [Edigar Pierott Torres]
    Descrição: Lê e exibe os dados de duas cartas do Super Trunfo.
*/

int main()
{
    // Variáveis para a Carta 1
    char estado1; // Letra do estado (A-H)
    char codigo1[5]; // Código da carta (ex: A01)
    char nomeCidade1[50]; // Nome da cidade
    unsigned long int populacao1; // População da cidade
    float area1; // Área da cidade em km²
    float pib1; // PIB da cidade em bilhões de reais
    int pontosTuristicos1; // Número de pontos turísticos da cidade

    // Instruções para o usuário
    printf("Cadastro da Carta 1:\n"); // Início do cadastro da primeira carta

    printf("Digite a letra do Estado 1(A-H): "); // Solicita a letra do estado
    scanf(" %c", &estado1); // Lê a letra do estado

    printf("Digite o código da carta 1(ex: A01): "); // Solicita o código da carta ao usuário
    scanf("%s", codigo1); // Lê o código da carta (string)

    printf("Digite o nome da cidade 1: "); // Solicita o nome da cidade ao usuário
    scanf(" %[^\n]", nomeCidade1); // Lê o nome da cidade (string com espaços)

    printf("Digite a população da cidade 1: "); // Solicita a população da cidade
    scanf("%lu", &populacao1); // Lê a população (unsigned long int)

    printf("Digite a área da cidade 1(em km²): "); // Solicita a área da cidade
    scanf("%f", &area1); // Lê a área (float)

    printf("Digite o PIB da cidade 1(em bilhões de reais): "); // Solicita o PIB da cidade
    scanf("%f", &pib1); // Lê o PIB (float)

    printf("Digite o número de pontos turísticos da cidade 1: "); // Solicita o número de pontos turísticos
    scanf("%d", &pontosTuristicos1); // Lê o número de pontos turísticos

    // Variáveis para a Carta 2
    char estado2; // Letra do estado (A-H)
    char codigo2[5]; // Código da carta (ex: A02)
    char nomeCidade2[50]; // Nome da cidade
    unsigned long int populacao2; // População da cidade
    float area2; // Área da cidade em km²
    float pib2; // PIB da cidade em bilhões de reais
    int pontosTuristicos2; // Número de pontos turísticos da cidade

    // Instruções para o usuário
    printf("Cadastro da Carta 2:\n"); // Início do cadastro da segunda carta
    printf("Digite a letra do Estado 2(A-H): "); // Solicita a letra do estado
    scanf(" %c", &estado2); // Lê a letra do estado

    printf("Digite o código da carta 2(ex: A02): "); // Solicita o código da carta ao usuário
    scanf("%s", codigo2); // Lê o código da carta (string)

    printf("Digite o nome da cidade 2: "); // Solicita o nome da cidade ao usuário
    scanf(" %[^\n]", nomeCidade2); // Lê o nome da cidade (string com espaços)

    printf("Digite a população da cidade 2: "); // Solicita a população da cidade
    scanf("%lu", &populacao2); // Lê a população (unsigned long int)

    printf("Digite a área da cidade 2(em km²): "); // Solicita a área da cidade
    scanf("%f", &area2); // Lê a área (float)

    printf("Digite o PIB da cidade 2(em bilhões de reais): "); // Solicita o PIB da cidade
    scanf("%f", &pib2); // Lê o PIB (float)

    printf("Digite o número de pontos turísticos da cidade 2: "); // Solicita o número de pontos turísticos
    scanf("%d", &pontosTuristicos2); // Lê o número de pontos turísticos (inteiro)


    // Cálculo dos atributos derivados
    float densidade1 = (area1 != 0.0f) ? ((float)populacao1 / area1) : 0.0f; // Densidade populacional da cidade 1
    float densidade2 = (area2 != 0.0f) ? ((float)populacao2 / area2) : 0.0f; // Densidade populacional da cidade 2
    float pibPerCapita1 = (populacao1 != 0) ? (pib1 * 1000000000.0f / populacao1) : 0.0f; // PIB per capita da cidade 1
    float pibPerCapita2 = (populacao2 != 0) ? (pib2 * 1000000000.0f / populacao2) : 0.0f; // PIB per capita da cidade 2

    // Cálculo do Super Poder
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + ((densidade1 != 0.0f) ? (1.0f / densidade1) : 0.0f); // Super Poder da carta 1
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + ((densidade2 != 0.0f) ? (1.0f / densidade2) : 0.0f); // Super Poder da carta 2
 
     // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n"); // Início da exibição dos dados da primeira carta
    printf("Estado: %c\n", estado1); // Exibe a letra do estado
    printf("Código: %s\n", codigo1); // Exibe o código da carta
    printf("Nome da Cidade: %s\n", nomeCidade1); // Exibe o nome da cidade
    printf("População: %lu\n", populacao1); // Exibe a população da cidade (unsigned long int)
    printf("Área: %.2f km²\n", area1); // Exibe a área da cidade
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB da cidade
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // Exibe o número de pontos turísticos
    printf("Super Poder: %.2f\n", superPoder1); // Exibe o Super Poder da carta 1

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n"); // Início da exibição dos dados da segunda carta
    printf("Estado: %c\n", estado2); // Exibe a letra do estado
    printf("Código: %s\n", codigo2); // Exibe o código da carta
    printf("Nome da Cidade: %s\n", nomeCidade2); // Exibe o nome da cidade
    printf("População: %lu\n", populacao2); // Exibe a população da cidade (unsigned long int)
    printf("Área: %.2f km²\n", area2); // Exibe a área da cidade
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibe o PIB da cidade
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); // Exibe o número de pontos turísticos
    printf("Super Poder: %.2f\n", superPoder2); // Exibe o Super Poder da carta 2

    // Comparação dos atributos
    // Para cada atributo (população, área, PIB, pontos turísticos, PIB per capita e Super Poder), vence a carta com o maior valor
    // Para densidade populacional, vence a carta com o menor valor (por isso o operador <)
    // O resultado mostra qual carta venceu (1 para Carta 1, 2 para Carta 2) e imprime (1) se Carta 1 venceu ou (0) se Carta 2 venceu 
    printf("\nComparação de Cartas:\n");
    printf("População: %d - %s\n", populacao1 > populacao2, (populacao1 > populacao2) ? nomeCidade1 : (populacao1 < populacao2) ? nomeCidade2 : "Empate"); // Exibe a comparação de população
    printf("Área: %d - %s\n", area1 > area2, (area1 > area2) ? nomeCidade1 : (area1 < area2) ? nomeCidade2 : "Empate"); // Exibe a comparação de área
    printf("PIB: %d - %s\n", pib1 > pib2, (pib1 > pib2) ? nomeCidade1 : (pib1 < pib2) ? nomeCidade2 : "Empate"); // Exibe a comparação de PIB
    printf("Pontos Turísticos: %d - %s\n", pontosTuristicos1 > pontosTuristicos2, (pontosTuristicos1 > pontosTuristicos2) ? nomeCidade1 : (pontosTuristicos1 < pontosTuristicos2) ? nomeCidade2 : "Empate"); // Exibe a comparação de pontos turísticos
    printf("Densidade Populacional: %d - %s\n", densidade1 < densidade2, (densidade1 < densidade2) ? nomeCidade1 : (densidade1 > densidade2) ? nomeCidade2 : "Empate"); // Exibe a comparação de densidade populacional
    printf("PIB per Capita: %d - %s\n", pibPerCapita1 > pibPerCapita2, (pibPerCapita1 > pibPerCapita2) ? nomeCidade1 : (pibPerCapita1 < pibPerCapita2) ? nomeCidade2 : "Empate"); // Exibe a comparação de PIB per capita
    printf("Super Poder: %d - %s\n", superPoder1 > superPoder2, (superPoder1 > superPoder2) ? nomeCidade1 : (superPoder1 < superPoder2) ? nomeCidade2 : "Empate"); // Exibe a comparação de Super Poder
    
    return 0;
}