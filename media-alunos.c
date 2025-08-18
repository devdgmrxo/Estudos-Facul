#include <stdio.h>

float prt, mtm, hist, geo, ing;
float media;


//função para entrada de dados

void coletarNotas(void){

    printf("Insira a nota de Portugues:\n");
    scanf("%.2f", prt);

    printf("Insira a nota de Matematica:\n");
    scanf("%.2f", mtm);

    printf("Insira a nota de Historia:\n");
    scanf("%.2f", hist);

    printf("Insira a nota de Geografia:\n");
    scanf("%.2f", geo);

    printf("Insira a nota de Ingles:\n");
    scanf("%.2f", ing);

}

//função para a exposição dos dados

void mostrarMedia(void){

    printf("---------------\n");
    printf("Notas do aluno:\n");
    printf("---------------\n");
    printf("Portugues:%.2f\n", prt);
    printf("Matematica:%.2f\n", mtm);
    printf("Historia:%.2f\n", hist);
    printf("Geografia:%.2f\n", geo);
    printf("Ingles:%.2f\n", ing);
    printf("---------------\n");

}