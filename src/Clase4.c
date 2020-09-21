/*
 ============================================================================
 Name        : Clase4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	int edad;
	int peso;
	char letra;
	int respuesta;

	respuesta = utn_getChar(&letra,"Introduce una letra\n", "Error. La letra debe ser entre A a J\n", 'A', 'J', 2);
	if(respuesta==0)
	{
		printf("La letra es %c", letra);
	}
	else
	{
		printf("Error.");
	}

	respuesta = utn_getInt(&edad,"Introduce tu edad\n", "Error. La edad debe ser desde 0 a 199\n", 0, 199, 2);
	if(respuesta==0)
	{
		printf("La edad es %d", edad);
	}
	else
	{
		printf("Error.");
	}
	respuesta = utn_getInt(&peso,"Introduce tu peso\n", "Error. El peso debe ser desde 0 a 500\n", 0, 500, 3);
		if(respuesta==0)
		{
			printf("El peso es %d", peso);
		}
		else
		{
			printf("Error.");
		}
}
