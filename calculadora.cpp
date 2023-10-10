#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

float somaOsTres (float a, float b, float c) 
{float total; 
total = a + b + c;
return total;	
}

float subtraiDois (float a, float b)
{float total;
total = a - b;
return total;	
}

float multiplicaDois (float a, float b)
{float total;
total = a * b;
return total;	
}

float divideDois (float a, float b)
{float total;
if (a != 0 || b != 0){
total = a / b;
return total;	
}else {
	printf("O número não pode ser zero");
}
}

float mediaTres (float a, float b, float c)
{float total;
total = (a + b + c)/3;
return total;
}

main ()
 { setlocale(LC_ALL, "Portuguese");
 float numero1, numero2, numero3, somaTres, subtrai, multiplica, divide, media;
 int opcao;
 
 printf("Digite os três números: ");
 scanf("%f%f%f", &numero1, &numero2, &numero3);
 	     
 printf("\nDigite o número referente a uma das op??es:");
 printf("\n1-Soma dos três número");
 printf("\n2-Subtração de dois deles");
 printf("\n3-Multiplicação de dois deles");
 printf("\n4-Divisão de dois deles");
 printf("\n5-Média entre os três");
 printf("\n6-Sair\n");
 scanf("%i", &opcao);
 
 while(opcao != 6)
 	{
	 switch(opcao)
 	  {
 	     case 1: printf("Soma!");
 	     somaTres = somaOsTres(numero1, numero2, numero3);
 	     printf("\nO resultado é: %.2f", somaTres);
 	     break;
 	     
 	     case 2: printf("Subtração!");
 	     subtrai = subtraiDois(numero1, numero2);
 	     printf("\nO resultado é: %.2f", subtrai);
 	     break;
 	     
 	     case 3: printf("Multiplicação!");
 	     multiplica = multiplicaDois(numero1, numero2);
 	     printf("\nO resultado é: %.2f", multiplica);
 	     break;
 	     
 	     case 4: printf("Divisão!");
 	     divide = divideDois(numero1, numero2);
 	      printf("\nO resultado é: %.2f", divide);
		 break;
		 
		 case 5: printf("Média!");
		 media = mediaTres(numero1, numero2, numero3);
		 printf("\nO resultado é: %.2f", media);
		 break;
		
 	  default: printf("ERROR!");   
	}

 printf("\nDigite o número referente a uma das opções:");
 printf("\n1-Soma dos três número");
 printf("\n2-Subtração de dois deles");
 printf("\n3-Multiplicação de dois deles");
 printf("\n4-Divisão de dois deles");
 printf("\n5-Média entre os três");
 printf("\n6-Sair\n");
 scanf("%i", &opcao);	
}
}
