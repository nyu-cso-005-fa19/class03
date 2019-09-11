#include <stdio.h>

int main() {
	int a = 7;
	int b = 21;
	int c = 42;

	int res_int = a < b < c;
	char res_char = a + b + c;

	printf("res_int: %d\n", res_int);
	printf("res_char: %c\n", res_char);

	int meaning = (c < b) + (b < a) + b / a + c - 3;
	printf("meaning: %d\n", meaning);

	int val;
	if (c % b * a) {
		val = a;
	} else if ((b + c) % a != c % a * 0) {
		val = b;
	} else {
		val = 0 + b + 3 * a - c - c / 1;
	}

	printf("val: %d\n", val);

	return 0;
}
