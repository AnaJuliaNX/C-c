#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  int x1, x2, ope;
  float res;
  
   printf("Digite um n�mero: ");
   scanf("%i", &x1);
   printf("Digite o outro n�mero: ");
   scanf("%i", &x2);
   printf("Digite +1, 2-, 3* ou 4/");
   scanf("%i", &ope);
   
    switch (ope)
       {
	    case 1: res = x1 + x2;
         break;
        
        case 2: res = x1 - x2;
         break;
         
        case 3: res = x1 * x2;
         break;
         
        case 4: res = x1 / x2;
         break;
         
        default: printf("Opera��o inv�lida");
	   }
	   
	printf("O resultado da opera��o ser� %.2f:", res);
}
