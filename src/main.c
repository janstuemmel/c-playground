#include <stdio.h>

#include "point.h"

int main(void) {

  Point p1 = { 1, 2 };
  Point p2 = { 3, 4 };

  Point p = add(p1, p2);

  printf("Point(x: %i, y: %i) \n", p.x, p.y);

  return 0;
}
