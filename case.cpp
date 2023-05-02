#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  int cod;
  float sal, aumento, final;
  printf("Digite o código\n");
  scanf("%i", &cod);
  printf("Digite o salário atual\n");
  scanf("%f", &sal);
   switch (cod)
   {
    case 1: printf("Escriturário");
      aumento = sal*50/100;
      final = sal + aumento;
      break;
    case 2: printf("Secretário");
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
  printf("\nO aumento será de %.2f reais\n", aumento);
  printf("Salário final: %.2f reais", final);
}
