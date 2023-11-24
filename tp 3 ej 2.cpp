#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
	int radio;
	char opcion;
	
	printf("Ingrese el radio del círculo: ");
	scanf("%d", &radio);
	
	printf("Seleccione una opción:\n");
	printf("(a) Cálculo de la longitud de la circunferencia.\n");
	printf("(b) Cálculo del área del círculo.\n");
	printf("(c) Cálculo del volumen de la esfera.\n");
	printf("Opción: ");
	scanf(" %c", &opcion);
	
	switch (opcion) {
	case 'a':
	case 'A':
	{
		int longitud_circunferencia = 2 * PI * radio;
		printf("La longitud es: %d\n", longitud_circunferencia);
		break;
	}
	case 'b':
	case 'B':
	{
		int area_circulo = PI * radio * radio;
		printf("El área es: %d\n", area_circulo);
		break;
	}
	case 'c':
	case 'C':
	{
		int volumen_esfera = (4 * PI * radio * radio * radio) / 3;
		printf("El volumen es: %d\n", volumen_esfera);
		break;
	}
	default:
		printf("Opción inválida.\n");
	}
	
	return 0;
}
