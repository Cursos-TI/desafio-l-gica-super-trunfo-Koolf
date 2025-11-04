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
    // COMPARAÇÃO DAS CARTAS
    // ===============================

    printf("--- COMPARAÇÃO DAS CARTAS ---\n");
    printf("%s (%s): %lu habitantes\n", Cidade, Estado, Populacao);
    printf("%s (%s): %lu habitantes\n", Cidade2, Estado2, Populacao2);

    if (Populacao > Populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", Cidade);
    } 
    else if (Populacao2 > Populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
    } 
    else {
        printf("Empate! Ambas as cartas têm a mesma população.\n");
    }

    return 0;
}
