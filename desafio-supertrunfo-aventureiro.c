#include <stdio.h>

//declarando as variaveis

char estado1, estado2, codigo1[5], codigo2[5], cidade1[50], cidade2[50];
int populacao1, populacao2, turismo1, turismo2;
float pib1, pib2, area1, area2;

//função para coleta de dados das cartas

void coletaDados(void){

//Mensagem que deve aparecer ao começar a coleta de informações

    printf("_______________________________________\n");
    printf("Digite as informações da PRIMEIRA Carta:\n");
    printf("_______________________________________\n");

//Primeira carta

    printf("Digite uma letra para esse estado, de A-H:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta; A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf(" %4s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", cidade1);

    printf("Digite o número populacional:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turismo1);

//Essa mensagem deve aparecer na coleta das informações da segunda carta

    printf("_______________________________________\n");
    printf("Digite as informações da SEGUNDA Carta:\n");
    printf("_______________________________________\n");

//Segunda Carta

    printf("Digite uma letra para esse estado, de A-H:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta; A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%4s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", cidade2);

    printf("Digite o número populacional:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turismo2);

}

//funcao para a exposicao de dados

void mostrarDados(void){
    
    
    
    
    
    
    
    
}

