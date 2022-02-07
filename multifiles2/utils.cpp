#include "adders.h"

int multadd2(int a, int b, int c)
{
  int tmp = add2(a, b);
  return add2(tmp, c);
}
