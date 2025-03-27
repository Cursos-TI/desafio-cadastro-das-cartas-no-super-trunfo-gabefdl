#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[30];
    char codigo[30];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos;
    
    char ESTADO[30];
    char CODIGO[30];
    char CIDADE[30];
    int POPULACAO;
    float AREA;
    float PIB;
    int PONTOS;
    printf("Cidade 1\nDigite o Estado 1:");
    scanf("%s", &estado );
    printf("\n");
    printf("Digite o Código da Carta 1: ");
    scanf("%s", &codigo );
    printf("\n");
    printf("Digite o nome da cidade 1: ");
    scanf("%s", &cidade );
    printf("\n");
    printf("Digite o número da população 1: ");
    scanf("%i", &populacao);
    printf("\n");
    printf("Digite o valor da área 1: ");
    scanf("%f", &area);
    printf("\n");
    printf("Digite o valor do PIB 1: ");
    scanf("%f", &pib);
    printf("\n");
    printf("Digite o número de pontos turísticos 1: ");
    scanf("%i", &pontos);
    printf("\n");
    
    
    
    printf("Cidade 2\n");
    printf("Digite o Estado 2: ");
    scanf("%s", &ESTADO);
    printf("\n");
    printf("Digite o Código da Carta 2: ");
    scanf("%s", &CODIGO );
    printf("\n");
    printf("Digite o nome da cidade 2: ");
    scanf("%s", &CIDADE );
    printf("\n");
    printf("Digite o número da população 2: ");
    scanf("%i", &POPULACAO);
    printf("\n");
    printf("Digite o valor da área 2: ");
    scanf("%f", &AREA);
    printf("\n");
    printf("Digite o valor do PIB 2: ");
    scanf("%f", &PIB);
    printf("\n");
    printf("Digite o número de pontos turísticos 2: ");
    scanf("%i", &PONTOS);
    printf("\n");
    
    printf("Cidade 1 \nEstado: %s \n", estado);
    printf("Código da Carta: %s \n", codigo); 
    printf("Nome da Cidade: %s \n", cidade); 
    printf("População: %i \n", populacao); 
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Pontos Turísticos: %i \n", pontos);
    printf("\n");
    
    printf("Cidade 2 \nEstado: %s \n", ESTADO);
    printf("Código da Carta: %s \n", CODIGO); 
    printf("Nome da Cidade: %s \n", CIDADE); 
    printf("População: %i \n", POPULACAO); 
    printf("Área: %f \n", AREA);
    printf("PIB: %f \n", PIB);
    printf("Pontos Turísticos: %i \n", PONTOS);
    
    }
   
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
