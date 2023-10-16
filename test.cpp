/*
 - Probar las funciones del archvio "funciones.h"
 - Jose Alberto Aguilar Sanchez - A01735612
 - 9/11/2023. Version 1.0
*/

#include <iostream>
#include "funciones.h"

using namespace std;

int main(){
	List<string> test;
	string ans;

	// -- Pruebas de insersion --//
	cout << "Prubas de insersion \n";

	test.Insert("Canguro");
	ans = "0 Canguro";
	cout << "\n" <<"1.- esperada \n" << ans << "\n programa \n" << test.toString() << "\n";
	cout <<	(!ans.compare(test.toString()) ? "success\n" : "fail\n");

	test.Insert("botella"); test.Insert("ARBOL"); test.Insert("toNY"); 
	ans = "0 Canguro\n1 botella\n2 ARBOL\n3 toNY";
	cout << "\n" <<"2.- esperada \n" << ans << "\n programa \n" << test.toString() << "\n";
	cout <<	(!ans.compare(test.toString()) ? "success\n" : "fail\n");

	// -- Prubas de Busqueda -- //
	cout << "Prubas de Busqueda \n";
	
	ans = "ARBOL";
	cout << "\n" <<"3.- esperada \n" << ans << "\n programa \n" << test.search_by_index(2) << "\n";
	cout <<	(!ans.compare(test.search_by_index(2)) ? "success\n" : "fail\n");

	ans = "Index no correspondiente a los datos";
	cout << "\n" <<"4.- esperada \n" << ans << "\n programa \n" << test.search_by_index(6) << "\n";
	cout <<	(!ans.compare(test.search_by_index(6)) ? "success\n" : "fail\n");

	// -- Prubas de Borrado -- //
	cout << "Prubas de Borrado \n";

	test.delete_by_index(2);
	ans = "0 Canguro\n1 botella\n2 toNY";
	cout << "\n" <<"5.- esperada \n" << ans << "\n programa \n" << test.toString() << "\n";
	cout <<	(!ans.compare(test.toString()) ? "success\n" : "fail\n");

	test.delete_by_name("Canguro");
	ans = "0 botella\n1 toNY";
	cout << "\n" <<"6.- esperada \n" << ans << "\n programa \n" << test.toString() << "\n";
	cout <<	(!ans.compare(test.toString()) ? "success\n" : "fail\n");
	
}