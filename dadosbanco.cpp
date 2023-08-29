//Faça um programa, que peça ao usuário para guardar os dados de 3 contas bancárias de clientes. Cada conta deverá ter o número da conta, o tipo
//(1-conta corrente, 2-conta poupança) e o saldo. O programa deverá guardar as as informações dos 3 contas a partir de dados digitados 
//pelo usuário. Depois deverá informar o saldo total das contas, quantas são poupanças e quantas são conta corrente.
//Informe a média dos saldos, somente os saldos das contas correntes e somente os saldos das contas poupança.
//Informe o maior e o menor saldo de ambas as contas.

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
 float total, media, salpoupa, salcorre, maisal=0, mensal=999999; 
 int poupa=0, corren=0;
 
 banco a, b, c;
 
 printf("Digite o número da sua conta: ");
 scanf("%i", &a.num);
 printf("\nDigite o tipo da conta: 1-Conta corrente ou 2-Conta poupança ");
 scanf("%i", &a.tipo);
 printf("\nDigite o saldo da conta a:");
 scanf("%f", &a.saldo);
   if (a.tipo == 1){
      corren++;
      salcorre = a.saldo+salcorre;
   } else {
   	poupa++;
   	salpoupa = a.saldo+salpoupa;
   }
    if (a.saldo > maisal) {
   	maisal = a.saldo;
   }
    if (a.saldo < mensal){
   	mensal = a.saldo;
   }

  printf("\nDigite o número da sua conta: ");
  scanf("%i", &b.num);
  printf("\nDigite o tipo da conta: 1-Conta corrente ou 2-Conta poupança ");
  scanf("%i", &b.tipo);
  printf("\nDigite o saldo da conta b:");
  scanf("%f", &b.saldo);
  if (b.tipo == 1){
      corren++;
      salcorre = b.saldo+salcorre;
   } else {
   	poupa++;
   	salpoupa = b.saldo+salpoupa;
}
   if (b.saldo > maisal) {
   	maisal = b.saldo;
   } 
    if (b.saldo < mensal){
   	mensal = b.saldo;
   }
 
  printf("\nDigite o número da sua conta: ");
  scanf("%i", &c.num);
  printf("\nDigite o tipo da conta: 1-Conta corrente ou 2-Conta poupança ");
  scanf("%i", &c.tipo);
  printf("\nDigite o saldo da conta c:");
  scanf("%f", &c.saldo);
  if (c.tipo == 1){
      corren++;
      salcorre = c.saldo+salcorre;
   } else {
   	poupa++;
   	salpoupa = c.saldo+salpoupa;
}
   if (a.saldo > maisal) {
   	maisal = c.saldo;
   }
    if (c.saldo < mensal){
   	mensal = c.saldo;
   }

 
 total = a.saldo+b.saldo+c.saldo;
 media = (a.saldo+b.saldo+c.saldo)/3;
  
 printf("\nO saldo total das três contas é: %.2f", total);
 printf("\nO total de contas corrente é: %i", corren);
 printf("\nO total de contas poupança é: %i", poupa); 
 printf("\nA média dos saldos é: %.2f", media);
 printf("\nO total de saldo das contas correntes é: %.2f", salcorre);
 printf("\nO total de saldo das contas poupança é: %.2f", salpoupa);
 printf("\nO maior saldo é: %.2f", maisal);
 printf("\nO menor saldo é: %.2f", mensal); 
}
