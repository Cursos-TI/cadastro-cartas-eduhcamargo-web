#include <stdio.h>
#include <string.h>

int main(){
// Carta 1 - Brasil. Dados fixos.
    char nome1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8516000.0;
    float pib1 = 2.0;
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;

//Carta 2 - Portugal. Dados fixos.
    char nome2[50] = "Portugal";
    int populacao2 = 1040000;
    float area2 = 92090.0;
    float pib2 = 0.27;
    int pontosTuristicos2 = 35;
    float densidade2 = populacao2 / area2;

    int opcao;
// Menu
    printf("*** SUPER TRUNFO ***\n");
    printf("Carta 01: %s\n", nome1);
    printf("Carta 02: %s\n", nome2);

    printf("Escolha o atributo para comparar: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", nome1, nome2);

//Switch Comparações:
    switch (opcao)
    {
    case 1: //População
        printf("População: %d vs %d\n", populacao1, populacao2);
        if (populacao1 > populacao2)
        {
            printf("%s VENCEU!\n", nome1);
        } else if (populacao1 < populacao2)
        {
            printf("%s VENCEU!\n", nome2);
        } else
        {
            printf("EMPATE!\n");
        }  
        break;

    case 2: //Área
        printf("Área: %.2f Km² vs %.2f Km²\n", area1, area2);
        if (area1 > area2)
        {
            printf("%s VENCEU!\n", nome1);
        } else if (area1 < area2)
        {
            printf("%s VENCEU!\n", nome2);
        } else
        {
            printf("EMPATE!\n");
        }  
        break;
    
    case 3: //PIB
        printf("PIB: %.2f trilhões vs %.2f trilhões\n", pib1, pib2);
        if (pib1 > pib2)
        {
            printf("%s VENCEU!\n", nome1);
        } else if (pib1 < pib2)
        {
            printf("%s VENCEU!\n", nome2);
        } else
        {
            printf("EMPATE!\n");
        }  
        break;

    case 4: //Pontos Turísticos
        printf("Pontos Turísticos: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("%s VENCEU!\n", nome1);
        } else if (pontosTuristicos1 < pontosTuristicos2)
        {
            printf("%s VENCEU!\n", nome2);
        } else
        {
            printf("EMPATE!\n");
        }  
        break;

    case 5: //Densidade Demográfica (regra é invertida)
        printf("Densidade Demográfica: %.2f hab/km² vs %.2f hab/km²\n", densidade1, densidade2);
        if (densidade1 < densidade2)
        {
            printf("%s VENCEU!\n", nome1);
        } else if (densidade1 > densidade2)
        {
            printf("%s VENCEU!\n", nome2);
        } else
        {
            printf("EMPATE!\n");
        }  
        break;
    default:
        printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}