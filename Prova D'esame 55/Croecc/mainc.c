#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
extern void stampa_croce(FILE* f, size_t dim);

int main(void) {

	FILE* f = fopen("Ris.txt","w");
	stampa_croce(f, 3);
	return 0;
}