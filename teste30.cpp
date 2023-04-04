#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 int num;
 printf("Qual é o numero?");
 scanf ("%i", &num);
 if (num >= 0)
 {
 printf("\nEsse número é positivo");
 }
  else {
  	printf("\nEsse número é negativo");
  }
  
}
