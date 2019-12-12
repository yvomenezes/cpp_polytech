#include "Carre.hpp"

void Carre::setCote(const double c){
  Rectangle::setLargeur(c);
  Rectangle::setLongueur(c);
}
double Carre::getCote() const{
  return Rectangle::getLargeur();
}
