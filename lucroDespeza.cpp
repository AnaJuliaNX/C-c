#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

float lucroPrejuizo (float receitas, float despesas)
{float s;

s = receitas + despesas;

return s;
}

main ()
 { setlocale(LC_ALL, "Portuguese");
 float receita, despesa, total; 
 
 printf("\nDigite a receita da empresa: ");
 scanf("%f", &receita);
 
 printf("\nDigite as despesas da empresa: ");
 scanf("%f", &despesa);
 
 total = lucroPrejuizo(receita, despesa);

 if (total >= 500000){
   printf("A empresa atingiu o objetivo");
 } else {
 	printf("A empresa não atingiu o objetivo");
 }
}
