#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 float pro1, pro2, pro3, qua1, qua2, qua3, todo;
  printf("Qual o valor dos três produtos separados?\n");
  scanf("%f%f%f", &pro1, &pro2, &pro3);
  printf("Qual é a quantidade de cada produto na ordem anterior?\n");
  scanf("%f%f%f", &qua1, &qua2, &qua3);
   todo = (pro1*qua1) + (pro2*qua2) + (pro3*qua3);
    if (todo >= 500)
     printf("\nOs produtos deram mais que 500 reais");
     else 
      printf("\nOs produtos deram menos que 500 reais");
}
