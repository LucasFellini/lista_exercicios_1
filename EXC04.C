//4. Faça um programa que receba o salário de um
//funcionário, calcule e mostre o novo salário,
//sabendo-se que este sofreu um aumento de 25%.

#include <stdio.h>

int main () {

    float salario;

    printf("Informe o valor do salário: ");
    scanf("%f", &salario);

    printf("O novo salário é de: %f", salario*1.25);
}