#include "cercle.h"

Cercle::Cercle(const Point& centre, double rayon)  : Forme(centre)
{
  this->centre = centre;
  this->rayon = rayon;
}

double Cercle::surface() 
{
  return 3.14 * rayon * rayon;
}
double Cercle::perimetre()
{
  return 2 * 3.14 * rayon;
}

double Cercle::getRayon() const{
  return rayon;
}

