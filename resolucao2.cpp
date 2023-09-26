#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 struct aluno 
 {
 	int RA;
 	char nome[20];
 	float nota1, nota2, nota3, media;	
 };
 aluno A;
 
 printf("Digite o RA do aluno: ");
 scanf("%i", &A.RA);
 printf("\nDigite o nome do aluno: ");
 scanf("%s", &A.nome[20]);
 printf("\nDigite a primeira nota: ");
 scanf("%f", &A.nota1);
 printf("\nDigite a segunda nota: ");
 scanf("%f", &A.nota2);
 printf("\nDigite a terceira nota: ");
 scanf("%f", &A.nota3);
 
A.media = (A.nota1 + A.nota2 + A.nota3)/3;
 if(A.media > 6) {
 	printf("\nO aluno de RA %i foi APROVADO", A.RA);
 } else {
 	 printf("O aluno de RA %i foi REPROVADO", A.RA);
 }
}
