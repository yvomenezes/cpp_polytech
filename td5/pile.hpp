#ifndef _PILE_HPP_
#define _PILE_HPP_
#include <iostream>
#include <fstream>
struct PileElement{
  int valeur;
  PileElement* prochain;
};

class Pile {
private:
  PileElement* sommet;
public:
  friend std::ostream& operator << (std::ostream &out, const Pile &pile);
  Pile& operator=(const Pile &pileMere){
    this->copier(pileMere);
    return *this;
  }
  Pile() : sommet(nullptr){}
  Pile(int valeur){
    sommet = new PileElement;
    sommet->valeur = valeur;
    sommet->prochain = nullptr;
  }
  ~Pile(){
    // PileElement *presentSommet =  Pile::sommet;
    // PileElement *tempPileElement;
    // while(presentSommet != nullptr){
    //   tempPileElement = presentSommet->prochain;
    //   delete presentSommet;
    //   presentSommet = tempPileElement;
    // }
    // std::cout << "Pile Destructeur" << std::endl;
    detruire(Pile::sommet);
    std::cout << "Destructeur de copie" << std::endl;
  }
  Pile(const Pile &pileMere){
    this->copier(pileMere);
    std::cout << "Constructeur de copie" << std::endl;
  }
  void detruire(const PileElement *pileElement);
  static Pile pileVide();
  void empiler(int valeur);
  void depiler();
  void copier(const Pile &pileMere);
  int getSommet() const;
  PileElement* getSommetPtr() const;
  bool estVide() const;
  PileElement* getProchain() const;
};

#endif
