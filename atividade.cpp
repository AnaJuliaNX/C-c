#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 
 struct produto
 { int cod;
  char descricao[30];
  float preco;
  int qtde;
 };
 float media;
 int soma;
 produto A, B, C;
 
 printf("Digite o código do produto: ");
 scanf("%i", &A.cod);
 printf("Digite a quantidade de produtos em estoque: ");
 scanf("%i", &A.qtde);
A.descricao[30] = 'p','a','ç','o','c','a';
 A.preco  = 1.00;
  
 printf("Digite o código do produto: ");
 scanf("%i", &B.cod);
 printf("Digite a quantidade de produtos em estoque: ");
 scanf("%i", &B.qtde);
 B.descricao[30] = 'c','o','c','a';
 A.preco  = 3.00; 
  
 printf("Digite o código do produto: ");
 scanf("%i", &C.cod);
 printf("Digite a quantidade de produtos em estoque: ");
 scanf("%i", &C.qtde);
 C.descricao[30] = 'p','a','s','t','e','l';
 A.preco  = 12.00;
 
 soma = A.qtde + B.qtde + C.qtde;
 media = (A.preco + B.preco + C.preco)/3;
 
 printf("A soma dos produtos em estoque é: %i", soma);
  printf("\nA média dos produtos é: %f.2", media);

 
   
}
