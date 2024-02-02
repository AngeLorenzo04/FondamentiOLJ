#include "blockfile.h"

int main(void) {
	char s[] = "file02.bin";
	size_t size;
	struct block* a = blockfile_load(s, &size, true);
}