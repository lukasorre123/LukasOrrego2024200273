#include <cstdlib>
#include <iostream>
using namespace std;
int main (){
	char c;
	for (cout << "Ingrese un caracter: ", cin >> c;
	     c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u';
	     cout << "Ingrese un caracter: ", cin >> c);
	cout << "Vocal minuscula ingresada: " << c << endl;
	system ("PAUSE");
	return EXIT_SUCCESS;
}
