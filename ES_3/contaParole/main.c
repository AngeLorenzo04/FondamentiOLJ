#include <stdlib.h>
extern size_t conta_parole(const char* s);

int main(void) {
	
	char s[] = "   CIAO    CANE     MICHELE   MISSERI   (|__________8";
	size_t parole = conta_parole(s);
	
	return 0;
}