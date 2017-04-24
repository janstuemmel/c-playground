#include "point.h"

Point add(Point a, Point b) {

  Point p = {
    a.x + b.x,
    a.y + b.y
  };

  return p;
}
