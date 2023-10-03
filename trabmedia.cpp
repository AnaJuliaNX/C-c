#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

float mediaAritmetica (float n1, float n2, float n3)
{float a;
	a = (n1 + n2 + n3)/3;
	return a;
}

float mediaPonderada (float n1,float n2, float n3)
{float p, soma;
	soma = n1 * 3 + n2 * 2 + n3;
	p = soma/6;
	return p;
}
main ()
 { setlocale(LC_ALL, "Portuguese");
 float nota1, nota2, nota3, mediaAri, mediaPon;
 char opcao;
 
 printf("Digite as três notas: ");
 scanf("%f%f%f", &nota1, &nota2, &nota3);
 
 printf("Escolha entra a opção A e P: ");
 scanf("%s", &opcao);
 
 switch(opcao)
 	{
 		case 'a': printf("média aritmética!");
 		mediaAri = mediaAritmetica(nota1, nota2, nota3);
		printf("\nA média das notas é: %.2f", mediaAri);
		break;
		
		case 'p': printf("média ponderada!");
		mediaPon = mediaPonderada(nota1, nota2, nota3);
		printf("\nA média das notas é: %.2f", mediaPon);
		break;
		default: printf("ERROR");	 
	 }
}
