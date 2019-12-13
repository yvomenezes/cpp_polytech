#pragma once
#include <ostream>
#include <cmath>
#include <sstream>
class Point{
private:
  double x, y;
public:
  Point(const double a=0, const double b=0) : x(a), y(b){}
  double getX() const{
    return this->x;
  }
  double getY() const{
    return this->y;
  }
  void setX(const double a){
    this->x = a;
  }
  void setY(const double b){
    this->x = b;
  }
  double distance(const Point &p) const{
    return std::sqrt(std::pow((this->x - p.getX()),2)+std::pow(this->y - p.getY(),2));
  }
  friend std::ostream& operator<<(std::ostream &out, const Point &p){
    std::ostringstream str_stream;
    str_stream << "(" << p.getX() << ", " << p.getY() << ")";
    return out << str_stream.str();
  }
};
