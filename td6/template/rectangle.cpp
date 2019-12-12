#include "rectangle.hpp"
double Rectangle::surface() const{
  return Rectangle::longuer*Rectangle::largeur;
}
std::ostream& operator << (std::ostream &out, const Rectangle &r){
  out << "Rec surface: " << r.surface();
  return out;
}
