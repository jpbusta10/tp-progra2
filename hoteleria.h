#ifndef HOTELERIA_H_INCLUDED
#define HOTELERIA_H_INCLUDED
#include "arbolHabitaciones.h"
#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define historial "historialClientes.bin"
#define clientesActuales "clienteshospedados.bin"
typedef struct
{
    char nombre[50];
    char dni[10];
    char ciudadOrigen[100];
    int habitacion;
}baseClientes;
typedef struct
{
    baseClientes dato;
    struct nodoListaBase*siguiente;
}nodoListaBase;



///prototipados
void checkIn(nodoArbol*arbol);
void checkOut(nodoArbol*arbol);
void persistenciaCliente(nodoArbol*nodo,char nombreArchivo[100]);
void muestraArcivo(char nombreArchivo[100]);
nodoArbol*despersistenciaClientesActuales(nodoArbol*arbol);
nodoListaBase*inicListaBase();
nodoListaBase*agregarPrincipioBase(nodoListaBase*lista,baseClientes dato);
void mostrarListaBase(nodoListaBase*aMostrar);
void mostrarListaBase(nodoListaBase*lista);
void borrarDeHospedados(int habitacion);///borra del archivo de hospedadosActuales
#endif // HOTELERIA_H_INCLUDED
