#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  float produ, pais, peso, grama, resul, impo, valor;
  printf("QUal � o c�digo do produto?\n");
  scanf("%f", &produ);
  printf("QUal � o c�digo do pa�s?\n");
  scanf("%f", &pais);
  printf("Qual � o peso em quilos do produto?\n");
  scanf("%f", &peso);
  
   if (produ <= 4)
   { 
     grama = peso*1000;
     resul = grama*10;
     printf("O peso ser� %f", grama);
	 printf("\nE o valor ser�: %.2f", resul);
     printf("\n ATEN��O nesse pa�s o imposto n�o � cobrado");
   }
   
    else if ( produ <= 7)
    {
      grama = peso*1000;
      resul = grama*25;
      impo = resul*15/100;
      valor = resul + impo;
      printf("O peso ser�: %f", grama);
      printf("\n O pre�o sem imposto era: %.2f", resul);
      printf("\nO imposto �: %.2f", impo);
	  printf("\nEnt�o, o valor agora �: %.2f", valor); 
	}
     else if (produ <= 10)
	 {
     	 grama = peso*1000;
      resul = grama*35;
      impo = resul*25/100;
      valor = resul + impo;
      printf("O peso ser�: %f", grama);
      printf("\nO pre�o sem imposto era: %.2f", resul);
      printf("\nO imposto �: %.2f", impo);
	  printf("\nEnt�o, o valor agora �: %.2f", valor); 
	 }
	 else {
	 	printf("O c�digo do produto n�o existe, verifique novamente");
	 }
}
