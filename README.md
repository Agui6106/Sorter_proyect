# Oasis Data Base
Este proyecto trata sobre ordenar y buscar una base de datos de plantas ya planteadas recibidas por el usuario, donde se considera lo siguiente:

- Lectura y escritura de archivos.
- Estructura de datos tipo Linked List.
- Aceptar nuevas entradas del usuario.
- Buscar algún ítem en la base de datos.
- Ordenar estos datos e imprimirlos de vuelta.

## SICT0302B: Toma decisiones
### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
Se utiliza el método de ordenamiento principalmente porque es un algoritmo fácil de usar e implementar. Asimismo, no necesitamos variables adicionales para realizar el ordenamiento, por lo que no se requiere memoria extra. Finalmente, para conjuntos de datos pequeños, no requiere tanto tiempo de ejecución. Junto con la lista ligada, no necesita acceso aleatorio y funciona bien con estructuras de datos enlazadas.

### Selecciona una estructura de datos adecuada al problema y lo usa correctamente.
Se utiliza una lista ligada simple, esto se debe a que recorremos la lista elemento por elemento en una sola dirección, lo cual es perfecto para nuestro problema, puesto que no tenemos una cantidad inmensa de datos. Asimismo, al no tener demasiados datos, podemos recorrerlos rápidamente sin mucho tiempo de ejecución. Por otra parte, al momento de agregar un dato, no es necesario ponerlo en una sección específica; de igual manera, para eliminar, solo basta con recorrer la lista hasta encontrar el elemento que deseamos eliminar.

## SICT0301B: Evalúa los componentes
### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
El algoritmo de Selection Sort tiene una complejidad temporal de O(n^2). Al tener menos de 100 datos, obtenemos un rendimiento mayor en la ejecución del código. Sin embargo, el peor caso con el que me podría encontrar es cuando consideramos que nuestros datos están en ASCII. Este escenario adverso ocurre cuando el último elemento es el más pequeño, y el segundo al último es el segundo más pequeño, y así sucesivamente. Es decir, el primer elemento con una 'a' se encuentra hasta el final del arreglo. En este caso, en cada iteración del algoritmo de selección, se tendría que encontrar el elemento más pequeño restante en todo el arreglo y colocarlo en la posición correcta.

### Hace un análisis de complejidad correcto y completo todas las estructuras de datos y cada uno de sus usos en el programa
Considerando que n es nuestro índice, tenemos que:
- Inserción: Este método tiene una complejidad O(n) puesto que utiliza un ciclo while para recorrer la lista y llenarla en el índice más reciente.
- Eliminación: Este método tiene una complejidad O(n) puesto que utiliza un bucle while para recorrer la lista hasta encontrar el índice o elemento que deseemos eliminar.
- Búsqueda: Este método tiene una complejidad O(n) puesto que recorremos la lista con un bucle while hasta llegar al elemento que queremos.
  
Como podemos ver, todos nuestros métodos tienen complejidad O(n).

### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
Dentro de neustro codigo pricnipal 

## SICT0303B: Implementa acciones científicas

### Implementa mecanismos para consultar información de las estructras correctos
XD

### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta
XD

### Implementa mecanismos de escritura de archivos para guardar los datos de las estructuras de manera correcta
XD




