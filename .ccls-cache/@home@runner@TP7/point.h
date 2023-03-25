

class Point {

  private :
  
  double x;
  double y;
  
  public:
  
  //accesseurs
  double getX() const;
  double getY() const;
  
  //mutateurs
  void setX(double x);
  void setY(double y);  
  
  //constructeurs
  Point();
  Point(const Point& other);
  Point(double x, double y);

  //méthodes
  void translater(double dx, double dy);
  void translater(const Point& other);

  //surcharge de l'opérateur +=
  Point& operator+=( const Point&p);


  
};
