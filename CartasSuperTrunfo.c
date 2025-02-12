#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("Digite o código da cidade: \n"); //CODIGO DA CIDADE
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: \n");  //NOME DA CIDADE
    scanf("%s", &nome);

    printf("Digite a população da cidade em milhões: \n");  //POPULAÇÃO DA CIDADE
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: \n");   //ÁREA DA CIDADE
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões: \n");  //PIB DA CIDADE
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos da cidade: \n");  //PONTOS TURISTICOS
    scanf("%d", &pontos);

    printf("Código da cidade: %d \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("População da cidade: %d Milhões \n", populacao);
    printf("Área da cidade: %.2f Km² \n", area);
    printf("PIB da cidade: %.2f Bilhões \n", pib);
    printf("Número de pontos turisticos: %d \n", pontos);

 return 0;
 }
