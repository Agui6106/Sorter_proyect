/* =========================================== //
    Jose Alberto Aguilar Sanchez - A01735612
    Funciones de estructura de datos de main.cpp
// =========================================== */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <iostream>
#include <vector>

#include <sstream>
#include <string>

/*
    Estructura a utilizar Linked List
*/

// Encabezado clase lista (Linked)
template <class T> class List;

// -- Clase Auxiliar Nodo -- //
template <class T>
class Link {
// Lo incluimos en privado, puesto que no queremos que el usario acceda a estos objetos
private:
	// Constructor 
	Link(T);

	// Operadores 
	T	    value; // Valor del objeto Link T
	Link<T> *next; // Apuntador al obejto link T 

	// Clase compadre Lista
	friend class List<T>; // Lista entra a todo lo privado de LINK
};

// Construcotr por omision //
template <class T>     
Link<T>::Link(T val) : value(val), next(0) {}

// -- CLASE PRINCIPAL LISTA -- //
template <class T>
class List {
    private:
        // Apuntador a la cabeza de la lista
        Link<T> *head;
        // Longitud de la lista
        int size; 

    public:
        // CONSTRUCOTRES // 
        List(); // Vacio o por omision
        ~List();

        // -- METODOS PRINCIPALES-- //
        // -- Ordenar -- //
        void SortByName();

        // Agregar nuevo valor
        void Insert(T);

        // -- Eliminar -- //
        void delete_by_index(int); // Por index
        void delete_by_name(T); // Por nombre

        //  -- Buscar -- //
        int search_by_name(T); // Por nombre
        T   search_by_index(int) const; // Por index

        // Obtener todos los valores
        std::string toString() const;

		// -- METODOS AUXILIARES --//
        // Limpiar memoria
        void clear();
        // Obtener la dimension de la lista
        int get_size() const;
        // Contiene?
        bool contains(T) const;
        // Regresamso string

        
};

// -- Constructor -- //
template <class T>
List<T>::List() : head(nullptr), size(0) {}

// -- Destructor -- //
template <class T>
List<T>::~List() {
	// Borramos de objetos pero no los objetos 
	clear(); // Metodo que vamos a crear
}

// -- METODOS PRINCIPALES -- //

// Ordenar la lista
template <class T>
void List<T>::SortByName() {
    Link<T> *p, *q, *min;
    p = head;
    
    while (p != nullptr) {
        min = p;
        q = p->next;

        while (q != nullptr) {
            if (q->value < min->value) {
                min = q;
            }
            q = q->next;
        }

        if (min != p) {
            // Swap the values of p and min
            std::string temp = p->value;
            p->value = min->value;
            min->value = temp;
        }

        p = p->next;
    }
}

// Agregamos un nuevo valor
template <class T>
void List<T>::Insert(T val) {
    // Creamos en el git un nuevo objeto tipo T para anadir a la lista 
    Link<T>* newVal = new Link<T>(val);

    // Si la lista esta vacia establece el valor como nuevo como header
    if (head == nullptr) {
        head = newVal;
        
    // Sino ve al final y agregalo
    } else { 
        Link<T>* now  = head; // Creamos un apuntador auxiliar
        while (now ->next != nullptr) { // Recorremos hasta llegar al final  
            now = now ->next; // Movemos el apuntador a la siguiente posicioon
        }
        // Enlazamos el nuevo elemento
        now->next = newVal;
    }
    size++;  
}

// Imprimimos los datos
template <class T>
std::string List<T>::toString() const {
    std::stringstream aux;
    Link<T> *p;
    int cont = 0;

    p = head;
    while (p != nullptr) {
        aux << cont << " ";
        cont += 1;
        aux << p->value;
        if (p->next != nullptr) {
            aux << "\n";
        }
        p = p->next;
    }
    return aux.str();
}

// -- Buscar -- //
// Por nombre
template <class T>
int List<T>::search_by_name(T val) {
    // creamos apuntador auxiliar apra operar
	Link<T> *current = head;
    // Iterador para recorrer la lista
	int i = 0;

    // Recorremos la lista, mientras verdadero...
	while (current) {
		if (current->value == val) { //... Hasta encontrar el valor
			return i;// regresa el iterador contador 
		}
        // Mueve el apuntador al siguiente elemento
		current = current->next;
		i++; // Suma la posicion
	}
    // Sino regresa -1
	return -1;
}

// Por index
template <class T>
T List<T>::search_by_index(int index) const {
	int pos;
	Link<T> *p;
    std::string no;

    // Si no esta en la longitud de la lista
	if (index < 0 || index >= size) {
        no = "Index no correspondiente a los datos" ;
		return no;
	}

    // Recorremos la lista hasta encontrar el index buscado
	p = head;
	pos = 0;
	while (pos != index) {
		p = p->next;
		pos++;
	}

	return p->value;
}

// -- Eliminar -- //
// Por Index
template <class T>
void List<T>::delete_by_index(int index) {
    // Si el index es 0, borra el header
    if (index == 0) {
        // Pasa el heaader al apuntador siguinete
        Link<T> *temp = head;
        head = head->next;
        delete temp;

    } else {
        // Variables auxiliares apra no modificar origanles
        Link<T> *current = head;
        int currentIndex = 0;
        
        // Reocrremos la lista hasta hayar el index dado
        while (current) {
            if (currentIndex == index - 1) {
                // Cambiamos el apuntador para no perder la lista 
                Link<T> *temp = current->next;
                current->next = temp->next;
                // Borramos lop que habia ahi
                delete temp;
               }
            current = current->next;
            currentIndex++;
        }
    }
    size--;
}

// Por nombre 
template <class T>
void List<T>::delete_by_name(T val) {
    // creamos apuntador auxiliar apra operar
	Link<T> *current = head;

    // Recorremos la lista, mientras verdadero...
	while (current) {
		if (current->value == val) { //... Hasta encontrar el valor
            // Cambiamos los apuntadores
			Link<T> *temp = current->next; 
            current->next = temp->next; 
            // Borramos lop que habia ahi
            delete temp;
		}
        // Mueve el apuntador al siguiente elemento
		current = current->next;
	} 
    size--;
}

// -- METODOS AUXILIARES -- //

// Limpiamos la memoria
template <class T>
void List<T>::clear() {
	// Creamos 2 apuntadores p, q
	Link<T> *p, *q;

	// Declaramos p = encabezado 
	p = head;

	// Mientras que p nos ea nulo 
	while (p != 0) {
		// q = al siguiente apuntador de P
		q = p->next;
		delete p; // Borramos P
		p = q; // P = Q PARA NO PERDER EL HEADER
	} // repetimos hasta llegar a la ultima diureccion d memoria

	// Establecemos el encabezado y el tamano a 0
	head = 0;
	size = 0;
}

// Obtenemos la longitud de la lista(Total de datos)
template <class T>
int List<T>::get_size() const {
	return size;
}

// Contiene?
template <class T>
bool List<T>::contains(T val) const {
	// Objeto link llamado p (APUNTADOR LLAMDO P)
	Link<T> *p;
	p = head; // Apuntamos el pauntador a  head

	// Minetras que el pauntador nos ea nulo
	while (p != 0) {
		// p->value (metodo apra acceder al emtodo del apunatdor "value")
		if (p->value == val) { // Si el valor de la direccion es igual al valor que buscamos
			return true; // Regresa tru
		}
		p = p->next; // Si no esta en esa direccacion muevete a la siguiente
	}
	// Si nunca lo encontro regresa falso
	return false;
}







#endif /* FUNCTIONS_H_ */