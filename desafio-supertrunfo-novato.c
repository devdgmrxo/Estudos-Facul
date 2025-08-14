#include <stdio.h>

/*AVISO IMPORTANTE, EVITE COLOCAR PONTOS E VÍRGULAS NA HORA DE INSERIR AS INFORMAÇÕES, SENÃO VAI BUGAR O PROGRAMA*/

int main(){

/*classificando variáveis

- classificar as variáveis das letras dos oito estados representados de A-H
- classificar as variaveis dos codigos das cartas. A letra do estado seguida de 
um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)*/

char estado1, estado2, codigo1[5], codigo2[5], cidade1[50], cidade2[50];

/*ainda classificando variáveis

- classificar as variáveis para o num. populacional (int)
- classificar a quantidade de pontos turisticos (int)*/

int populacao1, populacao2, turismo1, turismo2;

/*ainda classificando variáveis

- classificando a variavel para o PIB (float)
- classificando a variável para a área em km^2 (float) */

float pib1, pib2, area1, area2;

/*Mensagem que deve aparecer ao começar a coleta de informações*/

    printf("_______________________________________\n");
    printf("Digite as informações da PRIMEIRA Carta:\n");
    printf("_______________________________________\n");

/*Primeira carta*/

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

/*Essa mensagemdeve aparecer na coleta das informações da segunda carta*/

    printf("_______________________________________\n");
    printf("Digite as informações da SEGUNDA Carta:\n");
    printf("_______________________________________\n");

/*Segunda Carta*/

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

/*Exibibçao das Informações das cartas*/    

    printf("-----------------------------------------\n");
    printf("-----------------CARTAS------------------\n");
    printf("-----------------------------------------\n");

    printf("_________________________________________\n");

    
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n\n", turismo1);

    printf("_________________________________________\n");

    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n\n", turismo2);

     printf("_______________________________________\n");

    
return 0;
}
