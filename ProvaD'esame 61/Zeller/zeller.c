#include<math.h>
#include<stdlib.h>
int day_of_week(int d, int m, int y) {
	
	if (d < 1 || d > 31) {
		return -1;
	}

	if (m < 1 || m>12) {
		return -1;
	}

	if (y < 0) {
		return -1;
	}

	if (m == 1) {
		m = 13;
		y--;
	}
	if (m == 2) {
		m = 14;
		y--;
	}

	int a = (int)floor(7.600f);

	int div1 = (int)floor((13 * m + 8) / 5.0f);
	int div2 = (int)floor(y / 4.0f);
	int div3 = (int)floor(y / 100.0f);
	int div4 = (int)floor(y / 400.0f);

	int w = (d + div1 + y + div2 - div3 + div4) % 7;

	return w;
 }