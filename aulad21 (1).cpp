#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  float tam, alt, tam2, alt2, dist, resp;
  printf("Qual � o tamanho da escada?\n");
  scanf("%f", &tam);
  printf("Qual � a altura que deseja pregar o quadro?\n");
  scanf ("%f", &alt);
  tam2 = tam*tam;
  alt2 = alt*alt;
  dist = tam2 - alt2;
  resp = sqrt(dist);
  printf("A dist�ncia que a escada deve ficar �: %.0f\n", resp);
 	
 }
