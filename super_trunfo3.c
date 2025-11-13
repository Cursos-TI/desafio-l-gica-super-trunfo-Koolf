#include <stdio.h>

int main() {

    // =====================================
    // DADOS DA CARTA 1
    // =====================================
    char Estado[3];
    char Codigo[4];
    char Cidade[15];
    unsigned long int Populacao;
    float Area;
    float PIB;
    int Turisticos;
    float Densidade, Capita, SuperPoder;

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

    Densidade = Populacao / Area;
    Capita = PIB / Populacao;
    SuperPoder = Populacao + Area + PIB + Turisticos + Capita + (1 / Densidade);


    // =====================================
    // DADOS DA CARTA 2
    // =====================================
    char Estado2[3];
    char Codigo2[4];
    char Cidade2[15];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int Turisticos2;
    float Densidade2, Capita2, SuperPoder2;

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

    Densidade2 = Populacao2 / Area2;
    Capita2 = PIB2 / Populacao2;
    SuperPoder2 = Populacao2 + Area2 + PIB2 + Turisticos2 + Capita2 + (1 / Densidade2);


    // =====================================
    // ESCOLHA DOS DOIS ATRIBUTOS
    // =====================================

    int opcao1, opcao2;

    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;

    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");

    // PRIMEIRO ATRIBUTO
    printf("Escolha o PRIMEIRO atributo: ");
    scanf("%d", &opcao1);

    if (opcao1 < 1 || opcao1 > 5) {
        printf("Opção inválida! Encerrando.\n");
        return 0;
    }

    // SEGUNDO MENU (DINÂMICO)
    printf("\nAgora escolha o SEGUNDO atributo (não pode repetir):\n");

    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }

    printf("Escolha o segundo atributo: ");
    scanf("%d", &opcao2);

    if (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1) {
        printf("Opção inválida! Encerrando.\n");
        return 0;
    }


    // =====================================
    // FUNÇÃO PARA PEGAR VALORES
    // =====================================
    float getValor(int opcao, float d, float p, float a, float bi, int t); {
        switch (opcao) {
            case 1: return p;
            case 2: return a;
            case 3: return bi;
            case 4: return t;
            case 5: return d;
        }
        return 0;
    }

    // Valores do atributo 1
    valor1_c1 = getValor(opcao1, Densidade, Populacao, Area, PIB, Turisticos);
    valor1_c2 = getValor(opcao1, Densidade2, Populacao2, Area2, PIB2, Turisticos2);

    // Valores do atributo 2
    valor2_c1 = getValor(opcao2, Densidade, Populacao, Area, PIB, Turisticos);
    valor2_c2 = getValor(opcao2, Densidade2, Populacao2, Area2, PIB2, Turisticos2);


    // =====================================
    // SOMA DOS ATRIBUTOS
    // =====================================
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;


    // =====================================
    // RESULTADOS
    // =====================================

    printf("\n===== RESULTADOS =====\n");
    printf("Cartas: %s VS %s\n\n", Cidade, Cidade2);

    printf("Atributo 1 (opção %d): %.2f x %.2f\n", opcao1, valor1_c1, valor1_c2);
    printf("Atributo 2 (opção %d): %.2f x %.2f\n\n", opcao2, valor2_c1, valor2_c2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", Cidade, soma1);
    printf("%s: %.2f\n\n", Cidade2, soma2);

    printf("RESULTADO FINAL: ");

    // VENCEDOR FINAL
    (soma1 > soma2) ? printf("%s venceu!\n", Cidade) :
    (soma2 > soma1) ? printf("%s venceu!\n", Cidade2) :
                      printf("Empate!\n");

    return 0;
}
