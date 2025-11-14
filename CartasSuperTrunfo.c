#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Variáveis para a Carta 1
char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

     // Variáveis para a Carta 2
      char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    printf("Desafio Cartas Super Trunfo");

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

   // Cadastro da Carta 1
     printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    getchar(); // Limpa o buffer
    
    printf("Digite o Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    // Remove o \n do final
    for(int i = 0; cidade1[i] != '\0'; i++) {
        if(cidade1[i] == '\n') {
            cidade1[i] = '\0';
            break;
        }
    }
    
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n");
    
    // Cadastro da Carta 2
    printf("=== Cadastro da Carta 2 ===\n");
    
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    getchar(); // Limpa o buffer
    
    printf("Digite o Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    // Remove o \n do final
    for(int i = 0; cidade2[i] != '\0'; i++) {
        if(cidade2[i] == '\n') {
            cidade2[i] = '\0';
            break;
        }
    }
    
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

return 0;
} 
