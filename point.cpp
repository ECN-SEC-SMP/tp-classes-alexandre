#include <iostream>
#include "point.h"

using namespace std;

Point::Point()
{
  this->x = 0;
  this->y = 0;
}
Point::Point(const Point& other)
{
  this->x = other.x;
  this->y = other.y;
}
Point::Point(double x, double y)
{
  this->x = x;
  this->y = y;
}

double Point::getX() const{
  return x;
}

double Point::getY() const{
  return y;
}

void Point::setX(double x){
  this->x = x;
}

void Point::setY(double y){
  this->y = y;  
}

void Point::translater(double dx, double dy)
{
  x += dx;
  y += dy;
}

void Point::translater(const Point& p){
  x += p.x;
  y += p.y;
}

Point& Point::operator+=(const Point&p)
{
  x += p.x;
  y += p.y;

  return *this;
}




