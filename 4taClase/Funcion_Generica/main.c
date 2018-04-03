#include <stdio.h>
#include <stdlib.h>

/** \brief Pide al usuario un n�mero entero y lo valida
 *
 * \param El texto del mensaje a mostrar
 * \param El valor minimo del intervalo de validaci�n
 * \param El valor m�ximo del intervalo de validaci�n
 * \return Un n�mero entero validado
 *
 */

int pedirEntero(char[], int, int);

int validarEntero(int, int, int);

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
