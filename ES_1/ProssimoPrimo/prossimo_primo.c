unsigned int primo(unsigned int val) {
	
	for (unsigned int i = 2; i < val - 1; i++) {
		if (val % i == 0) {
			return 0;
		}
	}
	
	return 1;
}
unsigned int prossimo_primo(unsigned int x) {
		
	unsigned int i = x + 1;
	
	while (1 > 0) {
		
		if (primo(i)) {
			return i;
		}
		
		i++;
	}

}
	
