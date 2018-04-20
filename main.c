#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Producto.h"
#define CANTIDAD 4

int main ()
{
    EProducto productos[CANTIDAD];

    int indice;
    char opcion;
    inicializarFlagProductos(productos, CANTIDAD);


    printf("Elija una opcion: \n\nA:Cargar un Producto\nB:Imprimir lista de productos");
    scanf("%c",&opcion);
    toupper(opcion);

    switch(opcion){


    printf("Ingrese el indice del producto a cargar: ");
    scanf("%d", &indice);
    fflush(stdin);
    cargaProducto(productos, indice, CANTIDAD);
    }


    return 0;
}
