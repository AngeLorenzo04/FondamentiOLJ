#include <stdint.h>
void iota(uint32_t* x, size_t n) {
	if (x =! NULL) {
		uint32_t val = 0;
		for (size_t i = 0; i < n; i++) {
			*(x + i) = val;
			val++;
		}
	}
}