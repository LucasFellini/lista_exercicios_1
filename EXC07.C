//7. Faça um programa que calcule e mostre a área de
//um círculo. Sabe-se que: Área = π * R2.


#include <stdio.h>
#define pi  3.14

int main () {

    float raio, area;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);
    printf("%f", pi);

    area = pi * raio*raio;

    printf("\n""A area do círculo é de: %f", area);
}