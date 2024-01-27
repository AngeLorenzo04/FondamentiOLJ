#include <stdlib.h>
void translate(char* str, const char* from, const char* to) {
	
	
	size_t len = 0;
	while (str[len] != 0) {
		len++;
	}
	size_t lento = 0;
	while (to[lento] != 0) {
		lento++;
	}
	size_t lenfrom = 0;
	while (from[lenfrom] != 0) {
		lenfrom++;
	}

	if (lento == lenfrom) {
		for (size_t i = 0; i < len; i++) {
				for (size_t j = 0; j < lento; j++) {
					if (str[i] = from[j]) {
						str[i] = to[j];
					}
				}
		}
	}
	

	
}