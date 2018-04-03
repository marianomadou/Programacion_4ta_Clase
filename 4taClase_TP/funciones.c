
#include <stdio.h>
#include "funciones.h"

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */


int pedirEntero(char mensaje[], int min, int max)
{
    int numero;

    printf("%s", mensaje);
    scanf("%d", &numero);

    numero = validarEntero(numero, min, max);

    return numero;

}

int validarEntero(int dato, int min, int max)
{
    while(dato < min || dato >max)
    {
        printf("Error: Ingrese entre %d y %d\n", min, max);
        scanf("%d", &dato);
    }
    return dato;
}

long factorial(int n)
{
  int contador;
  long resultado = 1;

  for (contador = 1; contador <= n; contador++)
    resultado = resultado * contador;

  return resultado;
}
