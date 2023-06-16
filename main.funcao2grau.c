#include <stdio.h>
#include <locale.h>
#include <math.h>
int delta (int a,int b,int c);

int raiz1 (int d,int a,int b);

int raiz2 (int d,int a,int b);

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  int a, b, c, d, r1, r2; 
  printf("Digite o a : ");
  scanf("%d",&a);
  printf("\nDigite o b : ");
  scanf("%d",&b);
  printf("\nDigite o c : ");
  scanf("%d",&c);
  printf("\nSua expressão : \n%dx2 + %dx + %d = 0\n",a,b,c);
  d = delta (a,b,c);
  r1 = raiz1 (d,b,a);
  r2 = raiz2 (d,b,a);
  
  if (d >= 0){
  printf("\nDelta : %d",d);
    printf("\nRaiz 1 : %d",r1);
  printf("\nRaiz 2 : %d",r2);
  }
  else
  printf("\nDelta negativo");
  
  return 0;
}
int delta (int a, int b, int c){
  int d;
 d = (b*b)-4*a*c;
  return d;
}

int raiz1 (int d, int a, int b) {
  int r1;
  r1 = (-b + sqrt(d))/2*a;
  return r1;
}

int raiz2 (int d, int a, int b ) {
  int r2;
  r2 = (-b - sqrt(d))/2*a;
  return r2;
}