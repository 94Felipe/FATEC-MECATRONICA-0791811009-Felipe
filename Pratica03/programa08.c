#include <stdio.h>

int main(void){
  float temperaturas[3];
  //Ler as 3 temperaturas
  int i;
  for(i = 0; i < 3; i++){
    printf("Informe a temperatura %i:", i);
    scanf("%f",&temperaturas[i]);
  }

  float soma;
  soma = 0;
  for(i = 0; i < 3; i++){
    soma = soma + temperaturas[i];
  }

  float media = soma / i;

  printf("Media dos valores: %f\n", media);

  for(i = 0; i < 3; i++){
    if( temperaturas[i] < media )
      printf("%f eh menor que a media\n", temperaturas[i]);
    else if ( temperaturas[i] > media ){
      printf("%f eh maior que a media\n", temperaturas[i]);
    } else
      printf("%f eh igual a media\n", temperaturas[i]);
  }

  return 0;
}
