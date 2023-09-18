#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>

class SortedMap {
    private:
        // Creamos un mapa llamado diccioanrio de strings a integers
        std::map<std::string, int> diccionario;
        
    public:
        // Constructorpor default
        SortedMap() {}

        // Método para insertar elementos en el diccionario
        void Insert(const std::string& key, int value) {
            diccionario[key] = value;
        }

        

        // Método para ordenar y mostrar el diccionario
        void SortAndPrint_ByName() {
            // Copiamos los elementos del diccionario a un vector utilizando la funcion pair
            std::vector<std::pair<std::string, int>> vec(diccionario.begin(), diccionario.end());

            // Ordenamos el vector por key (orden alfabético)
            std::sort(vec.begin(), vec.end());

            // Imprimir el diccionario ordenado
            std::cout << "Ordenado Alfabeticamante:" << std::endl;

            //Toma los pares del vector pro referencia y los imprime
            for (const auto& par : vec) {
                std::cout << par.first << ": " << par.second << std::endl;
            }
        }


        void SortAndPrint_By_Num() {
            // Copiamos los elementos del diccionario a un vector utilizando la funcion pair
            std::vector<std::pair<std::string, int>> vec(diccionario.begin(), diccionario.end());

            // Definir una función de comparación personalizada para ordenar por valor numérico
            auto comparador = [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
                return a.second < b.second; // Comparar por valor numérico (segundo elemento del par)
            };

            // Ordenar el vector por valor numérico
            std::sort(vec.begin(), vec.end(), comparador);

            // Imprimir el diccionario ordenado por valor numérico
            std::cout << "Diccionario ordenado por valor numérico:" << std::endl;
            for (const auto& par : vec) {
                std::cout << par.first << ": " << par.second << std::endl;
            }
}



};


#endif /* FUNCTIONS_H_ */