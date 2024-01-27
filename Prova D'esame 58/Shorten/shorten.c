#include <stdlib.h>
#include <stdio.h>
size_t shorten(int* v, size_t n, int max) {
	size_t ris = 0;
	for (size_t i = 0; i < n; i++) {
		if (v[i] <= max) {
			v[ris] = v[i];
			ris++;
		}
	}


	return ris;
}