#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"



int inicializarFlagProductos(EProducto productos[], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        productos[i].flagCargaProducto=-1;
    }
    return 0;
}

int cargaProducto(EProducto productos[], int indice, int size)
{
   char auxNombre[50];
   char auxDescripcion[200];
   char auxPrecio[50];
   float auxPrecioF;

   printf("\nIngrese el nombre del producto: ");             //VALIDAR
   fgets(auxNombre, sizeof(auxNombre), stdin);             //VALIDAR
   fflush(stdin);                                          //VALIDAR
   auxNombre[strlen(auxNombre)-1]=0;                       //VALIDAR
   printf("\nIngrese una descripcion del producto: ");       //VALIDAR
   fgets(auxDescripcion, sizeof(auxDescripcion), stdin);   //VALIDAR
   fflush(stdin);                                          //VALIDAR
   auxDescripcion[strlen(auxDescripcion)-1]=0;             //VALIDAR
   printf("\nIngrese el precio del producto: ");             //VALIDAR
   fgets(auxPrecio, sizeof(auxNombre), stdin);             //VALIDAR
   fflush(stdin);                                          //VALIDAR
   auxPrecio[strlen(auxPrecio)-1]=0;                       //VALIDAR
   auxPrecioF= atof(auxPrecio);                            //VALIDAR

   strcpy(productos[indice].nombre, auxNombre);
   strcpy(productos[indice].descripcion, auxDescripcion);
   productos[indice].precio=auxPrecioF;
   productos[indice].flagCargaProducto=0;



   return 0;

}

int buscadorEspacioVacio(EProducto productos[], int size, int *indexProducto)
{
    int i;
    int index=0;
 for(i=0;i<size;i++)
 {
     if(productos[i].flagCargaProducto==-1)
     {
        *indexProducto=index;
        break;
     }
     else{
        printf("No hay espacio disponible");
     }
 }
 return 0;
}
