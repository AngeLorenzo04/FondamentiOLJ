extern int divisione(double a, double b, double* q) {
	
	if (*q == a / b) {
		return 0;
	}

	if (b != 0) {
		*q = a / b;
	}
	else {
		return 0;
	}
	
	return 1;
}