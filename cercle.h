#ifndef cercle_h
#define cercle_h

#include "forme.h"

class Cercle : public Forme{
  public :
  //accesseur
  double getRayon() const;
  //constructeur
  Cercle(const Point& centre, double rayon);

  //méthodes
  virtual double perimetre() override;
virtual double surface() override;
  private:
  double rayon;
};

#endif /* cercle_h */