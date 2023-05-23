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
  
  printf("Digite um número: ");
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
	  
     printf("\nDigite outro número: ");
     scanf("%i", &x);
	}
	
 media = soma/quant;
 mediap = somap/quanp;
 perc = quanp*100/quant;

 printf("\nA soma é %i", soma);
 printf("\nForam digitados %i números", quant);
 printf("\nA média dos números digitados é: %.2f", media);
 printf("\nO maior número digitado é: %i", maior);
 printf("\nA média de números pares é: %.0f", mediap);
 printf("\nA percentagem será: %.2f", perc);
}
 
