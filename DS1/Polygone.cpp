#include "Polygone.hpp"
#include <cmath>
#include <vector>
#include <iostream>
#include <sstream>
Point Polygone::getSommet(int i) const{
  return this->sommets[i];
}
void Polygone::setSommet(int i, const Point &point){
  this->sommets[i] = point;
}
double Polygone::perimetre() const{
  double p = 0;
  Point point = this->sommets[this->sommets.size()-1];
  for(Point sommet : this->sommets){
    p = p + sommet.distance(point);
    point = sommet;
  }
  return p;
}
int Polygone::numSommets() const {
  return this->sommets.size();
}


std::ostream& operator<<(std::ostream &out, const Polygone &polygone){
  std::ostringstream str_stream;
  str_stream << "[";
  for(int i = 0; i < polygone.numSommets(); i++){
    str_stream << polygone.getSommet(i);
  }
  str_stream << "]";
  return out << str_stream.str();
}
