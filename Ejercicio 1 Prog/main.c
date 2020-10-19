#include <stdio.h>
#include <stdlib.h>

/*1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un
producto y devuelva el valor del producto
con un descuento del 5%. Realizar la llamada desde el main. */


float aplicarDescuento(float precio);


int main()
{

    float precio;
    float rta;

    printf("Ingrese el precio del producto: ");
    scanf("%f",&precio);

    rta = aplicarDescuento(precio);

    printf("El precio con un 5 de descuento es: %.2f",rta);

    return 0;
}

float aplicarDescuento(float precio)
{
    float descuento;

    float precioDescuento;

    descuento = precio * 0.05;

    precioDescuento = precio - descuento;

    return precioDescuento;

}
