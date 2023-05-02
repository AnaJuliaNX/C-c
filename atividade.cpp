#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  float a, b, c,delta, x1, x2, resul;
  printf("Digite os três valores em ordem:\n");
  scanf("%f%f%f", &a, &b, &c);
  delta = b*b - 4*a*c;
    if (delta < 0)
     { printf("Não existe nos reais\n");
	 }
	 else if (delta >= 0)
	 {
	 	 x1 = ((-1*b)+ sqrt(delta))/ (2*a);
         x2 = ((-1*b) - sqrt(delta))/(2*a);
	 	printf("X1: %.2f", x1);
	 	printf("\nx2: %.2f", x2);
	 }
}
