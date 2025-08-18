#include <stdio.h>

//declarando variaveis

int prt, mtm, hist, geo, ing;
float media;

//função para entrada de dados

void coletarNotas(void){

    printf("Insira a nota de Portugues:\n");
    scanf("%d", &prt);

    printf("Insira a nota de Matematica:\n");
    scanf("%d", &mtm);

    printf("Insira a nota de Historia:\n");
    scanf("%d", &hist);

    printf("Insira a nota de Geografia:\n");
    scanf("%d", &geo);

    printf("Insira a nota de Ingles:\n");
    scanf("%d", &ing);

}

//função para a exposição dos dados

void mostrarMedia(void){

    printf("---------------\n");
    printf("Notas do aluno:\n");
    printf("---------------\n");
    printf("Portugues:%d\n", prt);
    printf("Matematica:%d\n", mtm);
    printf("Historia:%d\n", hist);
    printf("Geografia:%d\n", geo);
    printf("Ingles:%d\n", ing);
    printf("---------------\n");

//calculando médias

media = (float)(prt + mtm + hist + geo + ing) / 5;

    printf("A media desse aluno é: %.2f\n", media);

}

int main(){

    coletarNotas();
    mostrarMedia();

return 0;    
}