#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  int cod;
  float sal, aumento, final;
  printf("Digite o c�digo\n");
  scanf("%i", &cod);
  printf("Digite o sal�rio atual\n");
  scanf("%f", &sal);
   switch (cod)
   {
    case 1: printf("Escritur�rio");
      aumento = sal*50/100;
      final = sal + aumento;
      break;
    case 2: printf("Secret�rio");
     aumento = sal*35/100;
     final = sal+aumento;
     break;
    case 3: printf("Caixa");
     aumento = sal*20/100;
     final = sal+aumento;
     break;
    case 4: printf("gerente");
     aumento = sal*10/100;
     final = sal+aumento;
     break;
    case 5: printf("Diretor");
      aumento = 0;
      final = sal+aumento;
     break;
    default: printf("ERRO");
  }
  printf("\nO aumento ser� de %.2f reais\n", aumento);
  printf("Sal�rio final: %.2f reais", final);
}
