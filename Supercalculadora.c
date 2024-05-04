#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  int main () {  
        setlocale ( LC_ALL, "Portuguese" );
       int numero1;
       int operação;
       int numero2;
       int resultado;
      int repetição=1;
    
       
 while ( repetição==1) {
printf  ( "\nEscolha uma operação\n\n 1=Adição\n 2=Subtração\n 3= Multiplicação\n 4=Divisão\n\n");
scanf("%d", &operação);

switch (operação) {

case 1:
printf("Coloque um número\n");
scanf("%d", &numero1);
printf("Coloque outro número\n");
scanf("%d", &numero2);
resultado= numero1+numero2;
printf(" o resultado é %d", resultado);
printf("\nQuer continuar calculando ?\n 1= Positivo\n 2=Negativo\n");
 scanf ("%d" , &repetição);
 

break;

case 2:
printf("Coloque um número\n");
scanf("%d", &numero1);
printf("Coloque outro número\n");
scanf("%d", &numero2);
resultado= numero1-numero2;
printf(" o resultado é %d", resultado);
printf("\nQuer continuar calculando ?\n 1= Positivo\n 2=Negativo\n");
 scanf ("%d" , &repetição);
 
break;

case 3:
printf("Coloque um número\n");
scanf("%d", &numero1);
printf("Coloque outro número\n");
scanf("%d", &numero2);
resultado= numero1*numero2;
printf(" o resultado é %d", resultado);
printf("\nQuer continuar calculando ?\n 1= Positivo\n 2=Negativo\n");
 scanf ("%d" , &repetição);
 
break;

case 4:
printf("Coloque um número\n");
scanf("%d", &numero1);
printf("Coloque outro número\n");
scanf("%d", &numero2);
if (numero2==0 ) {
printf (" A Divisão é impossível\n"); 
printf("\nQuer continuar calculando ?\n 1= Positivo\n 2=Negativo\n");
 scanf ("%d" , &repetição);
 
} else { 
resultado = numero1/numero2;
printf(" o resultado é %d\n\n", resultado);
printf("\nQuer continuar calculando ?\n 1= Positivo\n 2=Negativo\n");
 scanf ("%d" , &repetição);
 
break; }



default:
printf("\nColoque uma das opcões apresentadas\n\n");
}
}

 
}