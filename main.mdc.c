#include <locale.h>
#include <stdio.h>
int mdc(int a, int b);

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int a, b, m;
  printf("Digite o primeiro número : ");
  scanf("%d", &a);
  printf("\nDigite o segundo número : ");
  scanf("%d", &b);
  if (a > b)
    m = mdc(a, b);
  if (a < b)
    m = mdc(b, a);
  if (a == b)
    m = a;
  printf("\nMDC entre %d e %d = %d", a, b, m);

  return 0;
}
int mdc(int a, int b) {
  int r;
  do {
    r = a % b;
    a = b;
    b = r;
  } while (r != 0);
  return a;
}