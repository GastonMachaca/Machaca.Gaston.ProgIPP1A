#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*1. Crear una funci�n que se llame
 contarCaracteres que reciba una cadena de
 caracteres como primer par�metro y un car�cter como segundo y devuelva la
cantidad de veces que ese car�cter aparece en la cadena *. */



int contarCaracteres(char cadena[],char caracter,int tam);

int main()
{

    char cadena[TAM];

    char caracter;

    int rta;

    printf("Ingrese una palabra");
    fflush(stdin);
    gets(cadena);

    printf("Ingrese el caracter a tomar:");
    scanf("%c",&caracter);

    rta = contarCaracteres(cadena,caracter,TAM);

    printf("La cantidad de caracteres de la palabra ingresada es: %d",rta);
    return 0;
}

int contarCaracteres(char cadena[],char caracter,int tam)
{
    int contador=0;

    for(int i=0;i<tam;i++)
    {
        if(cadena[i]==caracter)
        {
            contador++;
        }
    }

    return contador;

}
