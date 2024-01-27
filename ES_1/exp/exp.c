double esp(double base, double esp) {
	double tmp = base;
	if (esp == 0) {
		base = 1;
		return base;
	}
	
	if (esp == 1) {
		return base;
	}

	for (int i = 2; i <= esp; i++){
		base *= tmp;
	}
	
	return base;
}

double fact(double base) {
	
	for (double i = (base - 1); i >= 2; i--) {
		
		base *= i;

	}
	return base;
}

double exp(double x) {

	double e = 2.7182818284590452353602874713527;
	double ris = 0;
	double i = 1;

	if (x == 0) {
		return 1;
	}
	for (double i = 0; i < 10; i++) {
		ris = esp(x, i) / fact(i);
	}
		
	
	return ris;
}