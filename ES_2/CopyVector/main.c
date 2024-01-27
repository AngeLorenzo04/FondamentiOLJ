#include<stdint.h>
extern void copy_vector(uint32_t* dst, uint32_t* src, size_t n);
int main(void) {
	uint32_t dst[5];
	uint32_t src[5] = {1,4,3,2,6};
	size_t n = 5;
	copy_vector(dst, src, n);
}