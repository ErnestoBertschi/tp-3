#include <stdio.h>
#include <math.h>

#define NUM_VALORES 50

int main() {
	double x, y;
	
	for (int i = 0; i < NUM_VALORES; i++) {
		x = 4.0 * M_PI * i / (NUM_VALORES - 1);
		y = sin(x) + 0.7 * cos(2 * x) + 0.5 * sin(3 * x);
		printf("x = %.4lfp, y = %.4lf\n", x / M_PI, y);
	}
	
	return 0;
}
