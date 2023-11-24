#include <stdio.h>
#include <math.h>

double funcion(double x) {
	return sin(x) * sin(x);
}

int main() {
	double x1, x2;
	int n;
	
	printf("Ingrese el valor de x1: ");
	scanf("%lf", &x1);
	
	printf("Ingrese el valor de x2: ");
	scanf("%lf", &x2);
	
	printf("Ingrese el número de rectángulos (n): ");
	scanf("%d", &n);
	
	double delta_x = (x2 - x1) / n;
	double area_total = 0.0;
	
	for (int i = 0; i < n; i++) {
		double x = x1 + (i + 0.5) * delta_x;
		double y = sin(x) * sin(x);
		double area_rectangulo = delta_x * y;
		area_total += area_rectangulo;
	}
	
	printf("El área bajo la curva entre x1 y x2 es: %.6lf\n", area_total);
	
	return 0;
}
