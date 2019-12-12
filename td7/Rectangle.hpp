#pragma once
#include <iostream>
#include "Figure.hpp"
#include <string>
class Rectangle : public Figure{
protected:
  double longueur;
  double largeur;
public:
  Rectangle(const double lon = 0, const double lar = 0) : longueur(lon), largeur(lar){}
  ~Rectangle(){
    std::cout << "Destructeur Rectangle" << std::endl;
  }
  double getLargeur() const;
  double getLongueur() const;
  void setLargeur(const double lar);
  void setLongueur(const double lon);
  double perimetre() const;
  double surface() const override{
    return this->longueur*this->largeur;
  }
  std::string quisuisje() const override{
    return "Je suis un Rectangle";
  }
};
