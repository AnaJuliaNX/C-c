#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main ()
 { setlocale(LC_ALL, "Portuguese");
 float temp[12], min, max, mes;
 int i, posmai, posmen;
 
 min = -20;
 
   printf("Informe o número do mês, sendo que janeiro começa como mês 0 e dezembro será o mês 11: ");
   scanf("%i", &mes);
   
   for(i=0; i<12; i++)
     {
     	printf("\nInforme a temperatura desse mês: ");
        scanf("%f", &temp[i]);
        
         if(temp[i]>max)
         { 
		  max = temp[i];
		  posmai = i;
		 }
	 }
	   
    for(i=0; i<12; i++)
      {
      	if (temp[i]<min)
      	 {
      	 	min = temp[i];
      	 	posmen = i;
		   }
	  }
	  
    switch (posmai)
     {case 0: printf("\nJaneiro");
       break;
      
      case 1: printf("\nFevereiro");
       break;
      
      case 2: printf("\nMarço");
       break;
      
      case 3: printf("\nAbril");
       break;
      
      case 4: printf("\nMaio");
       break;
      
      case 5: printf("\nJunho");
       break;
      
      case 6: printf("\nJulho");
       break;
      
      case 7: printf("\nAgosto");
      break;
      
      case 8: printf("\nSetembro");
       break;
      
      case 9: printf("\nOutubro");
       break;
      
      case 10: printf("\nNovembro");
       break;
      
      case 11: printf("\nDezembro");
	   break;
      
      default: printf("ERRO");
	 }
   
   switch (posmen)
     {case 0: printf("\nJaneiro");
       break;
      
      case 1: printf("\nFevereiro");
       break;
      
      case 2: printf("\nMarço");
       break;
      
      case 3: printf("\nAbril");
       break;
      
      case 4: printf("\nMaio");
       break;
      
      case 5: printf("\nJunho");
       break;
      
      case 6: printf("\nJulho");
       break;
      
      case 7: printf("\nAgosto");
      break;
      
      case 8: printf("\nSetembro");
       break;
      
      case 9: printf("\nOutubro");
       break;
      
      case 10: printf("\nNovembro");
       break;
      
      case 11: printf("\nDezembro");
	   break;
      
       default: printf("ERRO");
	 }
         
}

