// 3. Faça um programa que receba três notas e seus respectivos pesos,
// calcule e mostre a média ponderada.

#include <stdio.h>

int main() {

  int p1, p2, p3;
  float n1, n2, n3, media;

  printf("Informe a primeira nota: ");
  scanf("%f", &n1);
  printf("Informe o primeiro peso: ");
  scanf("%d", &p1);
  printf("Informe a segunda nota: ");
  scanf("%f", &n2);
  printf("Informe o segundo peso: ");
  scanf("%d", &p2);
  printf("Informe a terceira nota: ");
  scanf("%f", &n3);
  printf("Informe o terceiro peso: ");
  scanf("%d", &p3);

  media = (p1 * n1 + p2 * n2 + p3 * n3) / (p1 + p2 + p3);

  printf("A media ponderada é de: %f", media);
}
