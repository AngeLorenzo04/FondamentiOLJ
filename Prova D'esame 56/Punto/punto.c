#include "punto.h"
struct punto_pol cartesiano2polare(const struct punto_cart* p) {
	struct punto_pol ris;
	ris.r = sqrt(pow(p->x, 2) + pow(p->y, 2));
	ris.t = atan2(p->y,p->x);
	return ris;
}
struct punto_cart polare2cartesiano(const struct punto_pol* p) {
	struct punto_cart ris;
	ris.x = p->r * cos(p->t);
	ris.y = p->r * sin(p->t);
	return ris;
}