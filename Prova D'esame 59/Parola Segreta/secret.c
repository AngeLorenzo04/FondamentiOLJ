#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdlib.h>

char* extract_number(const char* message) {
	
	size_t len = 0;
	size_t counter = 0;
	char ris[] = "";
	while (message[len] != '0') {
		len++;
	}

	char* ptr = strstr(message," uno ");
	if (ptr != NULL) {
		counter++;
		char num[] = "1";
		strcat(ris, num);
	}
	ptr = strstr(message," due ");
	if (ptr != NULL) {
		counter++;
		char num[] = "2";
		strcat(ris, num);
	}
	ptr = strstr(message," tre ");
	if (ptr != NULL) {
		counter++;
		char num[] = "3";
		strcat(ris, num);
	}
	ptr = strstr(message," quattro ");
	if (ptr != NULL) {
		counter++;
		char num[] = "4";
		strcat(ris, num);
	}
	ptr = strstr(message," cinque ");
	if (ptr != NULL) {
		counter++;
		char num[] = "5";
		strcat(ris, num);
	}
	ptr = strstr(message," sei ");
	if (ptr != NULL) {
		counter++;
		char num[] = "6";
		strcat(ris, num);
	}
	ptr = strstr(message," sette ");
	if (ptr != NULL) {
		counter++;
		char num[] = "7";
		strcat(ris, num);
	}
	ptr = strstr(message, " otto ");
	if (ptr != NULL) {
		counter++;
		char num[] = "8";
		strcat(ris, num);
	}
	ptr = strstr(message, " nove ");
	if (ptr != NULL) {
		counter++;
		char num[] = "9";
		strcat(ris, num);
	}
	

	return ris;
}