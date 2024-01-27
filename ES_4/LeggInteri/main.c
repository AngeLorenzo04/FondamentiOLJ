#include"lettura.h"

int main(void) {
	char s[] = "dati1.bin";
	size_t dim;
	int* ris = leggiinteri("dati1.bin", &dim);

	free(ris);
}