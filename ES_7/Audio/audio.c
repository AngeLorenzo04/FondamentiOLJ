#define _CRT_SECURE_NO_WARNINGS
#include "audio.h"
int audio_read(const char* filename, struct audio* a) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return 0;
	}

	uint16_t val;
	size_t campioni = 0;

	while (1) {
		size_t rh = fread(&val, sizeof(uint16_t), 1, f);
		if (rh != 1) {
			break;
		}
		campioni++;
	}
	
	campioni /= 2;
	a->samples = campioni;
	a->left = malloc(campioni * sizeof(short));
	a->right = malloc(campioni * sizeof(short));

	rewind(f);

	size_t i = 0;

	while (1) {
		size_t rhl = fread(&a->left[i], sizeof(uint16_t), 1, f);
		size_t rhr = fread(&a->right[i], sizeof(uint16_t), 1, f);
		if (rhl != 1 && rhr != 1) {
			fclose(f);
			return 1;
		}
		i++;
	}
	
	return 1;
}