#include <stdlib.h>
double fact(double base) {

	for (double i = 2; i < base - 1; i++) {
		base *= i;
	}

	return base;
}

double pot(double base, double esponente) {

	double tmp = base;

	if (esponente == 0.0) {
		return 1;
	}

	for (int i = 1; i < esponente; i++) {
		base = tmp * base;
	}
	return base;
}


double calcola_seno(double x) {
	double ris = 0.0;
	double n = 0.0;
	double temp = 1.0;
	while (temp != ris) {
		temp = ris;
		ris += pot(-1, n) * pot(x, 2 * n + 1) / fact(2 * n + 1);
		n++;
	}
	return ris;
}