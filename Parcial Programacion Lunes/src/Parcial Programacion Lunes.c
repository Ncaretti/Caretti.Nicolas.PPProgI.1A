/*
 ============================================================================
 Name        : Parcial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

int aplicarDescuento(int* precioProducto);
int contarCaracteres(char cadena[], char caracter);

typedef struct
{
	int id;
	char procesador[20];
	char marca[20];
	int precio;
}eNotebook;

int ordenarMarca(eNotebook* listaProductos);


int main(void)
{
	setbuf(stdout, NULL);
	float precioFinal;
	int precioProducto;

	char caracter = {'a'};
	char cadena[20] = {"Juan"};
	int retornoCaracter;

	eNotebook listaProductos[100];

	//Ejercicio 1//

	printf("Ingrese el precio");
	scanf("%d", &precioProducto);

	precioFinal = aplicarDescuento(&precioProducto);
	printf("TOTAL CON 5: %.2f", precioFinal);


	//Ejercicio 2//

	retornoCaracter = contarCaracteres(cadena, caracter);
	printf("El caracter se repitio %d veces", retornoCaracter);

	//Ejercicio 3//

	ordenarMarca(listaProductos, TAM);


	return EXIT_SUCCESS;
}

int aplicarDescuento(int* precioProducto)
{
	float resultado;
	float porcentaje;

	porcentaje = (float)(*precioProducto * 0.5) / 100;
	printf("%.2f", porcentaje);

	resultado = *precioProducto + porcentaje;


	return resultado;
}

int contarCaracteres(char cadena[], char caracter)
{
	int i;
	int tam;
	int contadorCaracteres = 0;

	tam = strlen(cadena);

	for(i=0;i<tam;i++)
	{
		if(cadena[i] == caracter)
		{
			contadorCaracteres++;
		}
	}

	return contadorCaracteres++;
}

int ordenarMarca(eNotebook* listaProductos, int tam)
{
	int ret = 0;
	int i;
	int j;
	int tam;

	eNotebook auxProducto;

	tam = strlen(listaProductos.marca);

	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam+1;j++)
		{
			if(listaProductos[i].marca < listaProductos[j].marca)
			{
				auxProducto = listaProductos[i];
				listaProductos[i] = listaProductos[j];
				listaProductos[j] = auxProducto;
			}
		}
	}

	return ret;
}
