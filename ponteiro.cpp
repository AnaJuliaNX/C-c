#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int somadref (int *a, int *b)
{int s;
*a = 2*(*a);
*b = 2*(*b);
s = *a + *b;
return s;
}

main ()
 { setlocale(LC_ALL, "Portuguese");
 int x, y, res;
 
 printf("Digite o primeiro número: ");
 scanf("%i", &x);
 printf("\nDigite o segundo número: ");
 scanf("%i", &y);
 
 res = somadref(&x,&y);
 printf("\nDobro de x + dobro de y = %i", res);
 printf("\n x = %i e y = %i", &x, y);
}
