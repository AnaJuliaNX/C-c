#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  int num1, num2;
  printf("Digite o primeiro n�mero\n");
  scanf("%i", &num1);
    printf("Digite o segundo n�mero\n");
  scanf("%i", &num2);
  
   if (num1 > num2)
  
  	printf("O n�mero maior � %i", num1);
  	 else 
  	 printf("O n�mero maior � %i", num2);
  
  
   
}
