#include "complexe.hpp"
#include <iostream>

int main(int argc, char const *argv[]) {
  // Complexe c1(2.1,-6.7);
  // Complexe c2;
  // Complexe c1 = Complexe();
  // Complexe c2 = Complexe(4.5);
  // Complexe c3 = Complexe(3.2, 8.9);
  Complexe c1;
  Complexe c2(4, 5);
  Complexe c3(3, 10);
  Complexe c4(3,10);
  // c1 = 3*Complexe::i;
  bool b1,b2;
  c1 = 4 + constComplexes::i*3;
  c1.ecrireComplexe();
  // c1 = c2.rho();
  // c1 = Complexe::polComplexe(c3.rho(), c3.theta());
  // std::cout << "Reelle: " << c3.getPreelle() << " Img: " << c3.getPimg() << std::endl;
  // std::cout << "Reelle: " << c1.getPreelle() << " Img: " << c1.getPimg() << std::endl;
  // std::cout << "Rho: " << c3.rho() << " Theta: " << c3.theta() << std::endl;
  //c1.ecrireComplexe();
  // b1 = c1.egal(c2);
  // b2 = c3==c4;
  // std::cout << b1 <<std::endl;
  // std::cout << b2 << std::endl;
  // Complexe::i.ecrireComplexe();

  return 0;
}
