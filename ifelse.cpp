#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
   float ano, idade;
 printf("Em que ano você nasceu?");
 scanf("%f", &ano);
 idade = 2023 - ano;
 
   if (idade >= 18)
   printf("Você é maior de idade");
    else 
      printf("Você é menor de idade");
}
