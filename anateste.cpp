#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  int pais;
  float produ, peso, grama, resul, impo, valor;
  printf("Qual � o c�digo do pa�s?\n");
  scanf("%i", &pais);
  printf("Qual � o peso em quilos do produto?\n");
  scanf("%f", &peso);
    switch (pais)
    {
    case 1:  printf("Qual � o c�digo do produto?\n");
             scanf("%f", &produ);
   if ((produ >= 1) && (produ <= 4))
   { 
     grama = peso*1000;
     resul = grama*10;
     printf("O peso ser� %.2f", grama);
	 printf("\nE o valor ser�: %.2f", resul);
     printf("\n ATEN��O nesse pa�s o imposto n�o � cobrado");
   }
    else if ((produ >= 5) && (produ <= 7))
    {
      grama = peso*1000;
      resul = grama*25;
      printf("O peso ser�: %.2f", grama);
      printf("\nO pre�o ser�: %.2f", resul);
       printf("\nATEN��O nesse pa�s o imposto n�o � cobrado");
	}
     else if ((produ >= 8) && (produ <= 10))
	 {
      grama = peso*1000;
      resul = grama*35;
      printf("O peso ser�: %.2f", grama);
      printf("\nO pre�o sem imposto era: %.2f", resul); 
	 }
	 break; 
	 
	case 2: printf("Qual � o c�digo do produto?\n");
	        scanf("%f", &produ);
	  if ((produ >= 1) && (produ <= 4))
   { 
     grama = peso*1000;
     resul = grama*10;
     printf("O peso ser� %.2f", grama);
	 printf("\nE o valor ser�: %.2f", resul);
   }
   
    else if ((produ >= 5) && (produ <= 7))
    {
      grama = peso*1000;
      resul = grama*25;
      impo = resul*15/100;
      valor = resul + impo;
      printf("O peso ser�: %.2f", grama);
      printf("\nO pre�o sem imposto era: %.2f", resul);
      printf("\nO imposto �: %.2f", impo);
	  printf("\nEnt�o, o valor agora �: %.2f", valor); 
	}
     else if ((produ >= 8) && (produ <= 10))
	 {
       grama = peso*1000;
      resul = grama*35;
      impo = resul*15/100;
      valor = resul + impo;
      printf("O peso ser�: %.2f", grama);
      printf("\nO pre�o sem imposto era: %.2f", resul);
      printf("\nO imposto �: %.2f", impo);
	  printf("\nEnt�o, o valor agora �: %.2f", valor); 
	 }
	  break;
	  	
	 case 3:  printf("Qual � o c�digo do produto?\n");
             scanf("%f", &produ);
	 
	  if ((produ <= 1) && (produ >= 4))
   { 
     grama = peso*1000;
     resul = grama*10;
     impo = resul*25/100;
     valor = resul + impo;
     printf("O peso ser�: %.2f", grama);
     printf("\nO pre�o sem imposto era: %.2f", resul);
     printf("\nO imposto �: %.2f", impo);
	 printf("\nEnt�o, o valor agora �: %.2f", valor); 
   }
   
    else if ((produ >= 5) && (produ <= 7))
    {
      grama = peso*1000;
      resul = grama*25;
      impo = resul*25/100;
      valor = resul + impo;
      printf("O peso ser�: %.2f", grama);
      printf("\nO pre�o sem imposto era: %.2f", resul);
      printf("\nO imposto �: %.2f", impo);
	  printf("\nEnt�o, o valor agora �: %.2f", valor); 
	}
     else if ((produ >= 8) && (produ <= 10))
	 {
      grama = peso*1000;
      resul = grama*35;
      impo = resul*25/100;
      valor = resul + impo;
      printf("O peso ser�: %.2f", grama);
      printf("\nO pre�o sem imposto era: %.2f", resul);
      printf("\nO imposto �: %.2f", impo);
	  printf("\nEnt�o, o valor agora �: %.2f", valor); 
	 }
    default: printf("O c�digo digitado n�o existe, favor selecionar outro");
}  
}
