#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 struct aluno 
 {
 	int RA;
 	float n1, n2, media;
 };
 aluno turma[5];
 int i, op, quantaprova=0, RAmaior;
 float mediaturma, soma=0, maior;
 
 printf("Cadastrar todos os alunos: ");
   for (i=0; i<5; i++)
   {
   	printf("\nRA: ");
   	scanf("%i",&turma[i].RA);
   	printf("\nNota 1: ");
   	scanf("%i",&turma[i].n1);
   	printf("\nNota 2: ");
   	scanf("%i",&turma[i].n2);
   	
   }
   printf("\nDgite sua opção: ");
   printf("\n1-Calcula a média");
   printf("\n2-Verifica quantos foram aprovados");
   printf("\n3-Calcula a média da turma");
   printf("\n4-Mostra o RA do aluno com maior nota");
   printf("\n5-Sair");
   scanf("%i", &op);
   
   while(op != 5)
        {switch (op)
        	 {case 1: for (i=0; i<5; i++)
        	{  turma[i].media = (turma[i].n1+ turma[i].n2)/2;
        	soma = soma + turma[i].media;
        	printf("\nMédia do aluno %i: %f", i+1, turma[i].media);
		   }
		   break;
		
		 case 2: for (i=0; i<5; i++)
		   {
		   	if (turma[i].media>=6)
		   	{ quantaprova++;
			   }
		   }
		   break;
		   
		case 3: mediaturma = soma/5;
		break;
		
	     case 4: for (i=0; i<5; i++)
	     {
	       if(turma[i].media > maior)
	       {
	       	maior = turma[i].media;
	       	RAmaior = turma[i].RA;
		  }
		}
		break;
		default: break;
		    }
		    
   printf("\nDgite sua opção: ");
   printf("\n1-Calcula a média");
   printf("\n2-Verifica quantos foram aprovados");
   printf("\n3-Calcula a média da turma");
   printf("\n4-Mostra o RA do aluno com maior nota");
   printf("\n5-Sair");
   scanf("%i", &op);
	   }

   printf("\nForam aprovados %i alunos", quantaprova);
   printf("\nA média da turma foi %f", mediaturma);
   printf("\nA maior nota %f do RA %i", maior, RAmaior);

 }
