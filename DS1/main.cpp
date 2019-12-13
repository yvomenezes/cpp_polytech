#include "Polygone.hpp"
#include "Point.hpp"
#include <iostream>
#include <vector>
int main(){
std::vector<Point> vt{Point(1,1), Point(2,1), Point(2,3)};
std::vector<Point> vp{Point(1,1), Point(1,3), Point(3,5), Point(5,3), Point(5,1)};
Polygone *tringle = new Polygone(vt);
Polygone pentagone(vp);
std::cout << *tringle << std::endl;
std::cout << pentagone << std::endl;
std::cout << "Perimetre triangle: " << tringle->perimetre() << std::endl;
std::cout << "Perimetre pentagone: " << pentagone.perimetre() << std::endl;
return EXIT_SUCCESS;
}
