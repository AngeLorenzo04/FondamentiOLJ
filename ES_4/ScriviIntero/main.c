#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
extern bool scrivi_intero(const char* filename, int i);

int main(void) {
	char s[] = "prova";
	scrivi_intero(s, 10);
	return 0;
}