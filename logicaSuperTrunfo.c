#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
typedef struct {
    char estado[30]; // Estado da carta
    char codigo[10]; // Código da carta
    char nomeCidade[50]; // Nome da cidade
    int populacao; // População da cidade
    float area; // Área da cidade em km²
    float pib; // PIB da cidade em reais
    int pontosTuristicos; // Número de pontos turísticos    
    float densidadePopulacional; // Densidade populacional
    float pibPerCapita; // PIB per capita
} Carta;

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(float pib, int populacao) {
    return pib / populacao;
}

int main() {
    // Definindo duas cartas manualmente
    Carta carta1 = {"SP", "001", "São Paulo", 12300000, 1521.11, 580000000000, 50};
    Carta carta2 = {"RJ", "002", "Rio de Janeiro", 6000000, 1200.27, 250000000000, 35};

    // Calculando indicadores
    carta1.densidadePopulacional = calcularDensidadePopulacional(carta1.populacao, carta1.area); 
    carta2.densidadePopulacional = calcularDensidadePopulacional(carta2.populacao, carta2.area);

    carta1.pibPerCapita = calcularPIBPerCapita(carta1.pib, carta1.populacao);
    carta2.pibPerCapita = calcularPIBPerCapita(carta2.pib, carta2.populacao);

    // Atributo selecionado para comparação: PIB per capita
    printf("Comparação de cartas (Atributo: PIB per capita):\n\n");
    printf("Carta 1 - %s (%s): R$ %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pibPerCapita);
    printf("Carta 2 - %s (%s): R$ %.2f\n\n", carta2.nomeCidade, carta2.estado, carta2.pibPerCapita);

    // Determinando vencedora
    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta1.pibPerCapita < carta2.pibPerCapita) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
