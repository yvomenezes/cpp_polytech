#include "Rectangle.hpp"
double Rectangle::getLargeur() const{
  return this->largeur;
}
double Rectangle::getLongueur() const{
  return this->longueur;
}
void Rectangle::setLargeur(double lar){
  this->largeur = lar;
}
void Rectangle::setLongueur(double lon){
  this->longueur = lon;
}
double Rectangle::perimetre() const{
  return 2*this->longueur + 2*this->largeur;
}
