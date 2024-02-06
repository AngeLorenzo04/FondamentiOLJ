#include "paridispari.h"
void paridispari(int* v, size_t n) {

	if (v != NULL && n > 0) {

		int* ris = calloc(n, sizeof(int));

		size_t j = 0;
		size_t k = n - 1;
		for (size_t i = 0; i < n; i++) {
			if (v[i] % 2 == 0) {
				ris[j] = v[i];
				j++;
			}
			else if (v[i] % 2 != 0) {
				ris[k] = v[i];
				k--;
			}
		}

		for (size_t i = 0; i < n; i++) {
			v[i] = ris[i];
		}

		free(ris);
	}
}