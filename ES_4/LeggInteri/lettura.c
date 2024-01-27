#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"
int* leggiinteri(const char* filename, size_t* size) {
	

	FILE* f = fopen(filename, "rb");
	
	if (f == NULL) {
		return NULL;
	}
	
	size_t dim = 0;

	size_t readhandler = fread(&dim, sizeof(int), 1, f);
	if (readhandler != 1) {
		fclose(f);
		return NULL;
	}

	

	int* ris = malloc(dim * sizeof(int));
	
	readhandler = fread(ris, sizeof(int), dim , f);
	if (readhandler != dim ) {
		fclose(f);
		return NULL;
	}

	fclose(f);

	*size = dim;

	return ris;
}