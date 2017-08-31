#ifndef _ACKERMANN_H
#define _ACKERMANN_H

int ackermann(unsigned int m, unsigned int n)
{
  if (m == 0)
    return n + 1;
  if (n == 0)
    return ackermann(m - 1, n);

  return ackermann(m - 1, ackermann(m, n - 1));
}

#endif
