#pragma once
#include "Point.hpp"
#include <iostream>
#include <vector>
class Polygone{
private:
  std::vector<Point> sommets;
public:
  Polygone(const std::vector<Point> &sommets) : sommets(sommets){}
  Point getSommet(int i) const;
  void setSommet(int i, const Point &point);
  double perimetre() const;
  int numSommets() const;
  friend std::ostream& operator<<(std::ostream &out, const Polygone &polygone);
};
