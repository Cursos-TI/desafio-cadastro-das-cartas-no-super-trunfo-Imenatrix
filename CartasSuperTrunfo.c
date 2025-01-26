#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

typedef struct {
    char estado;
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;
} Carta;


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    Carta carta;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o estado: ");
    scanf("%c", &carta.estado);

    printf("Digite o código da cidade: ");
    scanf("%3s", carta.codigo);

    printf("Digite a população da cidade: ");
    scanf("%i", &carta.populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &carta.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta.pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%i", &carta.numero_pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %c\n", carta.estado);
    printf("Código da Carta: %s\n", carta.codigo);
    printf("Nome da Cidade: São Paulo\n");
    printf("População: %i\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %i\n", carta.numero_pontos_turisticos);

    return 0;
}
