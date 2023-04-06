#include <stdio.h>
#include <stdlib.h>

void count(void) {
  static int count = 0;
  count++;
  printf("Funkcja count() zostala wywolana %d razy.\n", count);
}

int main() {
  count();
  count();
  count();
  return 0;
}
