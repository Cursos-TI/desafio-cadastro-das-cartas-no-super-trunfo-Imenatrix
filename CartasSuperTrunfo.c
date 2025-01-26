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
    int numeroDePontosTuristicos;
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
    scanf("%i", &carta.numeroDePontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
