#include <stdio.h>
#include <string.h>

int main() {
//Variáveis Cartas
    char pais1[20] = "Brasil", pais2[20] = "Japão";
    float populacao1 = 214.0, populacao2 = 152.0;
    float area1 = 8516.0, area2 = 377.0;
    float pib1 = 2.0, pib2 = 5.0;
    float densidade1 = populacao1 / area1, densidade2 = populacao2 / area2;

    int menu, atributo1, atributo2;

    printf("--- SUPER TRUNFO DOS PAÍSES ---\n");
    printf("1. Iniciar jogo\n");
    printf("2. Sair\n");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("\nVocÇe iniciou o jogo!\n");

//Menu de Atributos
//Atributo 01
        printf("\nEscolha o primeiro atributo:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Demográfica\n");
        printf("Opção: ");
        scanf("%d", &atributo1);
//Atributo 02
        printf("\nEscolha o Segundo atributo (Diferente do Primeiro):\n");

        if (atributo1 == 1)
        {
            printf("2 - Área\n3 - PIB\n4 - Densidade Demográfica\n");
        } else if (atributo1 == 2)
        {
            printf("1 - Populacao\n3 - PIB\n4 - Densidade Demografica\n");
        } else if (atributo1 == 3)
        {
            printf("1 - Populacao\n2 - Area\n4 - Densidade Demografica\n");
        } else if (atributo1 == 4)
        {
            printf("1 - Populacao\n2 - Area\n3 - PIB\n");
        } else
        {
            printf("Opção Inválida.");
            return 0;
        }

        printf("Opção: ");
        scanf("%d", &atributo2);

        if (atributo1 == atributo2)
        {
            printf("\nVocê não pode escolher o mesmo atributo duas vezes!\n");
            return 0;
        }
        
//Variáveis Valores Comparados
        float valor1_a1 = 0, valor2_a1 = 0;
        float valor1_a2 = 0, valor2_a2 = 0;
        float soma1 = 0, soma2 = 0;

    //Atributo 01
    switch (atributo1)
    {
    case 1:
        valor1_a1 = populacao1;
        valor2_a1 = populacao2;
        break;
    case 2:
        valor1_a1 = area1;
        valor2_a1 = area2;
        break;
    case 3:
        valor1_a1 = pib1;
        valor2_a1 = pib2;
        break;
    case 4:
        valor1_a1 = densidade1;
        valor2_a1 = densidade2;
        break;
    default:
        printf("Atributo Inválido.\n");
        return 0;
        break;
    }
    
    //Atributo 02
    switch (atributo2)
    {
    case 1:
        valor1_a2 = populacao1;
        valor2_a2 = populacao2;
        break;
    case 2:
        valor1_a2 = area1;
        valor2_a2 = area2;
        break;
    case 3:
        valor1_a2 = pib1;
        valor2_a2 = pib2;
        break;
    case 4:
        valor1_a2 = densidade1;
        valor2_a2 = densidade2;
        break;
    
    default:
        printf("Atributo Inválido.\n");
        return 0;
        break;
    }

    //Comparações:

    float pontos1_a1 = (atributo1 == 4) ? (valor1_a1 < valor2_a1 ? 1 : 0) : (valor1_a1 > valor2_a1 ? 1 : 0);
    float pontos2_a1 = (atributo1 == 4) ? (valor2_a1 < valor1_a1 ? 1 : 0) : (valor2_a1 > valor1_a1 ? 1 : 0);

    float pontos1_a2 = (atributo2 == 4) ? (valor1_a2 < valor2_a2 ? 1 : 0) : (valor1_a2 > valor2_a2 ? 1 : 0);
    float pontos2_a2 = (atributo2 == 4) ? (valor2_a2 < valor1_a2 ? 1 : 0) : (valor2_a2 > valor1_a2 ? 1 : 0);

    //Soma
    soma1 = valor1_a1 + valor1_a2;
    soma2 = valor2_a1 + valor2_a2;

//Resultado
    printf("\n--- Resultado da Comparação ---\n");
    printf("País 1: %s\n", pais1);
    printf("País 2: %s", pais2);

    printf("\nAtributo 1: %.2f vs %2.f\n", valor1_a1, valor2_a1);
    printf("Atributo 2: %.2f vs %.2f\n", valor1_a2, valor2_a2);

    printf("\nSoma dos Atributos: \n%s: %.2f\n%s: %.2f\n", pais1, soma1, pais2, soma2);

    if (soma1 > soma2)
    {
        printf("\n%s venceu a rodada!\n", pais1);
    } else if (soma2 > soma1)
    {
        printf("\n%s venceu a rodada!\n", pais2);
    } else
    {
        printf("\nEmpate!\n");
    }
        break;
    case 2:
        printf("\nJogo encerrado. Até mais!\n");
        break;

    default:
        printf("\nOpção inválida! Tente novamente.\n");
        break;
    }

return 0;

}
