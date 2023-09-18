/*
 - Sorter de base de datos de plantas
 - Jose Alberto Aguilar Sanchez - A01735612
 - 9/11/2023. Version 1.1
*/

// Incluimso librerias
#include <iostream>
// Incluimos archivo H
#include "funciones.h"

using namespace std;

int main(){ 
    // Creamos el objeto de la clase
    SortedMap dir;

    // Variables para el diccionario
    std::string name;
    int water;
    // Variable tamaño del diccionario
    int tam;
    cout << "Numero de elementos: " << endl;
    cin >> tam;

    // -- Ciclo apra llenar el diccioanrio -- //
    for(int i=1; i <= tam; i++){
        cout << "Nombre: " << endl;
        cin >> name;
        cout << "Agua" << endl;
        cin >> water;

        dir.Insert(name, water);
    }




    // Creamos las variables del menu
    int option = 0;

    // -- Creamos Menu de interfaz -- //
    while (option != 4){
        cout << endl << "Opcion: ";
        cin >> option;

        switch (option) {
        case 1:
           cout << "Buscar" << endl;
            break;
        
        case 2:
            cout << " Datos ordenados por uso de agua" << endl;
            break;
        
        case 3:
            cout << "Datos ordenado por nombres" << endl;
            dir.SortAndPrint_ByName();
            break;
        
        case 4:
            cout << "Adios :D" << endl;
            break;
        
        default:
            cout << "Ingresa una opcion valida" << endl;
            break;
        }
    }

    return 0;
}