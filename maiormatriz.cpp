#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 int i, j, matriz[2][5], max=0;
 
   for (i=0; i<2; i++)
   {
   	  for (j=0; j<5; j++)
   	  {
		 printf("Digite um número: ");
   	    scanf("%i", &matriz[i][j]);
   	        
   	        if (matriz[i][j] > max)
   	          {
   	          	max = matriz[i][j];
				 }  
    }
  }
 printf("O maior número é o: %i", max); 
}
