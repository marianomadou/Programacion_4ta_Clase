#include <stdio.h>
#include <stdlib.h>
/** \brief funcion recursiva
 *
 * \param
 * \param
 * \return
 *
 */

long long int factorial(int numero);

int main()
{
    int valor=14;

    printf("El factorial de %d es: %lld\n", valor, factorial(valor));

    return 0;

    }



  long long int factorial(int numero)
    {
  int factor;

  if(numero==0)
    {
      factor = 1;
    }

    else
    {
        factor=numero*factorial(numero - 1);
    }

    return factor;

    }




/*
int main()
{
    int numero=5;
    int factor;
    factor= factorial(numero);

    printf("El factorial del numero ingresado es: %d\n", factor);

    }



    int factorial(int numero)
    {
  int retorno;

  if(numero==0)
    {
      retorno = 1;
    }

    else
    {
        retorno=numero*factorial(numero - 1);
    }

    return retorno;

    }
*/
