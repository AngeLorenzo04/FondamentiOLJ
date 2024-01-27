#define _CRT_SECURE_NO_WARNINGS
#include "libri.h"

extern bool libro_scrivi(const struct libro* p, FILE* f);

int main(void) {
	char titolo[] = "abc";
	uint16_t anni[3] = { 2001,2000,0 };
	struct libro l = { titolo,anni };
	FILE* f = fopen("libro.txt", "wb");
	libro_scrivi(&l, f);

	return 0;
}