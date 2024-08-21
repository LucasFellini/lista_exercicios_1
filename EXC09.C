//9. Sabe-se que:
//pé = 12 polegadas
//1 jarda = 3 pés
//1 milha = 1,760 jarda
//Faça um programa que receba uma medida em pés, faça
//as conversões a seguir e mostre os resultados.
//a) polegadas;
//b) jardas;
//c) milhas.



#include <stdio.h>

int main(){

    float jarda, milha, polegada, pe;

    printf("Informe uma medida em pés: ");
    scanf("%f", &pe);
    
    printf("\n" "O valor informado convertido em Polegadas é de: %f", pe * 12);
    printf("\n" "O valor informado convertido em Jardas é de aproximadamente: %f", pe * 0.33);
    printf("\n" "O valor informado convertido em Milhas é de: %f", pe * 5.28);
}