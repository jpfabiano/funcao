#include <stdio.h>
#include <locale.h>

float celsius (float f);
float fahrenheit (float c);

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  float f,c;
  char r;
  printf("Qual temperatura você quer saber? (c/f) : ");
  scanf("%c",&r);
  if (r == 'c' ){
    printf("\nQual a temperatura em fahrenheit :");
    scanf("%f",&f);
    c = celsius (f);
    printf("\nA temperatura em celisius: %.1f ",c);
  }
  if (r == 'f' ){
    printf("\nQual a temperatura em celsius :");
    scanf("%f",&c);
    f = fahrenheit (c);
    printf("\nA temperatura em fahrenheit: %.1f ",f);
  }
  
 
  return 0;
}
float celsius (float f){
  float c;
  c = (5*f-160)/9;
  return c;
}
float fahrenheit (float c){
  float f;
  f =  (9*c+160)/5;
  return f;
}