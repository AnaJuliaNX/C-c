#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 int i, j, matriz[2][2];
  
  for (i=0; i<2; i++)
   {
   	  for (j=0; j<2; j++)
   	   {
   	   	  printf("Digite: ");
   	   	  scanf("%i", &matriz[i][j]);
		  }
   }
}
