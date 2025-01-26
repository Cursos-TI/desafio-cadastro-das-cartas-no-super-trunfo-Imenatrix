#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// Struct que define uma carta do Super Trunfo com o tema Cidades
typedef struct {
    char estado;
    char codigo[4];
    char nome[255];
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

void input_carta(Carta *carta);
void exibir_carta(Carta *carta);

int main() {
    // Declara a carta a ser cadastrada
    Carta carta;
    
    // Cadastro das Cartas:
    // Insere os dados da carta sequencialmente via terminal
    input_carta(&carta);

    // Exibição dos Dados das Cartas:
    // Imprime os dados da carta sequencialmente no terminal
    printf("\n");
    exibir_carta(&carta);

    return 0;
}

// Pede as informações de uma carta ao usuário
// E armazena as resposta na carta cujo endereço
// É passado
void input_carta(Carta *carta) {
    printf("Digite o estado: ");
    scanf("%c", &carta->estado);

    printf("Digite o código da carta: ");
    scanf("%3s", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf("%255s", carta->nome);

    printf("Digite a população: ");
    scanf("%i", &carta->populacao);

    printf("Digite a área: ");
    scanf("%f", &carta->area);

    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%i", &carta->numero_pontos_turisticos);

    // Propriedades calculadas
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
}

// Exibe as informações da carta no terminal
// de forma estruturada
void exibir_carta(Carta *carta) {
    printf("Estado: %c\n", carta->estado);
    printf("Código da Carta: %s\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->nome);
    printf("População: %i\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f bilhões de reais\n", carta->pib);
    printf("Número de Pontos Turísticos: %i\n", carta->numero_pontos_turisticos);
    printf("Densidade populacional: %.2f individuos por km²\n", carta->densidade_populacional);
    printf("PIB per capita: %.2f bilhões de reais por pessoa\n", carta->pib_per_capita);
}