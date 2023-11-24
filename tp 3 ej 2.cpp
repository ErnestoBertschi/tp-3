#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
	int radio;
	char opcion;
	
	printf("Ingrese el radio del c�rculo: ");
	scanf("%d", &radio);
	
	printf("Seleccione una opci�n:\n");
	printf("(a) C�lculo de la longitud de la circunferencia.\n");
	printf("(b) C�lculo del �rea del c�rculo.\n");
	printf("(c) C�lculo del volumen de la esfera.\n");
	printf("Opci�n: ");
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
		printf("El �rea es: %d\n", area_circulo);
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
		printf("Opci�n inv�lida.\n");
	}
	
	return 0;
}
