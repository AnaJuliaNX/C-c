//Faça um programa que simule o funcionamento de uma
//calculadora. O usuário deverá digitar 3 números e o programa
//deverá ter funções específicas para calcular a soma dos
//números, a subtração de 2 deles, a multiplicação entre
//dois deles, a divisão de dois deles (desde que um não seja
//zero), e a média entre os três. O programa principal
//deverá ter um laço de repetição permitindo ao usuário
//obter os resultados de todas as funções, se quiser.
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

main ()
 { setlocale(LC_ALL, "Portuguese");
 float numero1, numero2, numero3, somaTres, subtrai;
 int opcao;
 
 printf("Digite os três números: ");
 scanf("%f%f%f", &numero1, &numero2, &numero3);
 	     
 printf("Digite o número referente a uma das opções:");
 printf("\n1-Soma dos três número");
 printf("\n2-Subtração de dois deles");
 printf("\n3-Multiplicação de dois deles");
 printf("\n4-Divisão de dois deles");
 printf("\n5-Média entre os três");
 printf("\n6-Sair\n");
 scanf("%i", &opcao);
 
 //while(opcao != 5)
 	//{
	 switch(opcao)
 	  {
 	     case 1: printf("Soma!");
 	     somaTres = somaOsTres(numero1, numero2, numero3);
 	     printf("\nA soma dos três número é: %.0f", somaTres);
 	     break;
 	     
 	     case 2: printf("Subtração!");
 	     sibtrai = subtraiDois(numero1, numero2);
 	     printf("\nA subtração de dois número é: %.2f", subtrai);
 	     break;
 	     
 	     case 3: printf("Multiplicação!");
 	     
 	     
 	  default: printf("ERROR!");   
	}
 		
	 //}
}
