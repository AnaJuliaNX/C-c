#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  float med1, med2, med3, total;
  printf("Informe as três notas do aluno:\n");
  scanf("%f%f%f", &med1, &med2, &med3);
  total = (med1+med2+med3)/3;
   if (total >= 6.0)
     {printf("O aluno foi aprovado:)\n");
	 }
     else 
      printf("O aluno foi reprovado T-T\n");
}

