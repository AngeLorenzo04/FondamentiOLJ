#include <stdbool.h>
#include<stdlib.h>

size_t numcifr(unsigned int x) {
	unsigned int tmp = x;
	size_t len = 0;
	while (tmp != 0) {
		tmp /= 10;
		len++;
	}
	return len;
}

unsigned int* vectcifr(unsigned int x) {
	size_t len = numcifr(x);
	
	unsigned int* cifr = calloc(len, sizeof(int));
	unsigned int tmp = x;
	for (size_t i = len - 1; tmp >= 1; i--) {
		cifr[i] = tmp % 10;
		tmp /= 10;
	}

	return cifr;
}


bool crescente(unsigned int x) {

	size_t len = numcifr(x);
	
	if (len == 1) {
		return true;
	}

	unsigned int* cifr = vectcifr(x);
	for (size_t i = 0; i < len - 1; i++) {
		if (cifr[i + 1] != cifr[i] + 1) {
			return false;
		}
	}

	free(cifr);
	return true;
}