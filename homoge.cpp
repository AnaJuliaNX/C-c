#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  int valor[10], i, soma=0, pares;
   
   for(i=0; i<10; i++)
   {
   	 printf("\nDigite um valor: ");
   	 scanf("%i", &valor[i]);
   	 soma = soma + valor[i];
   	 if (valor[i]%2 == 0)
   	 {
   	 	pares++;
		}
	 else {
	 	printf("\n Não é par!");
	 }
   }
  for(i=0; i<10; i++)
  {
  	printf("\nO valor digitado foi: %i", valor[i]);
  }
  printf("\nA soma dos valores é: %i", soma);
  printf("\nA quantidade de números pares é: %i", pares);
}
