#include<stdint.h>
#include<stdlib.h>

uint32_t* somme_2a2(uint32_t* vett, size_t size) {
	if (vett != NULL) {

		uint32_t* ris = malloc(size / 2 * sizeof(uint32_t));
		size_t j = 0;
		for (size_t i = 0; i < size; i += 2) {

			ris[j] = vett[i] + vett[i + 1];
			j++;

		}

		return ris;
	}

	return NULL;
}