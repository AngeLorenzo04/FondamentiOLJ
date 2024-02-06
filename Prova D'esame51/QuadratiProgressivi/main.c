#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
extern void quadrati_progressivi(FILE* f, int n);

int main(void)
{
	FILE* f = fopen("ris.txt","w");
	quadrati_progressivi(f, 11);
}