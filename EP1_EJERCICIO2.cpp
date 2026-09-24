#include <iostream>
using namespace std;

//funciones para sumar
float sumar(float a, float b){
	return a + b;	
}
//funciones para restar
float restar(float a, float b){
	return a - b;
}
//funciones para multiplicar

float multiplicar(float a, float b){
	return a * b;
}
//funciones para dividir

float dividir(float a, float b){
	return a / b;
}
int main(){
	float num1, num2;
	int opcion;
	
	//solicitar los dos numeros
	cout << "Ingrese el primer numero (mayor que 0 y menor que 100): ";
	cin >> num1;
	
	cout << "Ingrese el segundo numero (mayor que 0 y menor que 100): ";
	cin >> num2;
	
	//controlar que los numeros esten dentro del rango
	if (num1 <= 0 || num1 >= 100 || num2 <= 0 || num2 >= 100){
		cout << "Error: los numeros deben ser mayores que 0 y menores que 100." << endl;
		return 0;
		
	}
	//mostrar el menu de operaciones
	cout << endl;
	cout << "1. Sumar" << endl;
	cout << "2. Restar" << endl;
	cout << "3. Multiplicar" << endl;
	cout << "4. Dividir" << endl;
	cout << "Seleccione una opcion: \n";
	cin >> opcion;
	
	//control de flujo para elegir las operaciones
	switch (opcion) {
		case 1:
			cout << "Resultado: " << sumar(num1, num2) << endl;
			break;
		case 2:
			cout << "Resultado: " << restar(num1, num2) << endl;
			break;
		case 3:	
		    cout << "Resultado: " << multiplicar(num1, num2) << endl;
		    break;
		case 4:
		    cout << "Resultado: " << dividir(num1, num2) << endl;
		    break;
		default:
			cout << "Error: opcion no valida." << endl;
			
	}
	return 0;
}
