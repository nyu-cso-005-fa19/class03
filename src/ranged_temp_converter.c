#include<stdio.h>

void ranged_temp_converter(float start, float upper_bound, float step) {
	float current_fahr = start;
	float celsius;
	while (current_fahr < upper_bound) {
		celsius =  5 * (current_fahr - 32) / 9;
		printf("%f F = %f C\n", current_fahr, celsius);
		current_fahr = current_fahr + step;
	}
}

int main() {
	float start = 0;
	float upper_bound = 300;
	float step = 20;

	ranged_temp_converter(start, upper_bound, step);

	return 0;
}
