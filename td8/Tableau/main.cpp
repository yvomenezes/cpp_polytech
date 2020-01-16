#include "Tableau.hpp"
#include <iostream>
int main(int argc, char const *argv[]) {
  Tableau<5, int> ti{1,3,4,5,6};
  //Teste IndexUnderflow
  //std::cout << ti[-1];

  //Teste IndexOverflow
  std::cout << ti;
  return 0;
}
