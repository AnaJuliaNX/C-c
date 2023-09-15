#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");

struct produto
{
	int cod;                                                        
	char descricao[30];                                       
	float preco;                                                     
	int qtde;
};

produto quanti[5];
float percentual, aumento, bemalto, maiscaro=1000000, maisbarato=0;
int opcao, menosquedez;

printf("Cadastrar todos os produtos");
	for(i=0; i<5; i++)
  {
  	printf("\nDigite o código do produto: ");
  	scanf("%i", &quanti[i].cod);
  	printf("\nDigite o nome do produto: ");
  	scanf("%s", &quanti[i].descricao);
  	printf("\nDigite o preço do produto: ");
  	scanf("%f", &quanti[i].preco);
  	printf("\nDigite a quantidade do produto: ");
  	scanf("%i", &quanti[i].qtde);
  }
  
  printf("\nDigite o número da opção escolhida: ");
  printf("1-Mostrar todos os dados cadastrados na tela");
  printf("2-Aumentar o preço do produto");
  printf("3-Mostrar produtos que tem quantidade inferior a 10 em estoque");
  printf("4-Mostrar produtos que custam mais que R$1000");
  printf("5-Mostrar o produto mais caro e o mais barato");
  printf("5-Sair");
  scanf("%i", &opcao);
  
  while(opcao != 5)
  { switch (opcao)
	{ case 1: for(i=0; i<5; i++)
		printf("\nCódigo do produto: %i", quanti[i].cod);
		printf("Nome do produto: %s", quanti[i].descricao);
		printf("Preço do produto: %f", quanti[i].preco);
		printf("Quantidade em estoque: %i", quanti[i].qtde);
	}
	break;
  	
  	case 2: for(i=0; i<5; i++)
  		printf("\nInforme o percentual de aumento: ");
  		scanf("%f", &percentual);
  		aumento = quanti[i].preco*percentual/100;
  		quanti[i].preco = quanti[i].preco + aumento;
		  	
  	break;	
  	
   case 3: for(i=0; i<5; i++)
     if (quanti[i].qtde < 10) {
     printf("O produto %s, tem quantidade inferior a 10 em estoque", quanti[i].descricao);
   } 
   break;
   
   case 4: for(i=0; i<5; i++)
   	if (quanti[i].preco > 1000) {
   		printf("Os produtos que custam mais que R$ 1000 são: %s", quanti[i].descricao);
	   }
	   break;
	   
	case 5: for(i=0; i<5; i++)
	 if ()
  }
   
}
