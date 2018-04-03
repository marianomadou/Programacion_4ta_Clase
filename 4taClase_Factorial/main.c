#include <stdio.h>
#include <stdlib.h>



int main()
{
  int contador;
  int numeroIngresado;
  int factorial = 1;

  printf("Ingresar numero a calcular el factorial: \n");
  scanf("%d", &numeroIngresado);

  for (contador = numeroIngresado; contador >= 1; contador--)
    {factorial = factorial * contador;}

  printf("El factorial de %d = %d\n", numeroIngresado, factorial);

  return 0;
}


/*
---------------------------------------


int main()
{
  int contador;
  int numeroIngresado;
  int factorial = 1;

  printf("Ingresar numero a calcular el factorial: \n");
  scanf("%d", &numeroIngresado);

  for (contador = 1; contador <= numeroIngresado; contador++)
    {factorial = factorial * contador;}

  printf("El factorial de %d = %d\n", numeroIngresado, factorial);

  return 0;
}
*/
