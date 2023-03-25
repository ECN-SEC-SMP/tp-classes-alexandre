#include "forme.h"

Forme::~Forme(){}
Forme::Forme(const Point& centre)
{
  this->centre = centre;
}
Point Forme::getCentre()const{
  return centre;
}

void Forme::translater(const Point& p)
{
  centre += p; 
}

  //surcharge de l'opérateur +=
  Forme& Forme::operator+=(const Forme&f)
    {
      centre += f.centre;

      return *this;
    }

double Forme::surface() 
{
  
}
double Forme::perimetre()
{
  
}