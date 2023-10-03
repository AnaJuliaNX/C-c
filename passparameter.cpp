#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

//Passagem de parametros por valor cria uma "cópia" com o valor na memória
int somad (int a, int b)
{int s;
printf("\na = %i, b = %i", a, b);
 a = 2*a;
 b = 2*b;
 printf("\na = %i, b = %i", a, b);
 s = a + b;
 return s;	
}

main ()
 { setlocale(LC_ALL, "Portuguese");
 int x, y, res;
 
 printf("Digite o primeiro número: ");
 scanf("%i", &x);
  printf("\nDigite o segundo número: ");
 scanf("%i", &y);
 
 res = somad(x, y);
 
 printf("\nDobro de x + dobro de y = %i", res);
 printf("\nnúmeros iniciais: x = %i e y = %i", x, y);
}
