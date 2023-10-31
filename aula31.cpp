#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 int f, n;
 printf("\nDigite um número ");
 scanf("%i", &n);
 f = 1;
 while(n > 1)
 { f = f * n;
  n = n - 1;
 }
 printf("\nFatorial de = %i", f);
}
