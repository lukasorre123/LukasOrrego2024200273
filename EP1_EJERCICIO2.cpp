#include <iostream>
using namespace std;


float sumar(float a, float b){
	return a + b;	
}
float restar(float a, float b){
	return a - b;
}


float multiplicar(float a, float b){
	return a * b;
}


float dividir(float a, float b){
	return a / b;
}
int main(){
	float num1, num2;
	int opcion;
	

	cout << "Ingrese el primer numero (mayor que 0 y menor que 100): ";
	cin >> num1;
	
	cout << "Ingrese el segundo numero (mayor que 0 y menor que 100): ";
	cin >> num2;
	

	if (num1 <= 0 || num1 >= 100 || num2 <= 0 || num2 >= 100){
		cout << "Error: los numeros deben ser mayores que 0 y menores que 100." << endl;
		return 0;
		
	}

	cout << endl;
	cout << "1. Sumar" << endl;
	cout << "2. Restar" << endl;
	cout << "3. Multiplicar" << endl;
	cout << "4. Dividir" << endl;
	cout << "Seleccione una opcion: \n";
	cin >> opcion;
	

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
