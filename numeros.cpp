#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 
   struct aluno
   {int ra;
     float nota;
   }; 
   float media;
   aluno A, B;
 
     printf("Digite seu RA ");
     scanf("%i",&A.ra);
     printf("Digite a nota: ");
     scanf("%f",&A.nota);
	      
    printf("Digite seu RA ");
     scanf("%i",&B.ra);
     printf("Digite a nota: ");
     scanf("%f",&B.nota);
     printf("O aluno de RA: %i tem nota: %f.1", A.ra, A.nota);
      printf("O aluno de RA: %i tem nota: %f.1", A.ra, A.nota);
     
     media = (A.nota + B.nota)/2;
     printf("A média das notas é: %f", media);
}
