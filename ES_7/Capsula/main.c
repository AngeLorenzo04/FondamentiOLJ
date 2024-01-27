#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include<stdio.h>

extern void capsula(FILE* f, unsigned char n);

int main(void) {

	FILE* f = fopen("ris.txt", "w");
	fputs("size:1 \n", f);
	capsula(f, 1);
	fputc('\n', f);
	fputc('\n', f);
	fputs("size:2 \n", f);
	capsula(f, 2);
	fputc('\n', f);
	fputc('\n', f);
	fputs("size:3 \n", f);
	capsula(f, 3);
	fputc('\n', f);
	fputc('\n', f);
	fputs("size:4 \n", f);
	capsula(f, 4);
	fputc('\n', f);
	fputc('\n', f);
	fclose(f);
	return 0;
}