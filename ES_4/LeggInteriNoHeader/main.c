#include "lettura.h"

int main(void) {
	char s[] = "dati1.bin";
	size_t dim;
	int* ris = leggiinteri2(s, &dim);
	return 0;
}