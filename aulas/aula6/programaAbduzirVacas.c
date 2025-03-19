#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i, a, b;

  srand(time(NULL));

  int numeroVacasAbduzidas;

  a = 0;
  b = 20;

  // intervalo [a, b]
  numeroVacasAbduzidas = (rand() % (b - a)) + a ;
  printf("Numero de vacas a serem abduzidas: %d\n", numeroVacasAbduzidas);

  i = 0;
  while (i < numeroVacasAbduzidas){
    printf("Vaca %d abduzidada. Falta %d vacas.\n",i, numeroVacasAbduzidas - i);
    i++;
  }
  return 0;
}