#define _CRT_SECURE_NO_WARNINGS
#include "finance.h"


struct value* read_historical_series(const char* filename, size_t* n) {
	FILE* f = fopen(filename, "r");

	if (f == NULL) {
		fclose(f);
		return NULL;
	}

	char* valread = calloc(12, sizeof(char));
	char* endptr;
	size_t elem = 0;
	do {

		size_t readhandler = fread(valread, sizeof(char), 1, f);
		if (readhandler != 1) {
			fclose(f);
			return NULL;
		}

	} while (*valread != '\n');

	size_t readhandler;
	do {

		readhandler = fread(valread, sizeof(char), 1, f);
		if (*valread == '\n') {
			elem++;
		}


	} while (readhandler == 1);

	struct value* ris = malloc((elem + 1) * sizeof(struct value));
	
	rewind(f);

	do {

		size_t readhandler = fread(valread, sizeof(char), 1, f);
		if (readhandler != 1) {
			fclose(f);
			return NULL;
		}

	} while (*valread != '\n');

	size_t tmp = elem + 1;
	while(tmp != 0)
	{
		size_t readhandler = fread(ris->Date, sizeof(char), 10, f);
		if (readhandler != 10) {
			fclose(f);
			return NULL;
		}
		ris->Date[10] = 0;

		readhandler = fread(valread, sizeof(char), 1, f);

		readhandler = fread(valread, sizeof(char), 12, f);
		if (readhandler != 12) {
			fclose(f);
			return NULL;
		}
		ris->Open = strtof(valread, &endptr);

		readhandler = fread(valread, sizeof(char), 1, f);

		readhandler = fread(valread, sizeof(char), 12, f);
		if (readhandler != 12) {
			fclose(f);
			return NULL;
		}
		ris->High = strtof(valread, &endptr);

		readhandler = fread(valread, sizeof(char), 1, f);

		readhandler = fread(valread, sizeof(char), 12, f);
		if (readhandler != 12) {
			fclose(f);
			return NULL;
		}
		ris->Low = strtof(valread, &endptr);

		readhandler = fread(valread, sizeof(char), 1, f);

		readhandler = fread(valread, sizeof(char), 12, f);
		if (readhandler != 12) {
			fclose(f);
			return NULL;
		}
		ris->Close = strtof(valread, &endptr);

		readhandler = fread(valread, sizeof(char), 1, f);

		readhandler = fread(valread, sizeof(char), 12, f);
		if (readhandler != 12) {
			fclose(f);
			return NULL;
		}
		ris->AdjClose = strtof(valread, &endptr);

		readhandler = fread(valread, sizeof(char), 1, f);

		readhandler = fread(valread, sizeof(char), 11, f);
		if (readhandler != 11) {
			fclose(f);
			return NULL;
		}
		ris->Volume = strtol(valread, &endptr, 10);
		
		if (tmp != 1) {
			readhandler = fread(valread, sizeof(char), 1, f);
			if (readhandler != 1) {
				fclose(f);
				return NULL;
			}
			ris++;
		}
		
		tmp--;
	}

	*n = elem + 1;
	free(valread);

	return ris;

}