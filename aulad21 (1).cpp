#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  float tam, alt, tam2, alt2, dist, resp;
  printf("Qual é o tamanho da escada?\n");
  scanf("%f", &tam);
  printf("Qual é a altura que deseja pregar o quadro?\n");
  scanf ("%f", &alt);
  tam2 = tam*tam;
  alt2 = alt*alt;
  dist = tam2 - alt2;
  resp = sqrt(dist);
  printf("A distância que a escada deve ficar é: %.0f\n", resp);
 	
 }
