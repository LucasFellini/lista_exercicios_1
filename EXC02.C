//2. Faça um programa que receba três notas, calcule e
//mostre a média aritmética

#include <stdio.h> 

int main () {
    
    float n1, n2, n3, media;

    printf("Informe a primera nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 +n3) / 3;

    printf("A media das notas é de: %f", media);

}