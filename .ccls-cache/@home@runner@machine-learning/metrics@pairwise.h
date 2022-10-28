#ifndef PAIRWISE_H
#define PAIRWISE_H

#include <math.h>
#include <stdbool.h>

typedef double ** array_double;

typedef struct POINT{ 
  double x;
  double y;
}Point;

double distance_between(Point A, Point B);
double euclidean_distances(array_double X, array_double Y);
double manhattan_distances(array_double X, array_double Y);

#endif /* PAIRWISE_H */