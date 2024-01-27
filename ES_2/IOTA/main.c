#include <stdint.h>
extern void iota(uint32_t* x, size_t n);

int main(void) {
	uint32_t vett[5];
	size_t n = 5;
	iota(vett, n);
	return 0;
}