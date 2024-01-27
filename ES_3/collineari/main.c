#include "geometria.h"
int main(int argc, struct punto argv[]) {

	struct punto p1 = {1, 9};
	struct punto p2 = {2, 4};
	struct punto p3 = {4, 2};
	colineari(p1, p2, p3);
}