#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  float sal, con1, con2, mult1, mult2, conta, salfin;
  printf("Qual � o seu sal�rio?\n");
  scanf("%f", &sal);
  printf("Qual � o valor de cada conta?\n");
  scanf("%f%f", &con1, &con2);
  mult1 = con1*2/100;
  mult2 = con2*2/100;
  conta = mult1+mult2;
  salfin = sal-conta;
  printf("Sobrar� do seu sal�rio: R$ %.2f", salfin);
}

