#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 int i, num, numai, numen;
 float altura, maior, menor;
  maior = 0;
  menor = 3;
  for (i=1; i <=5; i = i+1)
  {
  	printf("Informe seu número de identificação: ");
  	scanf("%i", &num);
  	printf("Informe sua altura: ");
  	scanf("%f", &altura);
  	 
  	 if ( altura > maior)
  	 {
  	 	maior = altura;
  	 	numai = num;
	   }
	   if (altura < menor)
	   {
	   	 menor = altura;
	   	 numen = num;
	   }
  }
printf("O mais alto tem %.2f de altura e identificação %i", maior, numai);
printf("\nO mais baixo tem %.2f de altura e identificação %i", menor, numen);
}
