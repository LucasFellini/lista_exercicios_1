//6. Faça um programa que calcule e mostre a área de
//um triângulo. Sabe-se que: Área = (base * altura)/2.

#include <stdio.h> 

int main () {

    int base, altura, area;

    printf("Informe o valor da base: ");
    scanf("%d", &base);
    printf("Informe a altura: ");
    scanf("%d", &altura);

    area = (base * altura) / 2;

    printf("A area do triângulo é de: %d", area);
}