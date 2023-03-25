#ifndef forme_h
#define forme_h

#include "point.h"

class Forme {

  protected :

  Point centre;

  public:
  virtual ~Forme();
  //accesseur
  Point getCentre() const;

  //constructeur
  Forme(const Point& centre);
  //méthodes
  virtual double perimetre();
  virtual double surface();

  void translater(const Point& p);

  //surcharge de l'opérateur +=
  Forme& operator+=( const Forme&f);

};

#endif /* forme_h */