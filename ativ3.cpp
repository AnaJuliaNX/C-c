#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 int i, cat, pdesc;
 float prec, desc, total, soma, media, vend;

 
 soma = 0;
 pdesc = 0;
 vend= 0;

 printf("Bem vindo a loja TendiTudo!");
 printf("\n As categorias são: 1-Eletrônicos, 2-Panelas, 3-Toalhas de banho, 4-Roupas de cama, 5-Beleza, 6-Outros");

  for (i=1; i <= 3; i = i+1)
  {
  	printf("\nInforme a categoria do produto: ");
  	scanf("%i", &cat);
  	printf("\nInforme o valor do produto: ");
  	scanf("%f", &prec);

  	 switch (cat)
  	 {
  	 case 1: 
  	   if (prec <= 50)
  	  {
  	  	 printf("Não houve desconto");
  	  	 vend = vend+ prec;
		  }

	 else if (prec <= 150)
	   {
	   	 desc= prec*15/100;
	   	 soma = soma+desc;
	   	 total = prec-desc;
	   	 vend = vend+ total;
	   	 printf("O valor do desconto será: %.2f", desc);
	   	 printf("O valor do produto será: %.2f", total);
	   	 pdesc = pdesc+1;
           }

	 else if (prec > 150)
	   {
	   	 desc= prec*20/100;
	   	 soma = soma+desc;
	   	 total = prec-desc;
	   	 vend = vend+ total;
	   	 printf("O valor do desconto será: %.2f", desc);
	   	 printf("O valor do produto será: %.2f", total);
	   	 pdesc = pdesc+1;
	   }
	   break;

	   case 2: 
  	      if (prec <= 70)
  	  {
  	  	 printf("Não houve desconto");
  	  	 vend = vend+ prec;
		  }

	 else if (prec <= 170)
	   {
	   	 desc= prec*15/100;
	   	 soma = soma+desc;
	   	 total = prec-desc;
	   	 vend = vend+ total;
	   	 printf("O valor do desconto será: %.2f", desc);
	   	 printf("O valor do produto será: %.2f", total);
	   	 pdesc = pdesc+1;
         }

	 else if (prec > 170)
	   {
	   	  desc= prec*20/100;
	   	  soma = soma+desc;
	   	 total = prec-desc;
	   	 vend = vend+ total;
	   	 printf("O valor do desconto será: %.2f", desc);
	   	 printf("O valor do produto será: %.2f", total);
	   	 pdesc = pdesc+1;
	   }
	   break;

	   case 3: 
  	     if (prec <= 30)
  	  {
  	  	 printf("Não houve desconto");
  	  	 vend = vend+ prec;
		  }

	 else if (prec <= 130)
	   {
	   	 desc= prec*15/100;
	   	  soma = soma+desc;
	   	 total = prec-desc;
	   	 vend = vend+ total;
	   	 printf("O valor do produto será: %.2f", total);
         }

	 else if (prec > 130)
	   {
	   	 desc= prec*20/100;
	   	 soma = soma+desc;
	   	 total = prec-desc;
	   	 vend = vend+ total;
	   	 printf("O valor do desconto será: %.2f", desc);
	   	 printf("O valor do produto será: %.2f", total);
	   	 pdesc = pdesc+1;
	   }
	   break;

	   case 4: 
  	    if (prec <= 40)
  	  {
  	  	 printf("Não houve desconto");
  	  	 vend = vend+ prec;
		  }

	 else if (prec <= 140)
	   {
	   	 desc= prec*15/100;
	   	  soma = soma+desc;
	   	 total = prec-desc;
	   	 vend = vend+ total;
	   	 printf("O valor do desconto será: %.2f", desc);
	   	 printf("O valor do produto será: %.2f", total);
	   	 pdesc = pdesc+1;
         }

	 else if (prec > 140)
	   {
	   	  desc= prec*20/100;
	   	   soma = soma+desc;
	   	 total = prec-desc;
	   	 vend = vend+ total;
	   	 printf("O valor do desconto será: %.2f", desc);
	   	 printf("O valor do produto será: %.2f", total);
	   	 pdesc = pdesc+1;
	   }
	   break;

	   case 5:  
  	    if (prec <= 60)
  	  {
  	  	 printf("Não houve desconto");
  	  	 vend = vend+ prec;
		  }

	 else if (prec <= 160)
	   {
	   	 desc= prec*15/100;
	   	  soma = soma+desc;
	   	 total = prec-desc;
	   	 vend = vend+ total;
	   	 printf("O valor do desconto será: %.2f", desc);
	   	 printf("O valor do produto será: %.2f", total);
	   	 pdesc = pdesc+1;
         }

	 else if (prec > 160)
	   {
	   	 desc= prec*20/100;
	   	  soma = soma+desc;
	   	 total = prec-desc;
	   	 vend = vend+ total;
	   	 printf("O valor do desconto será: %.2f", desc);
	   	 printf("O valor do produto será: %.2f", total);
	   	 pdesc = pdesc+1;
	   }
	   break;
	   
	  case 6:
	  	printf("Não houve desconto");
	  	break;

	default: printf("Não registrado no sistema");
	}
	   }

media = soma/pdesc;

printf("\nOs produtos que tiveram desconto foram %i de 15", pdesc);
printf("\nA média dos descontos será %.2f", media); 
printf("\nO valor final será: %.2f", vend);
  }
