#include<stdio.h>

#define START 0.0
#define UPPER_BOUND 300.0
#define STEP 20

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
	ranged_temp_converter(START, UPPER_BOUND, STEP);

  return 0;
}
