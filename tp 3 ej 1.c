#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
	int radio;
	char opcion;
	
	printf("Ingrese el radio del círculo: ");
	scanf("%d", &radio);
	
	printf("Seleccionar opción:\n");
	printf("(a) Cálculo de la longitud de la circunferencia.\n");
	printf("(b) Cálculo del área del círculo.\n");
	printf("(c) Cálculo del volumen de la esfera.\n");
	printf("Opción: ");
	scanf(" %c", &opcion); 
	
	if (opcion == 'a' || opcion == 'A') {
		int longitud_circunferencia = 2 * PI * radio;
		printf("La longitud es: %d\n", longitud_circunferencia);
	} else if (opcion == 'b' || opcion == 'B') {
		int area_circulo = PI * radio * radio;
		printf("El área es: %d\n", area_circulo);
	} else if (opcion == 'c' || opcion == 'C') {
		int volumen_esfera = (4 * PI * radio * radio * radio) / 3;
		printf("El volumen es: %d\n", volumen_esfera);
	} else {
		printf("Opción inválida.\n");
	}
	
	return 0;
}

