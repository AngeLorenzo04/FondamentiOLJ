#include "imperial.h"
double to_meter(const char* imperial_length) {
	double m = 0;
	double pollici = 0;
	size_t i = 0;
	
	size_t len = 0;
	while (imperial_length[len] != 0) {
		len++;
	}


	if (strstr(imperial_length, "inch") != NULL ) {
		size_t indice = imperial_length - strstr(imperial_length, "inch");
		char val[len];
	}
	if (strstr(imperial_length, "in") != NULL) {
		char* endptr;
		pollici = strtof(strstr(imperial_length, "in"), &endptr);
	}


	if (strstr(imperial_length, "inch") != NULL) {
		char* endptr;
		pollici = strtof(imperial_length, &endptr);
	}

	
	m = pollici * 0.0254;

	return m;
}