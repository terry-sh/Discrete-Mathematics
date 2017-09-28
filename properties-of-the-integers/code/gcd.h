#ifndef _GCD_H
#define _GCD_H

int gcd(int a, int b) {
  if (a <= 1) return a;
  if (b <= 1) return b;

  int r;
  while (r = a % b, r) {
    a = b;
    b = r;
  }

  return b;
};

#endif
