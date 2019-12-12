#ifndef _PILE_HPP_
#define _PILE_HPP_
#include <iostream>
class Rectangle {
private:
  double largeur;
  double longuer;
public:
  Rectangle(double largeur = 1, double longuer = 1) : largeur(largeur), longuer(longuer){}
  double surface() const;
  bool operator<(const Rectangle &r) const{
    return this->surface() < r.surface() ? true : false;
  }
  friend std::ostream& operator << (std::ostream &out, const Rectangle &r);
};
#endif
