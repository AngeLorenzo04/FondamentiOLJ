#include "finance.h"
int main(void) {
	char s[] = "BTC-EUR.csv";
	size_t dim = 0;
	struct value* a = read_historical_series(s, &dim);
	return 0;
}