#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 int i, cod, vei, acid, acimai=0, acimen=99999, cimai, cimen;
 float soma, media, soma2, media2, acid3, cid3, media3;
   
   for (i=1; i<=5; i=i+1)
    {
	printf("Qual � o c�digo da cidade: ");
    scanf("%i", &cod);
    
    printf("Qual � o n�mero de veiculos de passeio? ");
    scanf("%i", &vei);
     soma = soma+vei;
     
    printf("Qual � a quantidade de acidentes com vitimas? ");
    scanf("%i", &acid);
     soma2 = soma2+acid;
     
    if (acid > acimai)
      {
	  acimai = acid;
	  cimai = cod;	  
  }
     if (acid < acimen)
      {acimen = acid;
      cimen = cod;
   }
      if (vei <= 2000)
      {
      	acid3 = acid3 + acid;
      	cid3 = cid3 + 1;
	  }
      
  }
	media = soma/5;
	media2 = soma2/5;
	media3 = acid3/cid3;
	
   printf("\nO menor indice de acidentes �: %i da cidade: %i ", acimen, cimen);
   printf("\nO maior indice de acidentes �: %i, da cidade: %i ", acimai, cimai);
   printf("\nA m�dia de veiculos das cidades �: %f", media);
   printf("\nA m�dia de acidentes da cidades com menos veiculos �: %f", acid3);
	  
}
