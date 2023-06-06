#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 int ano, sexo, expe, cinq, maistra=0, pessoa;
 float mulhe, perc;
 mulhe = 0;
 expe = 0;
 cinq = 0;
 pessoa = 0;
  printf("Informe em que ano você nasceu: ");
  scanf("%i", &ano);
  
  while (ano < 2010)
    {
  printf("\nInforme seu sexo: 1-mulher e 2-homem: ");
  scanf("%i", &sexo);
  pessoa = pessoa + 1;
  
  printf("\nInforme quantos anos de experiencia você tem: ");
  scanf("%i", &expe);
  
  if (ano <= 1973)
   {
   	 cinq = cinq + 1;
   }
  
  if (sexo == 1)
  {
  mulhe = mulhe + 1;
  }
  
  if (expe >= 5)
   maistra = maistra + 1;
   
  printf("Informe em que ano você nasceu: ");
  scanf("%i", &ano);
	}
	
perc = mulhe*100/pessoa;

printf("\nAs pessoas com mais de cinquenta anos são: %i", cinq);
printf("\nA percentagem de mulheres é: %.2f", perc);
printf("\nA quantidade de pessoas com mais de 5 anos de trabalho são: %i", maistra);
}
