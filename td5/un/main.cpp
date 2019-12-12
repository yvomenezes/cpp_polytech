#include <iostream>
#include <vector>
#include "complexe.hpp"

int main(){
  Complexe *pc0 = new Complexe(3.1, 6.56);
  int *pi = new int[10];
  Complexe *pc = new Complexe[5];
  Complexe **ptpc = new Complexe* [10];
  pi[2] = 10;
  ptpc[2] = pc0;
  // std::cout << pi[2] << std::endl;
  // std::cout << pi[11] << std::endl;
  std::cout << ptpc[2] << std::endl;
  // pc[3].ecrireComplexe();
  // pc0->ecrireComplexe();
  // delete pc0;
  // delete [] pc;
  // pc0->getPimg();
  delete [] pc;
  delete pc0;

  Complexe c3(1.2, 34.9);
  std::cout << c3 << std::endl;
  return EXIT_SUCCESS;
}
