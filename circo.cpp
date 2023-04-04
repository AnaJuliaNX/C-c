#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 float cust, pcon, convs;
 printf("Qual o custo do show?\n");
 scanf ("%f", &cust);
 printf("Quanto custa o ingresso?");
 scanf("%f", &pcon);
 convs = cust/pcon;
 printf("A quantidade de convites que precisa vender é: ");
}
