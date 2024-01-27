#include "persona.h"
int main(void) {
	size_t size;
	char s[] = "file1.txt";
	struct persona* p = leggi_persone(s,&size);
	return 0;
}