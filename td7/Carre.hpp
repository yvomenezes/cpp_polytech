#pragma once
#include "Rectangle.hpp"
#include <iostream>
class Carre : public Rectangle{
public:
Carre(const double c) : Rectangle(c, c) {}
~Carre(){
  std::cout << "Destructeur Carre" << std::endl;
}
double getLargeur() = delete;
double getLongueur() = delete;
void setLargeur(const double lar) = delete;
void setLongueur(const double lon) = delete;

void setCote(const double c);
double getCote() const;
std::string quisuisje() const override{
  return "Je suis un carré";
}
};
