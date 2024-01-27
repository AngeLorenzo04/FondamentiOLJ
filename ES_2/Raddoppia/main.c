#include<stdint.h>
extern void raddoppia(uint32_t* x, size_t n);
int main(void) {
	size_t n = 10;
	uint32_t vett[10] = { 0, 4, 2,  5, 6, 3, 7, 8, 9, 13};
	raddoppia(vett, n);
	vett[10];
	return 0;
}