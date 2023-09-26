#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

bool par(int x)
{
  bool p;
if (x%2 == 0)
 {
 	p = true;
 }else {
 	p = false;
 }
 return p;
}

int soma (int a, int b)
{
	int s;
	s = a + b;
	return s;
}

main ()
 { setlocale(LC_ALL, "Portuguese");
 int num, p1, num2, resposta;
 
 printf("Digite um número: ");
 scanf("%i", &num);
 if (par(num))
 {
 	printf("\nPAR!");
 }else {
 	printf("\nIMPAR");
 }
 
 printf("Digite outro número: ")
 scanf("%i", &num2);
 
}
