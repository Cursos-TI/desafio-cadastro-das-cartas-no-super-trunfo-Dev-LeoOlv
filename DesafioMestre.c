#include <stdio.h>

int main() {
    // Carta 1
    char estado1[30], nome1[30];
    int codigo1, pontos1;
    unsigned long int populacao1;
    float area1;
    double pib1;
    
    // Carta 2
    char estado2[30], nome2[30];
    int codigo2, pontos2;
    unsigned long int populacao2;
    float area2;
    double pib2;
    
    // Variáveis calculadas
    float dens1, dens2;
    float pibpc1, pibpc2;
    float super1, super2;

    // Entrada dos dados
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Nome: ");
    scanf("%s", nome1);
    printf("Codigo: ");
    scanf("%d", &codigo1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%lf", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Nome: ");
    scanf("%s", nome2);
    printf("Codigo: ");
    scanf("%d", &codigo2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%lf", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Calculos
    dens1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    dens2 = (area2 > 0) ? (float)populacao2 / area2 : 0;

    pibpc1 = (populacao1 > 0) ? (float)(pib1 / populacao1) : 0;
    pibpc2 = (populacao2 > 0) ? (float)(pib2 / populacao2) : 0;

    super1 = (float)populacao1 + area1 + (float)pib1 + pontos1 + pibpc1 + (dens1 > 0 ? 1.0f/dens1 : 0);
    super2 = (float)populacao2 + area2 + (float)pib2 + pontos2 + pibpc2 + (dens2 > 0 ? 1.0f/dens2 : 0);

    // Comparações
    printf("\nComparacao de Cartas:\n\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 >= populacao2) ? 1 : 2, (populacao1 >= populacao2) ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", (area1 >= area2) ? 1 : 2, (area1 >= area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 >= pib2) ? 1 : 2, (pib1 >= pib2) ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos1 >= pontos2) ? 1 : 2, (pontos1 >= pontos2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (dens1 <= dens2) ? 1 : 2, (dens1 <= dens2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpc1 >= pibpc2) ? 1 : 2, (pibpc1 >= pibpc2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (super1 >= super2) ? 1 : 2, (super1 >= super2) ? 1 : 0);

    return 0;
}
