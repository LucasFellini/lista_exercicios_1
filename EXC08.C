//8. Faça um programa que receba um número positivo e
//maior que zero, calcule e mostre:
//a) o número digitado ao quadrado;
//b) o número digitado ao cubo;
//c) a raiz quadrada do número digitado;
//d) a raiz cúbica do número digitado.


#include <stdio.h>

int main () {

    int n1;

    printf("Informe um número positivo maior que zero: ");
    scanf("%d", &n1);

    printf("\n" "A) o número digitado ao quadrado é de: %d", n1*2);
    printf("\n""B) o número digitado ao cubo é de: %d", n1*3);
    printf("\n""C) a raiz quadrada do número digitado é de: %f", sqrt(n1));
    printf("\n""D) a raiz cubica do número digitado é de: %f", pow(n1, 1.0 / 3.0));
}