#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  int pais;
  float produ, peso, grama, resul, impo, valor;
  printf("Qual é o código do país?\n");
  scanf("%i", &pais);
  printf("Qual é o peso em quilos do produto?\n");
  scanf("%f", &peso);
    switch (pais)
    {
    case 1:  printf("Qual é o código do produto?\n");
             scanf("%f", &produ);
   if ((produ >= 1) && (produ <= 4))
   { 
     grama = peso*1000;
     resul = grama*10;
     printf("O peso será %.2f", grama);
	 printf("\nE o valor será: %.2f", resul);
     printf("\n ATENÇÃO nesse país o imposto não é cobrado");
   }
    else if ((produ >= 5) && (produ <= 7))
    {
      grama = peso*1000;
      resul = grama*25;
      printf("O peso será: %.2f", grama);
      printf("\nO preço será: %.2f", resul);
       printf("\nATENÇÃO nesse país o imposto não é cobrado");
	}
     else if ((produ >= 8) && (produ <= 10))
	 {
      grama = peso*1000;
      resul = grama*35;
      printf("O peso será: %.2f", grama);
      printf("\nO preço sem imposto era: %.2f", resul); 
	 }
	 break; 
	 
	case 2: printf("Qual é o código do produto?\n");
	        scanf("%f", &produ);
	  if ((produ >= 1) && (produ <= 4))
   { 
     grama = peso*1000;
     resul = grama*10;
     printf("O peso será %.2f", grama);
	 printf("\nE o valor será: %.2f", resul);
   }
   
    else if ((produ >= 5) && (produ <= 7))
    {
      grama = peso*1000;
      resul = grama*25;
      impo = resul*15/100;
      valor = resul + impo;
      printf("O peso será: %.2f", grama);
      printf("\nO preço sem imposto era: %.2f", resul);
      printf("\nO imposto é: %.2f", impo);
	  printf("\nEntão, o valor agora é: %.2f", valor); 
	}
     else if ((produ >= 8) && (produ <= 10))
	 {
       grama = peso*1000;
      resul = grama*35;
      impo = resul*15/100;
      valor = resul + impo;
      printf("O peso será: %.2f", grama);
      printf("\nO preço sem imposto era: %.2f", resul);
      printf("\nO imposto é: %.2f", impo);
	  printf("\nEntão, o valor agora é: %.2f", valor); 
	 }
	  break;
	  	
	 case 3:  printf("Qual é o código do produto?\n");
             scanf("%f", &produ);
	 
	  if ((produ <= 1) && (produ >= 4))
   { 
     grama = peso*1000;
     resul = grama*10;
     impo = resul*25/100;
     valor = resul + impo;
     printf("O peso será: %.2f", grama);
     printf("\nO preço sem imposto era: %.2f", resul);
     printf("\nO imposto é: %.2f", impo);
	 printf("\nEntão, o valor agora é: %.2f", valor); 
   }
   
    else if ((produ >= 5) && (produ <= 7))
    {
      grama = peso*1000;
      resul = grama*25;
      impo = resul*25/100;
      valor = resul + impo;
      printf("O peso será: %.2f", grama);
      printf("\nO preço sem imposto era: %.2f", resul);
      printf("\nO imposto é: %.2f", impo);
	  printf("\nEntão, o valor agora é: %.2f", valor); 
	}
     else if ((produ >= 8) && (produ <= 10))
	 {
      grama = peso*1000;
      resul = grama*35;
      impo = resul*25/100;
      valor = resul + impo;
      printf("O peso será: %.2f", grama);
      printf("\nO preço sem imposto era: %.2f", resul);
      printf("\nO imposto é: %.2f", impo);
	  printf("\nEntão, o valor agora é: %.2f", valor); 
	 }
    default: printf("O código digitado não existe, favor selecionar outro");
}  
}
