//Faça um programa, que peça ao usuário para guardar os dados de 3 contas bancárias de clientes. Cada conta deverá ter o número da conta, o tipo
//(1-conta corrente, 2-conta poupança) e o saldo. O programa deverá guardar as as informações dos 3 contas a partir de dados digitados 
//pelo usuário. Depois deverá informar o saldo total das contas, quantas são poupanças e quantas são conta corrente

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 struct banco {
 	int num;
 	int tipo;
 	float saldo;
 };
 float total; 
 int poupa=0, corren=0;
 
 banco a, b, c;
 
 printf("Digite o número da sua conta: ");
 scanf("%i", &a.num);
 printf("\nDigite o tipo da conta: 1-Conta corrente ou 2-Conta poupança ");
  scanf("%i", &a.tipo);
   if (a.tipo == 1){
      corren++;
   } else {
   	poupa++;
   }
 printf("\nDigite o saldo da conta a:");
 scanf("%f", &a.saldo);
 
  printf("\nDigite o número da sua conta: ");
 scanf("%i", &b.num);
 printf("\nDigite o tipo da conta: 1-Conta corrente ou 2-Conta poupança ");
  scanf("%i", &b.tipo);

  if (b.tipo == 1){
      corren++;
   } else {
   	poupa++;
}
 printf("\nDigite o saldo da conta b:");
 scanf("%f", &b.saldo);
 
 
  printf("\nDigite o número da sua conta: ");
 scanf("%i", &c.num);
 printf("\nDigite o tipo da conta: 1-Conta corrente ou 2-Conta poupança ");
  scanf("%i", &c.tipo);
  if (c.tipo == 1){
      corren++;
   } else {
   	poupa++;
}
 printf("\nDigite o saldo da conta c:");
 scanf("%f", &c.saldo);
 
 total = a.saldo+b.saldo+c.saldo;
 printf("\nO saldo total das três contas é: %.2f", total);
 printf("\nO total de contas corrente é: %i", corren);
  printf("\nO total de contas poupança é: %i", poupa); 
}
