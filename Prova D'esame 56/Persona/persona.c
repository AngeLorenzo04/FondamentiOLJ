#define _CRT_SECURE_NO_WARNINGS
#include "persona.h"

void printp(struct persona* p, int nper) {
	for (int i = 0; i < nper; i++) {
		printf("nome: %s\n", p[i].nome);
		printf("anni: %i\n", p[i].anni);
		printf("\n");
		printf("\n");
	}
}

struct persona* leggi_persone(const char* filename, size_t* size) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}


	int nper;
	size_t scanhadnler  = fscanf(f, "%i", &nper);
	if (scanhadnler != 1) 
	{
		*size = 0;
		fclose(f);
		return NULL;
	}

	if (nper == 0) {
		fclose(f);
		*size = 0;
		return NULL;
	}

	struct persona* ris = malloc(nper * sizeof(struct persona));
	
	
	char* cognome = malloc(255 * sizeof(char));
	
	for (int i = 0; i < nper; i++) {
		char comma = 0;
		fscanf(f, "%i", &ris[i].anni);
		if (scanhadnler != 1 || ris[i].anni < 0 || ris[i].anni > 200)
		{
			*size = i;
			fclose(f);
			return NULL;
		}
		
		while (comma != ',') {
			comma = fgetc(f);
		}
		
		fscanf(f, "%s", ris[i].nome);
		if (scanhadnler != 1)
		{
			*size = i;
			fclose(f);
			return NULL;
		}
		
		fscanf(f, "%s", cognome);
		if (scanhadnler != 1)
		{
			*size = i;
			fclose(f);
			return NULL;
		}
		
		strcat(ris[i].nome," ");
		strcat(ris[i].nome,cognome);
	}

	*size = nper;

	printp(ris,nper);
	free(cognome);
	fclose(f);
	return ris;

}