#include <stdlib.h>
extern char** extract_parole(const char* filename, size_t* n);
int main(void) {
	size_t dim = 0;
	char s[] = "dati01.txt";
	extract_parole(s, &dim);
	return 0;
}