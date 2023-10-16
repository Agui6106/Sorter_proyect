# Oasis Data Base

Este proyecto trata sobre ordenar y bsucar una base de datos de plantas recibidas por el usario donde se considera lo siguiente
- Tener una base datos interna
- Aceptar inputs nuevas del usauario 
- Buscar algun item de la base de datos
- Ordenar estos datos e imprimirlos de vuelta.

# Estrcutura de datos Utilizada
Se utiliza una Lista ligada simple puesto que sus tiempos asintoticos para la mayoria de las acciones que haremos con nuestros datos son de complejidad O(1) o O(n) esto debido a que recorremos la lista elementop por elemento, asi mismo al no tener demasiados datos podemos almacenarlos facilmente sin ocupar demasiadad memoria e

# Algortimo de Ordenamiento a utilizar
Se utiliza el algortimo de selection sort, puesto que a pesar de tener un tiempo asintotico de (On^2) en el peor de los casos, debido a que nuetsra base de datos no es tan grande, es muy improbable que nos topemos con etse caso, puesto que todos los datos estan dados aleatoreamtne.

# Bugs y errores conocidos.
  - Se agrega un archivo de pruebas paraverficar que las funciones operen correctamante.
  - Al momento de cargar la abse de datos "plantas.txt" en el codigo fue necesario ingresar toda la direccion de la ubicacion del archivo, esto es un error desconocido y se recomienda cambiar la direecion dentro del codigo.
