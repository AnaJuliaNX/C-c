#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 int opcao;
float num1, num2, num3, resul;
printf("Digite a op��o desejada\n");
scanf("%i", &opcao);

  switch (opcao)
  { 
   case 1: printf("Soma!\n");
     printf("Digite os dois n�meros\n");
     scanf("%f%f", &num1, &num2);
     resul = num1+num2;
     break;
   case 2: printf("Raiz quadrada!\n");
   printf("Digite o n�mero\n");
     scanf("%f", &num1);
     resul = sqrt(num1);
     break;
   case 3: printf("Elevado ao quadrado!\n");
   printf("Digite o n�mero\n");
     scanf("%f", &num1);
    resul = num1*num1; 
    break;
   case 4: printf("Multiplica��o!\n");
   printf("Digite os dois n�meros\n");
     scanf("%f%f", &num1, &num2);
    resul = num1*num2;
    break;
   case 5: printf("M�dia!\n");
   printf("Digite os tr�s n�meros\n");
     scanf("%f%f%f", &num1, &num2, &num3);
   resul = (num1+num2+num3)/3;
   break;
   default: printf("ERRO, op��o invalida");
  }
  printf("\nO resultado ser�: %.2f", resul);
}
