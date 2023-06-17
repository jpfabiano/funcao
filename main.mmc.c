#include <locale.h>
#include <stdio.h>
int mdc(int a, int b);
int mmc(int a, int b, int c);
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int a, b, m, n;
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
  n = mmc(a, b, m);
  printf("\nMMC entre %d e %d = %d", a, b, n);
  return 0;
}
int mmc(int a, int b, int c) {
  int r;
  r = a * b / c;
  return r;
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