#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  int nota, quan1, quan2, quan3, total;
  float perc;
  
  quan1 = 0;
  quan2 = 0;
  quan3 = 0;
  
  printf("Digite sua nota: ");
  scanf("%i", &nota);
  
   while (nota != 0)
   {
   	 if (nota == 1)
   	 {
		quan1 = quan1 + 1;
	}
   	 
     else if (nota == 2)
    {
	 quan2 = quan2 + 1;
	 }
	else 
	{
		quan3 = quan3 + 1;
	}
	printf("Digite sua nota: ");
	scanf("%i", &nota);
}
  total = quan1 + quan2 + quan3;
  perc = quan1*100/total;
  
printf("A quantidade de pessoas que gostaram da peça foram: %i", quan1);
printf("\nA quantidade de pessoas que não gostaram da peça foram: %i", quan2);
printf("\nA quantidade de pessoas que votaram na peça foram: %i", total);
printf("\nO percentual de pessoas que gostaram da peça é: %.2f", perc);
}
