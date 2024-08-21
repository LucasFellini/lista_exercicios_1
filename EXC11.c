//11. Faça um programa que receba o número de horas
//trabalhadas e o valor do salário mínimo, calcule e mostre o
//salário a receber, seguindo estas regras:
//a) a hora trabalhada vale a metade do salário mínimo.
//b) o salário bruto equivale ao número de horas
//trabalhadas multiplicado pelo valor da hora trabalhada.
//c) o imposto equivale a 3% do salário bruto.
//d) o salário a receber equivale ao salário bruto menos o
//imposto.


#include <stdio.h>

int main() {
    
    float salario_minimo, horas_trabalhadas, valor_hora, salario_bruto, imposto, salario_a_receber;

    printf("Informe o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    valor_hora = salario_minimo / 2;

    salario_bruto = horas_trabalhadas * valor_hora;

    imposto = salario_bruto * 0.03;

    salario_a_receber = salario_bruto - imposto;

    printf("Valor da hora trabalhada: R$ %.2f\n", valor_hora);
    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto (3%%): R$ %.2f\n", imposto);
    printf("Salário a receber: R$ %.2f\n", salario_a_receber);


}