#include <stdio.h>
#include "gcd.h"

int main(void) {
  printf("%d\n", gcd(12, 9));
  printf("%d\n", gcd(15, 25));
  printf("%d\n", gcd(122, 98));
  printf("%d\n", gcd(243, 405));
  printf("%d\n", gcd(-16, 142));
}
