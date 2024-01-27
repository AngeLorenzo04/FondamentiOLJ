#define _CRT_SECURE_NO_WARNINGS
#include "demography.h"
struct city* read_cities(const char* filename, uint32_t* n) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	uint32_t elem = 0;
	
	size_t readhandler = fread(&elem, sizeof(uint32_t), 1, f);
	if (readhandler != 1) {
		fclose(f);
		return NULL;
	}

	

	struct city* read = malloc(elem * sizeof(struct city));
	
	


	for (size_t i = 0; i < elem; i++) {
		
		read[i].name = calloc(255, sizeof(char));
		size_t j = 0;
		char tmp = 1;
		while (tmp != 0) {
			readhandler = fread(&tmp, sizeof(char), 1, f);
			
			read[i].name[j] = tmp;
			
			if (readhandler != 1) {
				fclose(f);
				return NULL;
			}
			
			j++;

		}
		readhandler = fread(&read[i].population, sizeof(int32_t), 1, f);
		if (readhandler != 1) {
			fclose(f);
			return NULL;
		}
	}
	*n = elem;
	return read;
}
