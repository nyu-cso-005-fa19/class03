#include <stdio.h>
#include <inttypes.h>

uint32_t pow_rec(uint32_t, uint32_t);

int main() {
	uint32_t x = 5;
	uint32_t n = 7;
	uint32_t res = pow_rec(x, n);
	
	printf("%d^%d = %d\n", x, n, res);

  return 0;
}

uint32_t pow_rec(uint32_t x, uint32_t n) {
	if (n == 0) return 1;
	return x * pow_rec(x, n-1);
}
