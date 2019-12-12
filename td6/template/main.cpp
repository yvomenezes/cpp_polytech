#include "rectangle.hpp"
#include <iostream>

template <typename T>
const T& minimum(const T &t1, const T &t2){
  return t1 < t2 ? t1 : t2;
}

int main(){
  Rectangle p1(2, 3.1);
  Rectangle p2(12.1, 0.43);
  std::cout << minimum<Rectangle>(p1, p2) << std::endl;
  return EXIT_SUCCESS;
}
