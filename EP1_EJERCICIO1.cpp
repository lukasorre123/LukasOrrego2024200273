#include <iostream>
using namespace std;
//funcion que muestra el dia correspondiente
void mostrarDia(int numero) {
	//aparecen en pantalla cuando el usuario elija un numero del 1 al 7
	switch (numero){
		case 1:
			cout << "El dia seleccionado es: Lunes" << endl;
			break;
		case 2:
			cout << "El dia seleccionado es: Martes" << endl;
			break;
		case 3:
			cout << "El dia seleccionado es: Miercoles" << endl;
			break;
		case 4:
			cout << "El dia seleccionado es: Jueves" << endl;
			break;
		case 5:
			cout << "El dia seleccionado es: Viernes" << endl;
			break;
		case 6: 
			cout << "El dia seleccionado es: Sabado" << endl;
			break;
		case 7:
		    cout << "El dia seleccionado es: Domingo" << endl;
		    break;
		default:
		    cout << "Error: Debe ingresar un numero del 1 al 7" << endl;
	}
}
int main () {
	int numero;
	//solicitar el numero al usuario
	cout << "Ingrese un numero del 1 al 7 \n";
	cin >>numero;
	//llamar a la funcion
	mostrarDia(numero);
	return 0;
}	
	
	
	
	

