#define _CRT_SECURE_NO_WARNINGS
#include"persona.h"

struct persona* leggi_persone(const char* filename, size_t* size) {
	
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		*size = 0;
		return NULL;
	}

	int elem;
	fscanf(f, "%i", &elem);
	
	if (elem == NULL) {
		*size = 0;
		return NULL;
	}

	struct persona* p = malloc(elem * sizeof(struct persona));

	char comma;
	char* cognome = calloc(255,sizeof(char));
	
	for (size_t i = 0; i < elem; i++) {
		fscanf(f, "%i", &p[i].anni);
		fscanf(f, "%c", &comma);
		fscanf(f, "%s ", p[i].nome);
		fscanf(f, "%s", cognome);
		strcat(p[i].nome, " ");
		strcat(p[i].nome, cognome);
	}
	
	*size = elem;

	fclose(f);
	free(cognome);
	return p;

}