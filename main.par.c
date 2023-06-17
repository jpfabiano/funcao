#include <stdio.h>
#include <locale.h>

int numero (int n);

int main(void) {
  int n,r;
  setlocale(LC_ALL,"Portuguese");
  printf("Digite um número : ");
  scanf("%d",&n);
  r = numero (n);
  if (r == '0')
    printf("\nO número é par");
  if (r == '1')
    printf("\nO número é ímpar");
  
  return 0;
}
int numero (int n){
  if (n%2 == 0)
  return '0';
  if (n%2 == 1 || n == 1)
    return '1'; 
}