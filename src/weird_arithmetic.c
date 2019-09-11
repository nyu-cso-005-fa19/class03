#include <stdio.h>
#include <limits.h>

int main() {
	int max = INT_MAX;
	int min = INT_MIN;

	int x = max - 10 + 10 + 10;
	printf("x = %d\n", x);

	int y = 10 - 10 - 10 + max;
	printf("y = %d\n", y);

	int z = min / 5 / 5;
	int check = z * 5 * 5 == min;
	printf("check = %d\n", check);

	int last = 5 * 5 / 5 + 5 / 5 * 5;
	printf("last = %d\n", last);

	return 0;
}
