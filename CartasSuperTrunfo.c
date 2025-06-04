#include <stdio.h>
#include <string.h>

int main() {

    printf("Cadastro de cartas - Super Trunfo! \n");

    // Definindo tipos de dados e variáveis para a carta n.º 1
    char estado1;
    char codigo_da_carta1[4];
    char nome_da_cidade1[50];
    unsigned long int populacao1; 
    float area1;
    float PIB1;
    int numero_de_pontos_turisticos1;
    float PIB_per_capita1;
    float densidade_populacional1;
    float super_poder1;
    int pontos_carta1 = 0;
    
    // Coletando dados para a carta n.º 1
    printf("Insira os dados da primeira carta abaixo: \n");
    
    printf("Digite uma letra de 'A' a 'H', representando um dos oito estados: \n");
    scanf(" %c", &estado1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o código da carta (Formato: LetraDoEstado + Número. ex: A01, B02): \n");
    scanf("%s", codigo_da_carta1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o nome da cidade: \n");
    fgets(nome_da_cidade1, 50, stdin);
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%lu", &populacao1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a área da cidade em km² (máximo de duas casas decimais após o ponto. ex: 123.45): \n");
    scanf("%f", &area1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o Produto Interno Bruto (PIB) em escala de bilhões de R$ (máximo de duas casas decimais após o ponto. ex: 1.45): \n");
    scanf("%f", &PIB1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o número de pontos turísticos na cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos1);
    getchar(); // Limpa o buffer de entrada

    // Definindo tipos de dados e variáveis para a carta n.º 2
    char estado2;
    char codigo_da_carta2[4];
    char nome_da_cidade2[50];
    unsigned long int populacao2; 
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;
    float PIB_per_capita2;
    float densidade_populacional2;
    float super_poder2;
    int pontos_carta2 = 0;

    printf("\n"); // Linha em branco para melhor visualização

    // Coletando dados para a carta n.º 2
    printf("Insira os dados da segunda carta abaixo: \n");
    
    printf("Digite uma letra de 'A' a 'H', representando um dos oito estados: \n");
    scanf(" %c", &estado2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o código da carta (Formato: LetraDoEstado + Número. ex: A01, B02): \n");
    scanf("%s", codigo_da_carta2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o nome da cidade: \n");
    fgets(nome_da_cidade2, 50, stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%lu", &populacao2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a área da cidade em km² (máximo de duas casas decimais após o ponto. ex: 123.45): \n");
    scanf("%f", &area2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o Produto Interno Bruto (PIB) em escala de bilhões de R$ (máximo de duas casas decimais após o ponto. ex: 1.45): \n");
    scanf("%f", &PIB2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o número de pontos turísticos na cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos2);
    getchar(); // Limpa o buffer de entrada

    printf("\n"); // Linha em branco para separar a coleta de dados da visualização

    // Cálculo de PIB per capita e densidade populacional
    densidade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = (PIB1 * 1e9) / populacao1;

    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = (PIB2 * 1e9) / populacao2;

    // Cálculo do inverso da densidade populacional
    float inverso_densidade1 = 1.0 / densidade_populacional1;
    float inverso_densidade2 = 1.0 / densidade_populacional2;

    // Cálculo de super poder
    super_poder1 = populacao1 + area1 + PIB1 + numero_de_pontos_turisticos1 + PIB_per_capita1 + inverso_densidade1;
    super_poder2 = populacao2 + area2 + PIB2 + numero_de_pontos_turisticos2 + PIB_per_capita2 + inverso_densidade2;

    // Variáveis para armazenar os resultados individuais
    int resultado_populacao = 0;
    int resultado_area = 0;
    int resultado_PIB = 0;
    int resultado_PIB_per_capita = 0;
    int resultado_pontos_turisticos = 0;
    int resultado_densidade = 0;
    int resultado_super_poder = 0;

    // Exibição de resultados finais

    printf("\n");

    printf("Carta n.º 1:\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", PIB1);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", PIB_per_capita1);
    printf("Super poder carta n.º 1: %.2f\n", super_poder1);

    printf("\n");

    printf("Carta n.º 2:\n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", PIB_per_capita2);
    printf("Super poder carta n.º 2: %.2f\n", super_poder2);
    

    // Comparação dos atributos entre as cartas

    printf("Comparação de Cartas:\n\n");

    // População
    if (populacao1 > populacao2) {
        resultado_populacao = 1;
        pontos_carta1++;
        printf("População: Carta 1 venceu (1)\n");
    } else if (populacao1 < populacao2) {
        resultado_populacao = 2;
        pontos_carta2++;
        printf("População: Carta 2 venceu (0)\n");
    } else {
        printf("População: Empate\n");
    }

    // Área
    if (area1 > area2) {
        resultado_area = 1;
        pontos_carta1++;
        printf("Área: Carta 1 venceu (1)\n");
    } else if (area1 < area2) {
        resultado_area = 2;
        pontos_carta2++;
        printf("Área: Carta 2 venceu (0)\n");
    } else {
        printf("Área: Empate\n");
    }

    // PIB
    if (PIB1 > PIB2) {
        resultado_PIB = 1;
        pontos_carta1++;
        printf("PIB: Carta 1 venceu (1)\n");
    } else if (PIB1 < PIB2) {
        resultado_PIB = 2;
        pontos_carta2++;
        printf("PIB: Carta 2 venceu (0)\n");
    } else {
        printf("PIB: Empate\n");
    }

    // Pontos Turísticos
    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
        resultado_pontos_turisticos = 1;
        pontos_carta1++;
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else if (numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2) {
        resultado_pontos_turisticos = 2;
        pontos_carta2++;
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    } else {
        printf("Pontos Turísticos: Empate\n");
    }

    // Densidade Populacional (menor valor vence)
    if (densidade_populacional1 < densidade_populacional2) {
        resultado_densidade = 1;
        pontos_carta1++;
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else if (densidade_populacional1 > densidade_populacional2) {
        resultado_densidade = 2;
        pontos_carta2++;
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    } else {
        printf("Densidade Populacional: Empate\n");
    }

    // PIB per capita
    if (PIB_per_capita1 > PIB_per_capita2) {
        resultado_PIB_per_capita = 1;
        pontos_carta1++;
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else if (PIB_per_capita1 < PIB_per_capita2) {
        resultado_PIB_per_capita = 2;
        pontos_carta2++;
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    } else {
        printf("PIB per Capita: Empate\n");
    }

    // Super poder
    if (super_poder1 > super_poder2) {
        resultado_super_poder = 1;
        pontos_carta1++;
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else if (super_poder1 < super_poder2) {
        resultado_super_poder = 2;
        pontos_carta2++;
        printf("Super Poder: Carta 2 venceu (0)\n");
    } else {
        printf("Super Poder: Empate\n");
    }


    printf("\n"); // Linha em branco para melhorar a vizualização do usuario

    // Definindo o vencedor geral

    printf("\nResultado Final:\n");
    if (pontos_carta1 > pontos_carta2) {
        printf("CARTA n.º 1 VENCEU O JOGO!!!\n");
    } else if (pontos_carta1 < pontos_carta2) {
        printf("CARTA n.º 2 VENCEU O JOGO!!!\n");
    } else {
        printf("O jogo terminou empatado.\n");
    }

    return 0;
}
