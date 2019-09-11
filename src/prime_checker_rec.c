#include <stdio.h>
#include <inttypes.h>

int is_prime_rec(int x, uint32_t i) {
  if (i < x / 2) {
    if (x % i == 0) {
      return 0;
    }
    return is_prime_rec(x, i + 1);
  }
  return 1;
}

int is_prime(int x) {
  if (x <= 1) {
    return 0;
  }

  return is_prime_rec(x, 2);
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
