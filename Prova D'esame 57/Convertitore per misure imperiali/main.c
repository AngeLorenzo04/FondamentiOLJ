#include "imperial.h"
int main(void) {
	char s[] = "1 inch 3 in";
	char s1[] = "2789.97 mi";
	char s2[] = " 6' 5\" ";
	char s3[] = "100 yd.";
	char s4[] = "26 miles 385 yards";
	double m = to_meter(s);
	return 0;
}