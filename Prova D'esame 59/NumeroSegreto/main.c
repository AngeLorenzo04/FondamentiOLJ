#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdlib.h>

extern char* extract_number(const char* message);

int main(void) {
	char s[] = "Ciao, uno dei miei amici mi ha lasciato sette volumetti di Demon Slayer. Ho letto fino al numero tre e la storia dei due fratelli è veramente bella.";
	char *a = extract_number(s);
	return 0;
}