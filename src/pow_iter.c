#include <stdio.h>
#include <inttypes.h>

uint32_t pow_iter(uint32_t x, uint32_t n) {
	uint32_t res = 1;
	uint32_t i = 0;
	while (i < n) {
		res = res * x;
		i++;
	}
	return res;
}

int main() {
	uint32_t x = 5;
	uint32_t n = 7;
	uint32_t res = pow_iter(x, n);

	printf("%d^%d = %d\n", x, n, res);

	return 0;
}
