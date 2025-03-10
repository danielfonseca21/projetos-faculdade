#include <stdio.h>
#include <string.h>


typedef struct {
    char estado[30];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;


float calcularDensidadePopulacional(Carta c) {
    return c.populacao / c.area;
}


float calcularPibPerCapita(Carta c) {
    return c.pib / c.populacao;
}


int main() {
    // Criando as duas cartas para comparação
    Carta carta1 = {"São Paulo", "SP001", "São Paulo", 12300000, 1521.11, 700000, 200};
    Carta carta2 = {"Rio de Janeiro", "RJ001", "Rio de Janeiro", 6000000, 1182.34, 600000, 150};

  
    char atributo_comparacao[] = "População";

   
    int valor_carta1, valor_carta2;
    float valor_densidade_carta1, valor_densidade_carta2;

    
    if (strcmp(atributo_comparacao, "População") == 0) {
        valor_carta1 = carta1.populacao;
        valor_carta2 = carta2.populacao;

        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.populacao);

        if (valor_carta1 > valor_carta2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        } else if (valor_carta2 > valor_carta1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    
    else if (strcmp(atributo_comparacao, "PIB") == 0) {
        valor_carta1 = carta1.pib;
        valor_carta2 = carta2.pib;

        printf("Comparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s (%s): %.2f\n", carta1.cidade, carta1.estado, carta1.pib);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.cidade, carta2.estado, carta2.pib);

        if (valor_carta1 > valor_carta2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        } else if (valor_carta2 > valor_carta1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    else if (strcmp(atributo_comparacao, "Área") == 0) {
        valor_carta1 = carta1.area;
        valor_carta2 = carta2.area;

        printf("Comparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", carta1.cidade, carta1.estado, carta1.area);
        printf("Carta 2 - %s (%s): %.2f km²\n", carta2.cidade, carta2.estado, carta2.area);

        if (valor_carta1 > valor_carta2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        } else if (valor_carta2 > valor_carta1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
   
    else if (strcmp(atributo_comparacao, "Densidade Populacional") == 0) {
        valor_densidade_carta1 = calcularDensidadePopulacional(carta1);
        valor_densidade_carta2 = calcularDensidadePopulacional(carta2);

        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.2f habitantes por km²\n", carta1.cidade, carta1.estado, valor_densidade_carta1);
        printf("Carta 2 - %s (%s): %.2f habitantes por km²\n", carta2.cidade, carta2.estado, valor_densidade_carta2);

        if (valor_densidade_carta1 < valor_densidade_carta2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        } else if (valor_densidade_carta2 < valor_densidade_carta1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    
    else if (strcmp(atributo_comparacao, "PIB per capita") == 0) {
        valor_densidade_carta1 = calcularPibPerCapita(carta1);
        valor_densidade_carta2 = calcularPibPerCapita(carta2);

        printf("Comparação de cartas (Atributo: PIB per capita):\n");
        printf("Carta 1 - %s (%s): %.2f\n", carta1.cidade, carta1.estado, valor_densidade_carta1);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.cidade, carta2.estado, valor_densidade_carta2);

        if (valor_densidade_carta1 > valor_densidade_carta2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        } else if (valor_densidade_carta2 > valor_densidade_carta1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    return 0;
}
