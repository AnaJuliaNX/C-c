#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  float sal, venda, comi, total;
  printf("Qual � o seu sal�rio?\n");
  scanf("%f", &sal);
  printf("Quantas vendas voc� teve esse m�s?\n");
  scanf("%f", &venda);
  comi = venda*4/100;
  printf("Sua comiss�o ser� R$ %.2f\n", comi);
  total = sal+comi;
  printf("Seu sal�rio total ser�: R$ %.2f\n", total);
}
