#include<stdlib.h>
extern unsigned int conta_spazi(const char* s);
int main(void) {
	char s[] = "      a a   ";
	unsigned int sp = conta_spazi(s);
	return 0;
}