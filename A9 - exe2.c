#include <stdio.h>

int sub3(int x){
return x - 3;
}

int main(void) {
  int num;
  
  printf("Digite um número inteiro: ");
  scanf("%d", &num);
  
  printf("Recebido: %d\n", num);
   
  int resultado = sub3(num);
  printf("resultado: %d\n", resultado);
  
  printf("Atual: %d ", num);

  return 0;
}

