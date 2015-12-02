#include <stdio.h>
int tabla(int numero);
int main()
{  int numero;
	 printf("\nTABLA DE MULTIPLICAR\n\n\n");
	 printf("Número de Tabla a multiplicar: ");
	 scanf("%d",&numero);
	 tabla(numero);
	 
  return 0;
}
 
int tabla(int numero)
{
	 int espacios[10];
	 int indice;
 
	 for(indice=0; indice < 10; indice++)
	 espacios[indice] = numero*(indice+1);
 
	 printf("\n\nTabla del %d \n",numero);
	 for(indice=0; indice < 10; indice++)
	 printf("%d x %2d = %4d\n",numero, (indice+1), espacios[indice]);
return 0;
}
