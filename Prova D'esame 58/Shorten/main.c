#include <stdlib.h>
extern size_t shorten(int* v, size_t n, int max);
int main(void){
	int x[11] = { 5, 1, 7, 9, 11, 3, 8, 2, 1, 3, 5 };
	size_t new_size = shorten(x, 11, 7);
	return 0;
}