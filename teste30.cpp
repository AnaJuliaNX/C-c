#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 int num;
 printf("Qual � o numero?");
 scanf ("%i", &num);
 if (num >= 0)
 {
 printf("\nEsse n�mero � positivo");
 }
  else {
  	printf("\nEsse n�mero � negativo");
  }
  
}
