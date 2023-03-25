#include "rectangle.h"

  //accesseur
  double Rectangle::getLongueur() const
  {
    return longueur;
  }
  double Rectangle::getLargeur() const
  {
    return largeur;
  }
  //constructeur
  Rectangle::Rectangle(const Point& centre, double longueur, double largeur) : Forme(centre)
{
  this->longueur = longueur;
  this->largeur = largeur;
}

  //méthodes
double Rectangle::perimetre()
{
  return (longueur+largeur)*2;
}
double Rectangle::surface()
{
  return largeur*longueur;
}