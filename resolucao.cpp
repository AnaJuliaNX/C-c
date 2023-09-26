#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 
 float preco[12], media, soma=0, maisCaro=0;
 int i;
 
 for (i=0; i <12; i++){
 printf("Digite o preço do produto: ");
 scanf("%f", &preco[i]); 
 if(preco[i] > maisCaro)
 {
 maisCaro = preco[i];
 }
 soma = soma + preco[i];	
 	
 }
 media = soma/12;
 printf("A média dos preços é: %.2f", media);
 printf("O produto mais caero custa: %.2f", maisCaro);
}
