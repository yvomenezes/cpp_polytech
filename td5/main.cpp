#include "pile.hpp"
#include <iostream>
#include <fstream>


void ecrirePile(const Pile pile){
  PileElement *tempPileElement = pile.getSommetPtr();
  while(tempPileElement != nullptr){
    std::cout << tempPileElement->valeur<< std::endl;
    tempPileElement = tempPileElement->prochain;
  }
}

int main() {
  // Pile pile = Pile::pilevide();
  // std::cout << "Est vide: " << pile.estvide() << std::endl;
  // pile.empiler(2);
  // pile.empiler(3);
  // int old_sommet = pile.getSommet();
  // pile.depiler();
  // int new_sommet = pile.getSommet();
  // std::cout << "Old sommet: " << old_sommet << std::endl;
  // std::cout << "New sommet: " << new_sommet << std::endl;
  // std::cout << "Est vide: " << pile.estvide() << std::endl;
  // pile.depiler();
  // std::cout << "Est vide: " << pile.estvide() << std::endl;
  // return 0;
  // using namespace std;
  // Pile p = Pile();
  // cout << p.estVide() << endl ;
  // p.empiler(5);
  // p.empiler(6);
  // p.empiler(15);
  // std::ofstream out("../pile.txt");
  // if(!out.is_open()){
  //   perror("Error!");
  //   exit(EXIT_FAILURE);
  // }
  // out << p;
  Pile p1 = Pile(10);
  p1.empiler(1);
  p1.empiler(2);
  p1.empiler(3);
  ecrirePile(p1);

  return EXIT_SUCCESS ;
}
