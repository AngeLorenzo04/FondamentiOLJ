#include "punto.h"
int main(void) {
	struct punto_pol p = {1,1};
	struct punto_cart c = {1,1};
	cartesiano2polare(&c);
	polare2cartesiano(&p);
	return 0;
}