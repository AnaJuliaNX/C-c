#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 float salmin, sal[5], media, total;
 int i, mais=0;
 
 printf("Digite o sal�rio minimo: ");
 scanf("%f", &salmin);

 for (i=0; i<5; i++)
 { 
   printf("\nDigite o sal�rio do funcion�rio: ");
   scanf("%f", &sal[i]);
   
   if (sal[i] > salmin)
     {
     	mais = mais + 1;
	 }
    media= media + sal[i];
 }
 
  for (i=0; i<5; i++);
    {
    	if(sal[i] > sal[i]);
	}
total = media/5;

printf("\n %i ganham mais que um sal�rio minimo", mais);
printf("\nM�dia: %f", total); 
  
}
