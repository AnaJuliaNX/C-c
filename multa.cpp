#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  float sal, con1, con2, mult1, mult2, conta, salfin;
  printf("Qual é o seu salário?\n");
  scanf("%f", &sal);
  printf("Qual é o valor de cada conta?\n");
  scanf("%f%f", &con1, &con2);
  mult1 = con1*2/100;
  mult2 = con2*2/100;
  conta = mult1+mult2;
  salfin = sal-conta;
  printf("Sobrará do seu salário: R$ %.2f", salfin);
}

