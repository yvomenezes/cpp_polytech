#pragma once
#include <string>
class Figure {
public:
virtual ~Figure(){
  std::cout << "Destructeur Figure" << std::endl;
}
virtual std::string quisuisje() const {
  return "Une figure";
}
virtual double surface() const = 0;
};
