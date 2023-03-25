#ifndef rectangle_h
#define rectangle_h

#include "forme.h"

class Rectangle : public Forme{
  public :
  //accesseur
  double getLongueur() const;
  double getLargeur() const;
  //constructeur
  Rectangle(const Point& centre, double longueur, double largeur);

  //méthodes
  virtual double perimetre() override;
virtual double surface() override;
  private:
  double longueur;
  double largeur;
};

#endif /* rectangle_h */