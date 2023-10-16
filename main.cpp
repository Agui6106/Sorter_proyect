/*
 - Sorter de base de datos de plantas
 - Jose Alberto Aguilar Sanchez - A01735612
 - 15/10/2023. Version 2.1
*/

// Incluimso librerias
#include <iostream>
#include <vector>

#include <fstream>
#include <string>
// Incluimos archvio de funiones
#include "funciones.h"

using namespace std;

int main(){
    // -- LEEMOS EL ARCHIVO.TXT -- //
    ifstream inputfile;
    string linea;

    //Abrimos el archivo y verificamos que se haya abierto correctamante
    inputfile.open("plantas.txt");
    if (!inputfile.is_open()){cout << "No se encontro el arcihvo"; return 0;} 
    else cout << "Datos cargados correctamante\n";

    // Definimos variables y estructrua de datos
    // Para buscar y elimianr (Case 1 y 5)
    string plant_search;
    int buscar_por;
    int index_s;

    // Para agregar datos extras (Case 2)
    string new_plant;
    int cantidad;

    List<string> data;

    //Leemos todsa las lineas del arcihvo y las agregamos a la estructura
    while (getline(inputfile, linea)) data.Insert(linea);
    
    //Cerramos el archivo
    inputfile.close();

    // -- CREAMOS EL MENU -- //
    int option = 0;

    cout << "Selecciona una opcion: \n";
    cout << "1. Imprimir los datos\n2. Buscar algun dato\n3. Agregar elementos \n" ;
    cout << "4. Ordenar la base de datos\n5. Borrar algun dato\n6. Salir \n" ;

    while (option != 6){
        cout << endl << "Opcion: "; cin >> option;
        // Opciones
        switch (option) {

            // Imprimos los datos
            case 1:
                cout << "ID, Nombre \n";
                cout << data.toString() << endl;
                cout << "El total de datos es: " << data.get_size() << endl;
                break;

            // Buscamos
            case 2:
                cout << "Buscar por: \n1. Index \n2. Nombre \n";
                cout << "Seleccione el numero de la opcion que desee: "; cin >> buscar_por;

                if (buscar_por == 2) {
                    cout << "Nombre de planta a buscar: "; cin >> plant_search;

                    // Verificamso que el valor que bsucamso este en los datos
                    if (data.search_by_name(plant_search) == -1) cout << "No se encontro el valor buscado \n";
                    else cout << "El valor " << plant_search <<" Se encuentra en el index: " << data.search_by_name(plant_search);

                } else if (buscar_por == 1) {
                    cout << "Index a buscar: "; cin >> index_s;
                    cout << data.search_by_index(index_s);

                } else cout << "No ingresaste una opcion valida \n";

                break;
            
            // Insertamos x elementos
            case 3:
                cout << "Plantas a agregar: "; cin >> cantidad;
                for (int i = 0; i < cantidad; i++) {
                    cout << "Nombre de la planta: "; cin >> new_plant;
                    data.Insert(new_plant);
                }
                break;
                
            // Ordenar por nombre
            case 4:
                data.SortByName();
                cout << "Datoas ordenados correctamante \n";

                break;
            
            // Eliminar algun dato
            case 5: 
                cout << "ADVERTENCIA!!! : Esto borrara los datos permanentemnte \n";

                cout << "Borrar por: \n1. Index \n2. Nombre \n";
                cout << "Seleccione el numero de la opcion que desee: "; cin >> buscar_por;

                // Por index
                if (buscar_por == 1) { 
                    cout << "Index a borrar: "; cin >> index_s;
                    data.delete_by_index(index_s);
                    cout << "El dato en el index: " << index_s << " Fue correctamante borrado y sustituido\n";
                    cout << "La nueva cantidad de datos es: " << data.get_size();

                // Por Nombre
                } else if (buscar_por == 2) { 
                    cout << "Nombre de planta a buscar: "; cin >> plant_search;

                    // Verificamos si la input existe
                    if (data.contains(plant_search) == true){
                        data.delete_by_name(plant_search);
                        cout << "La planta: " << plant_search << " Fue correctamante borrado y sustituido\n";
                        cout << "La nueva cantidad de datos es: " << data.get_size();
                    
                    //sino
                    } else {
                        cout << "El nombre de planta que ingreso no existe. Verifica la escritura \n";
                    }

                    /*
                        Nota: Realizamos esta verificacion para evitar errores en el codigo.
                        Puesto que la funcion "delete_bye_name" no contiene nativamante una condicion
                        para cuando esto pase D:
                    */

                } else cout << "No ingresaste una opcion valida \n";
                
                break;
    
           // Bye :D
            case 6:
                cout << "Adios :D" << endl;
                cout << "Limpiando memoria para que no se reinicie tu compu en clase :3" << endl;
                cout << "... \n... \n... \nListo Disfruta tu dia ;D" << endl;
                data.~List();
                break;

            // No ingreso una opcion valida
            default:
               cout << "Ingresa una opcion valida" << endl;
                break;
            } // End Switch
        } // End while menu

    return 0;
}