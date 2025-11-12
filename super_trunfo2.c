#include <stdio.h>

int main() {

    // Variáveis da Carta 1
    char Estado[3];
    char Codigo[4];
    char Cidade[15];
    unsigned long int Populacao;
    float Area;
    float PIB;
    int Turisticos;
    float Densidade;
    float Capita;
    float SuperPoder;

    // Entrada de dados da Carta 1
    printf("--- Digite os Dados da Carta N° 01 ---\n");

    printf("Digite o Estado:\n");
    scanf("%s", Estado);

    printf("Digite o Código da Carta:\n");
    scanf("%s", Codigo);

    printf("Digite a Cidade:\n");
    scanf("%s", Cidade);

    printf("Digite a quantidade de População:\n");
    scanf("%lu", &Populacao);

    printf("Digite a Área em km²:\n");
    scanf("%f", &Area); 

    printf("Digite o PIB:\n");
    scanf("%f", &PIB); 

    printf("Digite os Pontos Turísticos:\n");
    scanf("%d", &Turisticos);

    // Cálculos carta 1
    Densidade = Populacao / Area;
    Capita = PIB / Populacao;
    SuperPoder = (float)Populacao + Area + PIB + (float)Turisticos + Capita + (1 / Densidade);


    // Variáveis da Carta 2
    char Estado2[3];
    char Codigo2[4];
    char Cidade2[15];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int Turisticos2;
    float Densidade2;
    float Capita2;
    float SuperPoder2;

    // Entrada de dados da Carta 2
    printf("\n--- Digite os Dados da Carta N° 02 ---\n");

    printf("Digite o Estado:\n");
    scanf("%s", Estado2);

    printf("Digite o Código da Carta:\n");
    scanf("%s", Codigo2);

    printf("Digite a Cidade:\n");
    scanf("%s", Cidade2);

    printf("Digite a quantidade de População:\n");
    scanf("%lu", &Populacao2);

    printf("Digite a Área em km²:\n");
    scanf("%f", &Area2); 

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2); 

    printf("Digite os Pontos Turísticos:\n");
    scanf("%d", &Turisticos2);

    // Cálculos carta 2
    Densidade2 = Populacao2 / Area2;
    Capita2 = PIB2 / Populacao2;
    SuperPoder2 = (float)Populacao2 + Area2 + PIB2 + (float)Turisticos2 + Capita2 + (1 / Densidade2);


    // ===============================
    // MENU INTERATIVO
    // ===============================

    int opcao;
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");

    switch (opcao) {
        case 1:
            printf("Comparando População:\n");
            printf("%s: %lu habitantes\n", Cidade, Populacao);
            printf("%s: %lu habitantes\n", Cidade2, Populacao2);
            if (Populacao > Populacao2) {
                printf("Vencedor: %s!\n", Cidade);
            } else if (Populacao2 > Populacao) {
                printf("Vencedor: %s!\n", Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n", Cidade, Area);
            printf("%s: %.2f km²\n", Cidade2, Area2);
            if (Area > Area2) {
                printf("Vencedor: %s!\n", Cidade);
            } else if (Area2 > Area) {
                printf("Vencedor: %s!\n", Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhões\n", Cidade, PIB);
            printf("%s: %.2f bilhões\n", Cidade2, PIB2);
            if (PIB > PIB2) {
                printf("Vencedor: %s!\n", Cidade);
            } else if (PIB2 > PIB) {
                printf("Vencedor: %s!\n", Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d pontos\n", Cidade, Turisticos);
            printf("%s: %d pontos\n", Cidade2, Turisticos2);
            if (Turisticos > Turisticos2) {
                printf("Vencedor: %s!\n", Cidade);
            } else if (Turisticos2 > Turisticos) {
                printf("Vencedor: %s!\n", Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Comparando Densidade Demográfica (menor vence):\n");
            printf("%s: %.2f hab/km²\n", Cidade, Densidade);
            printf("%s: %.2f hab/km²\n", Cidade2, Densidade2);
            if (Densidade < Densidade2) {
                printf("Vencedor: %s!\n", Cidade);
            } else if (Densidade2 < Densidade) {
                printf("Vencedor: %s!\n", Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
