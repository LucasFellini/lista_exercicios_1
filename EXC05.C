//5. Faça um programa que receba o salário de um
//funcionário e o percentual de aumento, calcule e
//mostre o valor do aumento e o novo salário.

#include <stdio.h>

int main () {

    float salario, aumento;

    printf("Informe o valor do salário: ");
    scanf("%f", &salario);
    printf("Informe a porcetagem de aumento: ");
    scanf("%f", &aumento);

    printf("O valor do aumento é: %f e o novo salário é de: %f", salario * aumento/100, salario + salario * aumento /100);
}