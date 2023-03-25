#include <iostream>
#include "cercle.h"
#include "rectangle.h"
#include "carre.h"

using namespace std;

ostream& operator<<(ostream&s, const Point&p)
{
  s <<  "x= " << p.getX() << " y= " << p.getY() << endl;

  return s;
}

ostream& operator<<(ostream&s, const Forme&f)
{
  s <<  "centre = " << f.getCentre() << endl;

  return s;
}

ostream& operator<<(ostream& s, const Cercle& c) {
    s << "Cercle : " << c.getCentre() << ", Rayon : " << c.getRayon() << endl;
    return s;
}

ostream& operator<<(ostream& s, const Rectangle& r) {
    s << "Rectangle : " << r.getCentre()<< ", Longueur : " << r.getLongueur() << " Largeur : " << r.getLargeur() << endl;
    return s;
}

ostream& operator<<(ostream& s, const Carre& c) {
    s << "Carre : " << c.getCentre() << " Cote : " << c.getLargeur();
    return s;
}
int main() {

  
  /*Point p1;
  Point p2(2,3);
  Point p3(p2);*/
  
/************test partie 1***********/
  /*cout << "p1 = (" << p1.getX() << "," << p1.getY() << ")" << endl;

  cout << "p2 = (" << p2.getX() << "," << p2.getY() << ")" << endl;

  cout << "p3 = (" << p3.getX() << "," << p3.getY() << ")" << endl;


  p1.translater(p2);
  cout << "Translation de p1 de p2 : p1 = (" << p1.getX() << ", " << p1.getY() << ")" << endl;

  p2.translater(1.5, 2.5);
  cout << "Translation de p2 de (1.5, 2.5) : p2 = (" << p2.getX() << ", " << p2.getY() << ")" << endl;*/

  /***********test partie 2*************/
  /*cout << "p2 : " << p2 << endl;
  cout << "p3 : " << p3 << endl;  
  p2 += p3;  
  cout << "translation de p2 avec p3 " << p2 << endl;*/

  /***********test partie 3************************/
  /*Point p(2,3);
  Forme f(p);
  cout << f << endl;
  f += p;
  cout << "translation " << f << endl;
  */
  Point p1(2,2);
  Point p2(1,1);
  Cercle c(p1,5);
  Rectangle r(p1,2,6);
  Carre  ca(p1,4);
  cout << c << endl;
  cout << "surface = " << c.surface() << endl;
  cout << "perimetre = " << c.perimetre() << endl;
  cout << r << endl;
  cout << "surface = " << r.surface() << endl;
  cout << "perimetre = " << r.perimetre() << endl;
  cout << ca << endl;
  cout << "surface = " << ca.surface() << endl;
  cout << "perimetre = " << ca.perimetre() << endl;
  
  c += p2;
  r += p2;
  ca += p2;

  cout << endl << "translation des point par p(1,1) " << endl;
  cout << c << endl;
  cout << "surface = " << c.surface() << endl;
  cout << "perimetre = " << c.perimetre() << endl;
  cout << r << endl;
  cout << "surface = " << r.surface() << endl;
  cout << "perimetre = " << r.perimetre() << endl;
  cout << ca << endl;
  cout << "surface = " << ca.surface() << endl;
  cout << "perimetre = " << ca.perimetre() << endl;
  
}