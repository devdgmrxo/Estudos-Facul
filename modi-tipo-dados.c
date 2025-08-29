#include <stdio.h>

int main(){

    int numeroSinal = 3000000000; //esse num. excede o int normal
    unsigned int numerosemSinal = 3000000000;

    printf("Numero com sinal: %d\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numerosemSinal);

return 0;
}