#include <stdio.h>

int main() {
 
   // Declaração das variáveis para a Carta 1
char estado1;                   // Letra do estado (A a H)
char codigo1[4];                // Código da carta (ex: A01) - array de 4 caracteres
char cidade1[100];             // Nome da cidade - suporta até 99 caracteres + \0
int populacao1;                // Número de habitantes
float area1;                   // Área da cidade em km²
float pib1;                    // Produto Interno Bruto da cidade em bilhões
int pontos1;                   // Número de pontos turísticos

// Declaração das variáveis para a Carta 2
char estado2;
char codigo2[4];
char cidade2[100];
int populacao2;
float area2;
float pib2;
int pontos2;

// Início da entrada de dados da primeira carta
printf("Carta 1 \n");

printf("Estado (A a H): ");        // Solicita o estado
scanf(" %c", &estado1);            // Lê um caractere (usa espaço antes do %c para ignorar espaços em branco anteriores)

printf("Código da Carta (ex: A01): "); 
scanf("%s", codigo1);              // Lê uma string sem espaços (ex: A01)

printf("Nome da Cidade: ");
scanf(" %[^\n]s", cidade1);        // Lê uma linha inteira com espaços até a tecla Enter

printf("População: ");
scanf("%d", &populacao1);          // Lê um número inteiro

printf("Área (em km²): ");
scanf("%f", &area1);               // Lê um número com ponto decimal

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontos1);

printf("\n");                      // Pula uma linha para separar visualmente as cartas

// Início da entrada de dados da segunda carta
printf("Carta 2 \n");

printf("Estado (A a H): ");
scanf(" %c", &estado2);

printf("Código da Carta (ex: B02): ");
scanf("%s", codigo2);

printf("Nome da Cidade: ");
scanf(" %[^\n]s", cidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área (em km²): ");
scanf("%f", &area2);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontos2);

printf("\n");                      // Final da entrada de dados

    return 0;
}
