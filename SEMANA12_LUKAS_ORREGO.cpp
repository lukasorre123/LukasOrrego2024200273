#include <stdio.h>

struct Personaje {
	char nombre[30];
	int fuerza;
	
};
 
int main () {
	struct Personaje p1, p2;
	printf("=== Dragon Ball Z === \n\n");
	
	printf("Ingrese el nombre del primer personaje: ");
	scanf(" %29[^\n]", p1.nombre);
	
	printf("Ingrese sus puntos de fuerza: ");
	scanf(" %d", &p1.fuerza);
	
	printf("Ingrese el nombre del segundo personaje: ");
	scanf(" %29[^\n]", p2.nombre);
	
	printf("Ingrese sus puntos de fuerza: ");
	scanf("%d", &p2.fuerza);
	
	printf("\n=== RESULTADOS DEL COMBATE ===\n");
	printf("%s: %d puntos de fuerza\n", p1.nombre, p1.fuerza);
	printf("%s: %d puntos de fuerza\n", p2.nombre, p2.fuerza);
	
	if (p1.fuerza > p2.fuerza) {
		printf("\n%s es el personaje mas fuerte!\n", p1.nombre);
	} else if (p2.fuerza > p1.fuerza) {
		printf("\n%s es el personaje mas fuerte!\n", p2.nombre);
	} else {
	    printf ("\nAmbos personajes tienen la misma fuerza!\n");
	}
	
	return 0;
}

