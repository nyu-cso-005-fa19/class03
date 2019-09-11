#include<stdio.h>

void ranged_temp_converter(float, float, float);

int main() {
	float start = 0;
	float upper_bound = 300;
	float step = 20;

	ranged_temp_converter(start, upper_bound, step);

  return 0;
}

void ranged_temp_converter(float curr, float stop, float step) {
	if (curr < stop) {
		float celsius = 5 * (curr - 32) / 9;
		printf("%f F = %f C\n", curr, celsius);
		ranged_temp_converter(curr + step, stop, step);
	}
}
