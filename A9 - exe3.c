#include <stdio.h>

void sub3(int *x){
    *x = *x - 3;
}

int main(void) {
  int num;
  
  printf("Digite um número inteiro: ");
  scanf("%d", &num);
 
  printf("Recebido: %d\n", num);
   
  sub3(&num);
   
  printf("Resultado: %d\n", num );
  
  printf("Atual: %d", num);

  return 0;
}

