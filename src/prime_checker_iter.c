#include <stdio.h>
#include <inttypes.h>

int is_prime(int x) {
	if (x <= 1) {
		return 0;
	}

	for (uint32_t i = 2; i < x / 2; i++) {
		if ((x % i) == 0) {
			return 0;
		}
	}

	return 1;
}

int main() {
	int x = 17123;
	if (is_prime(x)) {
		printf("%d is prime\n", x);
	} else {
		printf("%d is not prime\n", x);
	}

	return 0;
}
