#include <stdio.h>

int main() {
  int pedro=21, mariaFernanda=19, rafael=36, ruany=41;  
  int tamanhoTurma = 4;

  float idadeMedia, idadeMediaVetor;

  // criando vetor do tipo idade com tamanho igual a 4
  int idades[tamanhoTurma];
  idades[0] = 21;
  idades[1] = 19;
  idades[2] = 36;
  idades[3] = 42;

  idadeMediaVetor = 0;
  printf("\nMensagem usando vetores.\n");
  for(int i =0; i<tamanhoTurma ; i++) {
    printf("\t%d", idades[i]);
    idadeMediaVetor = idadeMediaVetor + idades[i];
  }
  
  idadeMediaVetor = idadeMediaVetor/4.0;
  printf("\nIdade media via vetor: %f\n\n", idadeMediaVetor);

  
  
  printf("\n\nMensagem usando o meio padrao.");
  printf("\n\t%d", pedro);
  printf("\t%d", mariaFernanda);
  printf("\t%d", rafael);
  printf("\t%d\n\n", ruany);

  idadeMedia = (pedro + mariaFernanda + rafael + ruany)/4.0;
  printf("\nIdade media: %f\n\n", idadeMedia);

  
  return 0;
}