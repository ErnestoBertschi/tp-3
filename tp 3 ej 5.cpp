#include <stdio.h>
#include <math.h>

#define NUM_VALORES 50

int main() {
	double x, y, derivada;
	
	for (int i = 0; i < NUM_VALORES; i++) {
		x = 4.0 * M_PI * i / (NUM_VALORES - 1); 
		y = sin(x);
		derivada = cos(x);
		printf("x = %.4lf, y = %.4lf, derivada = %.4lf\n", x, y, derivada);
	}
	
	return 0;
}
