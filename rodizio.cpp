#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

//extra, rodizio de pizza, a cada 250 reais em rodizios ganha 20% de desconto

main ()
 { setlocale(LC_ALL, "Portuguese");
  float quant, rod, total;
  printf("Quantos rodizios s�o?\n");
  scanf("%f", &quant);
  rod = 50*quant;
   if (rod >= 250)
 	{  total = rod - rod*20/100;  
   printf("O rodizio teve o desconto e deu: %.2f\n", total); 
	}
    else
     printf("O rodizio n�o teve o desconto e deu %.2f\n", rod);
	   
}
