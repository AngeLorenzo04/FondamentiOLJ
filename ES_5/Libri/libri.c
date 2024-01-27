#define _CRT_SECURE_NO_WARNINGS
#include "libri.h"


size_t lentit(char* titolo) {
	size_t i = 0;

	while (titolo[i] != 0) {
		i++;
	}

	return i;
}

size_t lenann(uint16_t* titolo) {
	size_t i = 0;

	while (titolo[i] != 0) {
		i++;
	}

	return i;
}

bool libro_scrivi(const struct libro* p, FILE* f) {
	
	
	size_t lungtitolo = lentit(p->titolo);
	size_t numanni = lenann(p->anni_ristampe);

	size_t writehandler = fwrite(p->titolo, sizeof(char), lungtitolo + 1, f);
	if (writehandler != lungtitolo + 1) {
		fclose(f);
		return false;

	}

	size_t writehandler2 = fwrite(p->anni_ristampe, sizeof(uint16_t),numanni + 1,f);
	if (writehandler2 != numanni + 1) {
		fclose(f);
		return false;
	}
	
	fclose(f);
	return true;
}