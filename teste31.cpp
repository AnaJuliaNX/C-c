#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  int num1, num2;
  printf("Digite o primeiro número\n");
  scanf("%i", &num1);
    printf("Digite o segundo número\n");
  scanf("%i", &num2);
  
   if (num1 > num2)
  
  	printf("O número maior é %i", num1);
  	 else 
  	 printf("O número maior é %i", num2);
  
  
   
}
