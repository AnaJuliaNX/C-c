#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  float sal, venda, comi, total;
  printf("Qual é o seu salário?\n");
  scanf("%f", &sal);
  printf("Quantas vendas você teve esse mês?\n");
  scanf("%f", &venda);
  comi = venda*4/100;
  printf("Sua comissão será R$ %.2f\n", comi);
  total = sal+comi;
  printf("Seu salário total será: R$ %.2f\n", total);
}
