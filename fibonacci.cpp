#include <cstdio>

int main(void) {
  long long x = 0;
  long long y = 1;
  long long z = x + y;

  int const n = 50;

  for (int i = 0; i != n; ++i) {
    x = y;
    y = z;
    z = x + y;

    printf("[%d] Fibonacci sequence (up to %d): %lld, %lld, %lld\n", i + 1, n, x, y, z);
  }

  return 0;
}
