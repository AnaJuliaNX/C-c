#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
   float ano, idade;
 printf("Em que ano voc� nasceu?");
 scanf("%f", &ano);
 idade = 2023 - ano;
 
   if (idade >= 18)
   printf("Voc� � maior de idade");
    else 
      printf("Voc� � menor de idade");
}
