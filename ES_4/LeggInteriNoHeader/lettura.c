#include "lettura.h"

int* leggiinteri2(const char* filename, size_t* size) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		fclose(f);
		return NULL;
	}

	size_t dim = 0;
	size_t readhandler = 1;
	size_t tmp = 0;

	while (readhandler == 1) {
		readhandler = fread(&tmp, sizeof(int), 1, f);
		dim++;
	}
	rewind(f);

	int* ris = calloc(dim  - 1, sizeof(int));
	
	readhandler = fread(ris, sizeof(int), dim - 1, f);
	if (readhandler != dim - 1) {
		free(ris);
		fclose(f);
		return NULL;
	}

	fclose(f);
	*size = dim;

	return ris;
}