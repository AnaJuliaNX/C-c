#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  
  int x, soma, quant, maior, somap, quanp;
  float media, mediap, perc;
  
  soma = 0;
  quant = 0;
  maior = 0;
  somap= 0;
  quanp = 0;
  
  printf("Digite um n�mero: ");
  scanf("%i", &x);
  
   while (x != 30000)
    {
     soma = soma + x;
     quant++;
     
      if (x > maior)
      {
      	maior = x;
	  }
	  if (x % 2 == 0)
	  {
	  	somap = somap + x;
	  	quanp++;
	  }
	  
     printf("\nDigite outro n�mero: ");
     scanf("%i", &x);
	}
	
 media = soma/quant;
 mediap = somap/quanp;
 perc = quanp*100/quant;

 printf("\nA soma � %i", soma);
 printf("\nForam digitados %i n�meros", quant);
 printf("\nA m�dia dos n�meros digitados �: %.2f", media);
 printf("\nO maior n�mero digitado �: %i", maior);
 printf("\nA m�dia de n�meros pares �: %.0f", mediap);
 printf("\nA percentagem ser�: %.2f", perc);
}
 
