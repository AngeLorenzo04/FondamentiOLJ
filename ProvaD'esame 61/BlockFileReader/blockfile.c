#include "blockfile.h"
struct block* blockfile_load(const char* filename, size_t* size, bool get_data) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	

}