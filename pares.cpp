#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 int i, num, pares;
 pares = 0;
 for (i=1; i<=6; i = i+1)
  {
  	printf("Digite um número\n");
  	scanf ("%i", &num);
  	 if (num % 2 == 0)
  	   {
  	   	printf("PAR S2\n");
  	   	pares = pares + 1;
	    }
	    else {
	    	printf("ÍMPAR\n");
		}
  }
  printf("Foram encontrados esse números: %i", pares);
}
