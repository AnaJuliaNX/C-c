#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
  int i, idade, idmai, idmen;
  float sal, salbaixo=999999, soma, media, mulhe;
  char sexo;
   idmai = 0;
   idmen = 0;
   mulhe = 0;
   soma = 0;
	 
     for (i=1; i <= 50; i = i+1)
     {
	   printf("\nInforme o sexo: ");
       scanf("%s", &sexo);
     	if (sexo == 'm')
         {printf("Masculino");
	 }   
	 else {
	 	printf("Feminino");
	 	mulhe = mulhe+1;
     }
     	printf("\nInforme sua idade: \n");
     	scanf("%i", &idade);
     	
     	printf("Informe seu salário: ");
     	scanf("%f", &sal);
     	 soma = soma+sal;
     	 
     	 if (idade > idmai)
     	 {
     	 	idmai = idade;
		  }
		  if (idade < idmen)
		  { 
		   idmen = idade;
		  }
		  if (sal < salbaixo)
		  {
		  	salbaixo = sal;
		  }
	 }
    media = soma/50;
    printf("\nA média dos salários é; %.2f", media);
    printf("\nA maior idade é; %i e a menor é: %i", idmai, idmen);
    printf("\nA quantidade de mulheres é: %.0f", mulhe);
    printf("\nO salário mais baixo é: %.2f", salbaixo);
}
