#include "pairwise.h"

double distance_between(Point A, Point B){
  return sqrt((pow((B.x - A.x), 2) + pow((B.y - A.y), 2)));
}
double euclidean_distances(array_double X, array_double Y){
  double distance = 0;

  
  if(distance != 0)
    return sqrt(distance);
  else
    return 0;
}
double manhattan_distances(array_double X, array_double Y);