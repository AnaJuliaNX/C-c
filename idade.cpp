#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 int i, ano, idade, maior, soma;
 float media;
 maior = 0;
 soma = 0;
 for (i=1; i<=10; i = i+1)
  {
  	printf("Qual � o ano que voc� nasceu?\n");
  	scanf("%i", &ano);
  	
  	idade = 2023 - ano;
  	soma = soma + idade;
  	
  	 if (idade >= 18)
  	  {
  	  printf("Voc� pode dirigir!\n");
  	   maior = maior + 1;
		}
	 else 
	 	printf("Voc� n�o pode dirigir!\n");
	 
  }
  media = soma/10;
  printf("A m�dia das idades � %.2f", media);
  printf("\nExistem %i maiores de idade", maior);
}
