#include <stdio.h> 

int main() {
  int rafael, pedro, mariaFernanda, ruanny;

  printf("Idade do Rafael: ");
  scanf("%d", &rafael);

  printf("Idade do Pedro: ");
  scanf("%d", &pedro);

  printf("Idade da Maria Fernanda: ");
  scanf("%d", &mariaFernanda);

  printf("Idade da Ruanny: ");
  scanf("%d", &ruanny);

  float idadeMedia;

  idadeMedia = (rafael + pedro + mariaFernanda + ruanny)/ 4.0;

  printf("A idade média da turma é: %.2f\n", idadeMedia);
  
  return 0;
}