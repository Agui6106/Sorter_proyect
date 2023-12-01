# Oasis Data Base

Este proyecto trata sobre ordenar y bsucar una base de datos de plantas ya planteadas recibidas por el usario donde se considera lo siguiente
- Lectura y escritura de archvios 
- Esctrucutra de datos tipo Linked List
- Aceptar inputs nuevas del usauario 
- Buscar algun item de la base de datos
- Ordenar estos datos e imprimirlos de vuelta.

## SICT0302B: Toma decisiones
### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
Se utiliza el metodo de ordenamiento primeramante por que es un algortimo facil de usar y de implementar, asi mismo no neceistamos variables adicioanels para realziar el ordenamiento por lo que no se requiere de memoria extra, finalamnte para datos peuqñeos no requiere tanto tiempo de solucion junto con la lista ligada no requiere un acceso aleatorio y funciona bien con estructuras de datos enlazadas.

### Selecciona una estructura de datos adecuada al problema y lo usa correctamente.
Se utiliza una Lista ligada simple esto debido a que recorremos la lista elemento por elemento en una sola direccion lo cual es perfecto apra nuestro problema puesto que no tenemos uan cantidad inmesa de datos, asi mismo al no tener demasiados datos podemos recorrerlos rapidamante sin mucho tiempo de ejecucion. Por otra aprte al momento de agregar un dato no es necesario ponerlo en una seccion especifica, asi mismo para eliminar solo basta con recorrer la lista hasta encontrar el elmento que deseamso elimianr.

## SICT0301B: Evalúa los componentes
### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
El algortimo de selection sort tiene una complejidad temproal de O(n^2) al no tener mas de 100 datos obtenemos un rendimeitno mayor en la ejeucion del codigo. Sin embargo el peor caso con el que me podria encontrar es que cosndierando que nuestros datos estan en ASCII, el peor caso ocurre cuando el último elemento es el más pequeño, y el segundo al último es el segundo más pequeño, y así sucesivamente, es decir el primer elemento con una "a" se encuentra hasata el final del arreglo. En este escenario, en cada iteración del algoritmo de selección, se tendría que encontrar el elemento más pequeño restante en todo el arreglo y colocarlo en la posición correcta.

### Hace un análisis de complejidad correcto y completo todas las estructuras de datos y cada uno de sus usos en el programa
Consideradno que n es nuestro index tenemos que:
- Insersion: Este metodo tiene una complejidad O(n) puesto que tiene un ciclo while para recorrer la lista y llenarla en el index mas reciente.
- Eliminacion: Este metodo tiene una complejidad O(n) puesto que utilizamos un while para recorrer la lista hasta encontrar el index o elemento que deseemos elimianr.
- Busqueda: Este metodo tiene una complejidad O(n) puesto que recorremos la lista con un while hasta llegar al elmento que queremos.

Como podemos ver todas nuestros metodos son de complejidad O(n).

### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
XD

## SICT0303B: Implementa acciones científicas

### Implementa mecanismos para consultar información de las estructras correctos
XD

### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta
XD

### Implementa mecanismos de escritura de archivos para guardar los datos de las estructuras de manera correcta
XD




