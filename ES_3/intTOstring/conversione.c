#include <stdlib.h>
#include <stdint.h>

size_t len(unsigned int n) {

	size_t ris = 0;
	
	while (n > 1) {
		n /= 10;
		ris++;
	}
	
	return ris;
}

unsigned int* cifr(unsigned int n) {
	
	size_t size = len(n);
	unsigned int* cifre = malloc(size * sizeof(char));
	int cifra = 0;
	size_t i = len(n) - 1;

	
	while (n > 1) {
		cifra = n % 10;
		cifre[i] = cifra;
		n /= 10;
		i--;
	}

	return cifre;
}

char* converti(unsigned int n) {
	
	size_t size = len(n);
	char* ris = calloc(size, sizeof(char));
	unsigned int* elem = cifr(n);

	for (size_t i = 0; i < size; i++) {
		ris[i] = elem[i] + 48;
	}
	
	free(elem);

	return ris;

}