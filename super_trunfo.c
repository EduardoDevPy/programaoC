#include <stdio.h>

int main() {
    // Variáveis carta 1
    char estado[20];
    char cidade[50];
    char codigo[3];
    int populacao, pturistico;
    float pib, area;

    // variáveis carta 2
    char estado2[20];
    char cidade2[50];
    char codigo2[3];
    int populacao2, pturistico2;
    float pib2, area2;

    // Informações da carta 1
    printf("Carta 1\n\n");
    printf("Digite o estado:\n");
    scanf("%s", estado);
    printf("Digite o codigo:\n");
    scanf("%s", codigo);
    printf("Nome da cidade:\n");
    scanf(" %s", cidade);
    printf("Digite a população:\n");
    scanf("%d", &populacao);
    while (getchar() != '\n'); // Precisei pesquisar e colocar esse comando, pois não conseguia arrumar o programa, ele não deixava eu digitar a área, não consegui entender o porque.
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Qual é o PIB:\n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &pturistico);

    // Informações da carta 2
    printf("\nCarta 2\n\n");
    printf("Digite o estado:\n");
    scanf("%s", estado2);
    printf("Digite o codigo:\n");
    scanf("%s", codigo2);
    printf("Nome da cidade:\n");
    scanf(" %s", cidade2);
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    printf("Digite a area:\n");
    while (getchar() != '\n'); // novamente, precisei usar no mesmo local esse comando.
    scanf("%f",& area2);
    printf("Qual é o PIB:\n");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &pturistico2);

    // Novas variáveis do desafio aventureiro.
    float densidade1 = populacao / area;
    float densidade2 = populacao2 / area2;
    float pib_capita1 = (pib * 1e9) / populacao; // necessário adicionar o pib * 1e9 para convertermos em bilhões.
    float pib_capita2 = (pib2 * 1e9) / populacao2;
    

    // Resultado da carta 1.

    printf("\nCarta 1\n\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\n", estado, codigo, cidade);
    printf("População: %d\nÁrea: %.2f.km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", populacao, area, pib, pturistico);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_capita1);

    // Resultado da carta 2.

    printf("\nCarta 2\n\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %d\nÁrea: %.2f.km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", populacao2, area2, pib2, pturistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_capita2);

    return 0; 
}







