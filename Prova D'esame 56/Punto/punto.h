#pragma once
#include <stdlib.h>
#include <math.h>
struct punto_cart {
    double x, y;
};
struct punto_pol {
    double r, t;
};
extern struct punto_pol cartesiano2polare(const struct punto_cart* p);
extern struct punto_cart polare2cartesiano(const struct punto_pol* p);