#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


int main() {
  char placa[7];
  int i, a, b;
  srand(time(NULL));

  for (i=0 ; i< 7; i++){
    // [a,b] == [65, 90]
    if (i<3){
      a = 65;
      b = 90;
      placa[i] = (rand() % (b - a + 1)) + a;
    }
    else if (i==3){
      a = 48;
      b = 57;
      placa[i] = (rand() % (b - a + 1)) + a;
    }
    else if (i==4){
      a = 65;
      b = 90;
      placa[i] = (rand() % (b - a + 1)) + a;
    }
    else {
      a = 48;
      b = 57;
      placa[i] = (rand() % (b - a + 1)) + a;
    }
    
  }

  printf("Placa: %s\n", placa);
  
  return 0;
}