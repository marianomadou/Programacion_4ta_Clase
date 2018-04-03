#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/*math.h biblioteca de funciones matematicas*/


/** \brief Pide al usuario un n�mero entero y lo valida
 *
 * \param El texto del mensaje a mostrar
 * \param El valor minimo del intervalo de validaci�n
 * \param El valor m�ximo del intervalo de validaci�n
 * \return Un n�mero entero validado
 *
 */


int main()
{
    int edad;
    int legajo;
    int nota;

    edad = pedirEntero("Ingrese edad:\n", 18, 65);
    legajo = pedirEntero("Ingrese numero de legajo: \n", 1, 1500);
    nota = pedirEntero("Ingrese nota: \n", 1, 10);

    printf("La edad es: %d\n", edad);
    printf("El legajo es: %d\n", legajo);
    printf("La nota es: %d\n", nota);
    return 0;
}


