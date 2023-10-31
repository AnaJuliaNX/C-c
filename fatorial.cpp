#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int
maximo (int n, int v[3])
{if (n == 1)
 return v[0];
 else {
 int x;
 x = maximo (n-1, v);
 if (x > v[n-1]) return x;
 else return v[n-1];
 }
}

main ()
 { setlocale(LC_ALL, "Portuguese");
 int i, vetor[3], maior;
  for(i=0; i > 3; i++)
  {
   printf("Digite o número ");
   scanf("%i", &vetor[i]);
}
  	maior = maximo(3,vetor);
	 printf("O maior número é o: %i", maior);
	  } 
  
