#define _CRT_SECURE_NO_WARNINGS
#include "blockfile.h"

void printb(const struct block* b, int nblok, char* s) {
	printf("%s\n\n", s);
	for (int i = 0; i < nblok; i++) {
		printf("blocco n %i \n", i + 1 );
		printf("nome: %s\n", b[i].name);
		printf("pos: %i\n", b[i].pos);
		printf("len: %i\n", b[i].len);
		printf("contenuto: \n");
		for (int j = 0; j < b[i].len; j++) {
			printf("%c", b[i].values[j]);
		}
		
		printf("\n");
		printf("\n");
		printf("\n");
	}
}

struct block* blockfile_load(const char* filename, size_t* size, bool get_data) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	uint8_t* name = calloc(9,sizeof(uint8_t)); 
	uint64_t len;
	

	int nblok = 0;

	while (1) {
		size_t rhn = fread(name, sizeof(char), 8, f);
		if (rhn != 8) {
			break;
		}

		size_t rhlen = fread(&len, sizeof(uint64_t), 1, f);
		if (rhlen != 1) {
			break;
		}

		if (len > 0) {
			uint8_t* values = malloc(len * sizeof(uint8_t));
			size_t rhvalues = fread(values, sizeof(uint8_t), len, f);
			free(values);

		}
		
		
		nblok++;

	}

	rewind(f);
	struct block* ris = calloc(nblok , sizeof(struct block));

	for (size_t i = 0; i < nblok; i++) {
		
		size_t rhn = fread(&ris[i].name, sizeof(char), 8, f);
		if (rhn != 8) {
			fclose(f);
			break;
		}
		ris[i].name[9] = 0;
		size_t rhlen = fread(&ris[i].len, sizeof(uint64_t), 1, f);
		if (rhlen != 1) {
			fclose(f);
			break;
		}

		ris[i].pos = ftell(f);

		if (ris[i].len > 0) {
			ris[i].values = malloc(ris[i].len  * sizeof(uint8_t));
			size_t rhvalues = fread(ris[i].values, sizeof(uint8_t), ris[i].len, f);
			if (rhvalues != ris[i].len) {
				fclose(f);
				break;
			}
		}
	}
	printb(ris, nblok, "risultato");

	return ris;
}