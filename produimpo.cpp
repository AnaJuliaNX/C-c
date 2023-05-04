#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  float produ, pais, peso, grama, resul, impo, valor;
  printf("QUal é o código do produto?\n");
  scanf("%f", &produ);
  printf("QUal é o código do país?\n");
  scanf("%f", &pais);
  printf("Qual é o peso em quilos do produto?\n");
  scanf("%f", &peso);
  
   if (produ <= 4)
   { 
     grama = peso*1000;
     resul = grama*10;
     printf("O peso será %f", grama);
	 printf("\nE o valor será: %.2f", resul);
     printf("\n ATENÇÃO nesse país o imposto não é cobrado");
   }
   
    else if ( produ <= 7)
    {
      grama = peso*1000;
      resul = grama*25;
      impo = resul*15/100;
      valor = resul + impo;
      printf("O peso será: %f", grama);
      printf("\n O preço sem imposto era: %.2f", resul);
      printf("\nO imposto é: %.2f", impo);
	  printf("\nEntão, o valor agora é: %.2f", valor); 
	}
     else if (produ <= 10)
	 {
     	 grama = peso*1000;
      resul = grama*35;
      impo = resul*25/100;
      valor = resul + impo;
      printf("O peso será: %f", grama);
      printf("\nO preço sem imposto era: %.2f", resul);
      printf("\nO imposto é: %.2f", impo);
	  printf("\nEntão, o valor agora é: %.2f", valor); 
	 }
	 else {
	 	printf("O código do produto não existe, verifique novamente");
	 }
}
