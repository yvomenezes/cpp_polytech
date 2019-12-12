#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <cassert>
template <typename T>
struct PileElement{
  T valeur;
  PileElement<T> *prochain;
};

template <typename T>
class Pile {
private:
  PileElement<T> *sommet;
public:
  friend std::ostream& operator<< (std::ostream &out, const Pile &pile){
    return out << pile.toString();
  }
  Pile& operator=(const Pile &pileMere){
    this->sommet = copie(pileMere.sommet);
    return *this;
  }
  Pile() : sommet(nullptr){}
  Pile(T valeur){
    sommet = new PileElement<T>;
    sommet->valeur = valeur;
    sommet->prochain = nullptr;
  }
  ~Pile(){
    // PileElement<T> *presentSommet =  sommet;
    // PileElement<T> *tempPileElement;
    // while(presentSommet != nullptr){
    //   tempPileElement = presentSommet->prochain;
    //   delete presentSommet;
    //   presentSommet = tempPileElement;
    // }
    // std::cout << "Pile Destructeur" << std::endl;
    detruire(sommet);
  }
  Pile(const Pile &pileMere){
    this->sommet = copie(pileMere.sommet);
  }
  Pile pileVide(){
    return Pile();
  }
  void empiler(T valeur){
    PileElement<T> *pileElement = new PileElement<T>;
    pileElement->valeur = valeur;
    pileElement->prochain = sommet;
    sommet = pileElement;
  }
  void depiler(){
    assert(!this->estVide());
      PileElement<T>* pileElement = sommet;
      sommet = pileElement->prochain;
      delete pileElement;
  }
  int getSommet() const{
    assert(!this->estVide());
    return sommet->valeur;
  }
  PileElement<T>* getSommetPtr() const{
    return sommet;
  }
  bool estVide() const{
    if(sommet == nullptr){
      return true;
    }
    return false;
  }
  PileElement<T>* getProchain() const{
    return sommet->prochain;
  }
  // void copie(const Pile &pileMere){
  //   if(!pileMere.estVide()){
  //     PileElement<T> *tempPileMere = pileMere.sommet;
  //     PileElement<T> *newPileElement = new PileElement<T>;
  //     newPileElement->valeur = tempPileMere->valeur;
  //     sommet = newPileElement;
  //     while(tempPileMere->prochain != nullptr){
  //       PileElement<T> *tempPileFille = new PileElement<T>;
  //       tempPileMere = tempPileMere->prochain;
  //       tempPileFille->valeur = tempPileMere->valeur;
  //       newPileElement->prochain = tempPileFille;
  //       newPileElement = tempPileFille;
  //     }
  //   } else {
  //     sommet = nullptr;
  //   }
  // }
  PileElement<T>* copie(const PileElement<T> *pileElementMere){
    if(pileElementMere != nullptr){
      PileElement<T> *newPileElement = new PileElement<T>();
      newPileElement->valeur = pileElementMere->valeur;
      newPileElement->prochain = copie(pileElementMere->prochain);
      return newPileElement;
    }
    return nullptr;
  }
  void detruire(const PileElement<T> *pileElement){
    if (pileElement != nullptr) {
      detruire(pileElement->prochain);
      delete pileElement;
    }
  }
  std::string toString() const{
  std::ostringstream stringElement;
  stringElement << "[";
  PileElement<T> *pileElement = this->getSommetPtr();
  while(pileElement != nullptr){
    stringElement << pileElement->valeur << ",";
    pileElement = pileElement->prochain;
  }
  stringElement << "]";
  return stringElement.str();
  }
};
