#include "little_alchemy.h"
const char* combine(const char* first, const char* second, const struct element* elems, size_t n) {
	
	for (size_t i = 0; i < n; i++) {
		if (strcmp(first, elems->first) == 0 || strcmp(first, elems->second) == 0) {
			if (strcmp(second, elems->first) == 0 || strcmp(second, elems->second) == 0) {
				return elems->product;
			}
		}
		
		elems++;
	}
	return NULL;
}