#include "demography.h"

int main(void) {
	size_t val = 0;
	char s[] = "cities01.bin";
	read_cities(s, &val);
	return 0;
}