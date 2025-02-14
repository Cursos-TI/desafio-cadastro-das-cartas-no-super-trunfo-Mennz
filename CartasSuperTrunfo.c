#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Davi
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    #include <stdio.h>
    int main() {
        char estado1, estado2;
        int cidade1, cidade2;
        float populacao1, area1, pib1;
        int pontos1;
        float densidade1, pibpc1;
        float populacao2, area2, pib2;
        int pontos2;
        float densidade2, pibpc2;
    
        char codigo1[5], codigo2[5]; // codigo da carta "B04"
    
        // Entrada de dados da carta 1
        printf("*** Informações da Carta 1 ***\n");
        printf("Digite a letra do estado: ");
        scanf(" %c", &estado1);
        printf("Digite o número da cidade: ");
        scanf("%d", &cidade1);
        printf("Digite a população (em milhões): ");
        scanf("%f", &populacao1);
        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area1);
        printf("Digite o PIB (em bilhões): ");
        scanf("%f", &pib1);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos1);
    
        // conversão de valores
        populacao1 *= 1000000;
        pib1 *= 1000000000;
        densidade1 = populacao1 / area1;
        pibpc1 = pib1 / populacao1;
        sprintf(codigo1, "%c%02d", estado1, cidade1); // formata o codigo da cidade
    
        // Entrada de dados da carta 2
        printf("\n*** Informações da Carta 2 ***\n");
        printf("Digite a letra do estado: ");
        scanf(" %c", &estado2);
        printf("Digite o número da cidade: ");
        scanf("%d", &cidade2);
        printf("Digite a população (em milhões): ");
        scanf("%f", &populacao2);
        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area2);
        printf("Digite o PIB (em bilhões): ");
        scanf("%f", &pib2);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos2);
    
        // conversão de valores da segunda cidade
        populacao2 *= 1000000;
        pib2 *= 1000000000;
        densidade2 = populacao2 / area2;
        pibpc2 = pib2 / populacao2;
        sprintf(codigo2, "%c%02d", estado2, cidade2); // codigo da segunda cidade
    
        // informações da carta 1
        printf("\n*** CARTAS ***\n");
        printf("\nCidade 1: %s\nPopulação: %.0f\nÁrea: %.2f km²\nPIB: %.0f\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f\n", 
            codigo1, populacao1, area1, pib1, pontos1, densidade1, pibpc1);
            // informações da carta 2
        printf("\nCidade 2: %s\nPopulação: %.0f\nÁrea: %.2f km²\nPIB: %.0f\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f\n", 
            codigo2, populacao2, area2, pib2, pontos2, densidade2, pibpc2);
    
        // tabela de comparação que ficou imensa
        printf("\n*** RESULTADOS DAS COMPARAÇÕES ***\n");
    
        printf(" **Densidade Populacional**: ");
        if (densidade1 < densidade2) printf("%s venceu (menor densidade)\n", codigo1);
        else if (densidade1 > densidade2) printf("%s venceu (menor densidade)\n", codigo2);
        else printf("Empate!\n");
    
        printf(" **População**: ");
        if (populacao1 > populacao2) printf("%s venceu (maior população)\n", codigo1);
        else if (populacao1 < populacao2) printf("%s venceu (maior população)\n", codigo2);
        else printf("Empate!\n");
    
        printf(" **Área**: ");
        if (area1 > area2) printf("%s venceu (maior área)\n", codigo1);
        else if (area1 < area2) printf("%s venceu (maior área)\n", codigo2);
        else printf("Empate!\n");
    
        printf(" **PIB**: ");
        if (pib1 > pib2) printf("%s venceu (maior PIB)\n", codigo1);
        else if (pib1 < pib2) printf("%s venceu (maior PIB)\n", codigo2);
        else printf("Empate!\n");
    
        printf(" **Pontos Turísticos**: ");
        if (pontos1 > pontos2) printf("%s venceu (mais pontos turísticos)\n", codigo1);
        else if (pontos1 < pontos2) printf("%s venceu (mais pontos turísticos)\n", codigo2);
        else printf("Empate!\n");
    
        printf(" **PIB per Capita**: ");
        if (pibpc1 > pibpc2) printf("%s venceu (maior PIB per capita)\n", codigo1);
        else if (pibpc1 < pibpc2) printf("%s venceu (maior PIB per capita)\n", codigo2);
        else printf("Empate!\n");
    
        return 0;
    }
