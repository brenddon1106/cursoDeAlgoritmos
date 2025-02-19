#include <stdio.h>

int main() {

  int cpf, senha;

  printf("Digite seu CPF: ");
  scanf("%d", &cpf);

  printf("Digite sua senha: ");
  scanf("%d", &senha);

  printf("Seu CPF é: %d\n", cpf);
  printf("Sua senha é: %d\n", senha);

  return 0;
}