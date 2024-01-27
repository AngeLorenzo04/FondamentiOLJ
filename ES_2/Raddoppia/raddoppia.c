#include <stdint.h>
void raddoppia(uint32_t* x, size_t n) {
	
	if (x != NULL) {
		for (size_t i = 0; i < n; i++) {
			*x *= 2;
			x++;
		}
	}

}