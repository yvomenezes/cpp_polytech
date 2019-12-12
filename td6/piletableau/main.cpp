#include "PileTableau.hpp"
#include "rectangle.hpp"
#include "pile.hpp"
#include <iostream>
#include <string>
int main(){
// PileTableau<int> pi1;
// PileTableau<int> pi2;
// PileTableau<std::string> ps;
// PileTableau<Rectangle> pr;
// Rectangle r(19.2, 12.3);
// PileTableau<Pile<int>> pileTableauInt;
// PileTableau<Pile<std::string>> pileTableauString;
// Pile<std::string> pileString1("Tudo bem?");
// Pile<std::string> pileString2 = Pile<std::string>(pileString1);
// Pile<int> pilha1(10);
// Pile<int> pilha2(30);
// pilha1.empiler(19);
// pilha2.empiler(11);
// pileString1.empiler("Oi");
// pileString2 = pileString1;
// std::cout << pileString2 << std::endl;
// pileString2.empiler("Oiiiii");
// pi1.empiler(6);
// pi2.empiler(10);
// ps.empiler("oi");
// pr.empiler(r);
// pileTableauInt.empiler(pilha1);
// pileTableauInt.empiler(pilha2);
// pileTableauString.empiler(pileString1);
// pileTableauString.empiler(pileString2);

// Pile<PileTableau<int>> pileChaineePileTableauInt(pi1);
// pileChaineePileTableauInt.empiler(pi2);
// std::cout << pi << std::endl;
// std::cout << ps << std::endl;
// std::cout << pr << std::endl;
// std::cout << pileTableauInt << std::endl;
// std::cout << pileTableauString << std::endl;
// std::cout << pileChaineePileTableauInt << std::endl;
// std::cout << pileString1 << std::endl;

Pile<int> p1(10);
p1.empiler(20);
std::cout << p1 << '\n';
Pile<int> p2;
p2 = p1;
p1.depiler();
// p2.empiler(10);
std::cout << p1 << '\n';
std::cout << p2 << '\n';
return EXIT_SUCCESS ;
}
