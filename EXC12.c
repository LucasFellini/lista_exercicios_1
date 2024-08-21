//Pedro comprou um saco de ração com peso em
//quilos. Ele possui dois gatos, para os quais fornece a
//quantidade de ração em gramas. A quantidade diária
//de ração fornecida para cada gato é sempre a mesma.
//Faça um programa que receba o peso do saco de ração
//e a quantidade de ração fornecida para cada gato,
//calcule e mostre quanto restará de ração no saco após
//cinco dias.


#include <stdio.h>

int main() {
    
    float peso_saco_kg, racao_diaria_g, peso_saco_g, racao_total_5_dias, racao_restante;

    
    printf("Informe o peso do saco de ração (em quilos): ");
    scanf("%f", &peso_saco_kg);
    printf("Informe a quantidade de ração fornecida para cada gato (em gramas): ");
    scanf("%f", &racao_diaria_g);

    peso_saco_g = peso_saco_kg * 1000;

 
    racao_total_5_dias = 2 * racao_diaria_g * 5;


    racao_restante = peso_saco_g - racao_total_5_dias;

    printf("Quantidade de ração que restará no saco após cinco dias: %.2f gramas\n", racao_restante);

    return 0;
}