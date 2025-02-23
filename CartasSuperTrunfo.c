#include <stdio.h>
#include <string.h>

int main() {

    printf("Cadastro de cartas - Super Trunfo!")

    // Definindo tipos de dados e variáveis para a carta n.º 1
    char estado1;
    char codigo_da_carta1[4];
    char nome_da_cidade1[50];
    int populacao1; 
    float area1;
    float PIB1;
    int numero_de_pontos_turisticos1;

    // Coletando dados para a carta n.º 1
    printf("Insira os dados da primeira carta abaixo: \n");
    
    printf("Digite uma letra de 'A' a 'H', representando um dos oito estados: \n");
    scanf(" %c", &estado1);
    getchar(); // Limpa o buffer de entrada (remove o \n deixado pelo scanf)

    printf("Digite o código da carta (Formato: LetraDoEstado + Número. ex: A01, B02): \n");
    scanf("%s", codigo_da_carta1);
    getchar(); // Limpa o buffer de entrada (remove o \n deixado pelo scanf)

    printf("Digite o nome da cidade: \n");
    fgets(nome_da_cidade1, 50, stdin);
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a área da cidade em km² (máximo de duas casas decimais após a vírgula. ex: 123.45): \n");
    scanf("%f", &area1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o Produto Interno Bruto (PIB) em bilhões de R$ (máximo de duas casas decimais após a vírgula. ex: 123.45): \n");
    scanf("%f", &PIB1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o número de pontos turísticos na cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos1);
    getchar(); // Limpa o buffer de entrada


    // Definindo tipos de dados e variáveis para a carta n.º 2
    char estado2;
    char codigo_da_carta2[4];
    char nome_da_cidade2[50];
    int populacao2; 
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;

    printf("\n"); // Adicionando uma linha em branco para melhorar a visualização do usuário

    // Coletando dados para a carta n.º 2
    printf("Insira os dados da segunda carta abaixo: \n");
    
    printf("Digite uma letra de 'A' a 'H', representando um dos oito estados: \n");
    scanf(" %c", &estado2);
    getchar(); // Limpa o buffer de entrada (remove o \n deixado pelo scanf)

    printf("Digite o código da carta (Formato: LetraDoEstado + Número. ex: A01, B02): \n");
    scanf("%s", codigo_da_carta2);
    getchar(); // Limpa o buffer de entrada (remove o \n deixado pelo scanf)

    printf("Digite o nome da cidade: \n");
    fgets(nome_da_cidade2, 50, stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a área da cidade em km² (máximo de duas casas decimais após a vírgula. ex: 123.45): \n");
    scanf("%f", &area2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o Produto Interno Bruto (PIB) em bilhões de R$ (máximo de duas casas decimais após a vírgula. ex: 123.45): \n");
    scanf("%f", &PIB2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o número de pontos turísticos na cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos2);
    getchar(); // Limpa o buffer de entrada

    printf("\n"); // Linha em branco para separar a coleta de dados da visualização de dados
    

    // Exibição de resultados

    printf("Carta n.º 1:\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", PIB1);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos1);

    printf("\n");

    printf("Carta n.º 2:\n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos2);


    return 0;

}
