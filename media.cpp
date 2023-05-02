#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  float n1, n2, n3, media;
  printf("Digite as três notas\n");
  scanf("%f%f%f", &n1, &n2, &n3);
  media = (n1+n2+n3)/3;
   if (media >= 7)
    { printf("APROVADO, com média %.2f\n", media);
	}
	else if (media >= 5)
	  { printf("EXAME, com média %.2f\n", media);
	  }
	  else { printf("REPROVADO, com média %.2f\n", media);
	  }
}
