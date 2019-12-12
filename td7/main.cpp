#include "Rectangle.hpp"
#include "Carre.hpp"
#include <vector>
#include <iostream>
int main(int argc, char const *argv[]) {
  std::vector<Figure *> vf = {new Carre(4), new Rectangle(10, 10)};
  for (Figure *f : vf){
    std::cout << "Surface: " << f->surface() << std::endl;
  }
  return EXIT_SUCCESS;
}
