//Fa�a um programa que simule o funcionamento de uma
//calculadora. O usu�rio dever� digitar 3 n�meros e o programa
//dever� ter fun��es espec�ficas para calcular a soma dos
//n�meros, a subtra��o de 2 deles, a multiplica��o entre
//dois deles, a divis�o de dois deles (desde que um n�o seja
//zero), e a m�dia entre os tr�s. O programa principal
//dever� ter um la�o de repeti��o permitindo ao usu�rio
//obter os resultados de todas as fun��es, se quiser.
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

float somaOsTres (float a, float b, float c) 
{float total; 
total = a + b + c;
return total;	
}

float SubtraiDois (float a, float b)
{float total;
total = a - b;
return total;	
}

float MultiplicaDois (float a, float b)
{float total;
total = a * b;
return total;	
}

float DivideDois (float a, float b)
{float total;
total = a / b;
return total;
}

float MediaTres (float a, float b, float c)
{float total;
total = (a + b + c)/3;
return total
}

main ()
 { setlocale(LC_ALL, "Portuguese");
 float numero1, numero2, numero3, somaTres, subtrai, multiplica, divide;
 int opcao;
 
 printf("Digite os tr�s n�meros: ");
 scanf("%f%f%f", &numero1, &numero2, &numero3);
 	     
 printf("Digite o n�mero referente a uma das op��es:");
 printf("\n1-Soma dos tr�s n�mero");
 printf("\n2-Subtra��o de dois deles");
 printf("\n3-Multiplica��o de dois deles");
 printf("\n4-Divis�o de dois deles");
 printf("\n5-M�dia entre os tr�s");
 printf("\n6-Sair\n");
 scanf("%i", &opcao);
 
 //while(opcao != 5)
 	//{
	 switch(opcao)
 	  {
 	     case 1: printf("Soma!");
 	     somaTres = somaOsTres(numero1, numero2, numero3);
 	     printf("\nO resultado �: %.2f", somaTres);
 	     break;
 	     
 	     case 2: printf("Subtra��o!");
 	     sibtrai = subtraiDois(numero1, numero2);
 	     printf("\nO resultado �: %.2f", subtrai);
 	     break;
 	     
 	     case 3: printf("Multiplica��o!");
 	     multiplica = multiplicaDois(numero1, numero2);
 	     printf("\nO resultado �: %.2f", multiplica);
 	     break;
 	     
 	     case 4: if numero1 || numero2 || numero3 == 0 {
 	     	printf("O n�mero n�o pode ser 0 para fazer a divis�o")
		 } else if {
		printf("Divis�o!");
 	     divide = divideDois
 	     printf("O resultado �: %.2f", divide)
		 }
		 break;
		
 	  default: printf("ERROR!");   
	}
 		
	 //}
}
