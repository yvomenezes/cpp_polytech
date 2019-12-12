#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <cassert>
#include "pile.hpp"
template <typename T>
struct PileChainneeElement{
  T valeur;
  PileChainneeElement<T> *prochain;
};

template <typename T>
class PileChainnee : public Pile<T>{
private:
  PileChainneeElement<T> *sommet;
public:
  friend std::ostream& operator<< (std::ostream &out, const PileChainnee &pileChainnee){
    return out << pileChainnee.toString();
  }
  PileChainnee& operator=(const PileChainnee &pileChainneeMere){
    this->sommet = copie(pileChainneeMere.sommet);
    return *this;
  }
  PileChainnee() : sommet(nullptr){}
  PileChainnee(T valeur){
    sommet = new PileChainneeElement<T>;
    sommet->valeur = valeur;
    sommet->prochain = nullptr;
  }
  ~PileChainnee(){
    // PileChainneeElement<T> *presentSommet =  sommet;
    // PileChainneeElement<T> *tempPileChainneeElement;
    // while(presentSommet != nullptr){
    //   tempPileChainneeElement = presentSommet->prochain;
    //   delete presentSommet;
    //   presentSommet = tempPileChainneeElement;
    // }
    // std::cout << "PileChainnee Destructeur" << std::endl;
    detruire(sommet);
  }
  PileChainnee(const PileChainnee &pileChainneeMere){
    this->sommet = copie(pileChainneeMere.sommet);
  }
  PileChainnee pileVide() const{
    return PileChainnee();
  }
  void empiler(const T& valeur) override{
    PileChainneeElement<T> *pileChainneeElement = new PileChainneeElement<T>;
    pileChainneeElement->valeur = valeur;
    pileChainneeElement->prochain = sommet;
    sommet = pileChainneeElement;
  }
  void depiler() override{
    assert(!this->estVide());
      PileChainneeElement<T>* pileChainneeElement = sommet;
      sommet = pileChainneeElement->prochain;
      delete pileChainneeElement;
  }
  const T& getSommet() const override{
    assert(!this->estVide());
    return sommet->valeur;
  }
  PileChainneeElement<T>* getSommetPtr() const{
    return sommet;
  }
  bool estVide() const override{
    if(sommet == nullptr){
      return true;
    }
    return false;
  }
  PileChainneeElement<T>* getProchain() const{
    return sommet->prochain;
  }
  // void copie(const PileChainnee &pileChainneeMere){
  //   if(!pileChainneeMere.estVide()){
  //     PileChainneeElement<T> *tempPileChainneeMere = pileChainneeMere.sommet;
  //     PileChainneeElement<T> *newPileChainneeElement = new PileChainneeElement<T>;
  //     newPileChainneeElement->valeur = tempPileChainneeMere->valeur;
  //     sommet = newPileChainneeElement;
  //     while(tempPileChainneeMere->prochain != nullptr){
  //       PileChainneeElement<T> *tempPileChainneeFille = new PileChainneeElement<T>;
  //       tempPileChainneeMere = tempPileChainneeMere->prochain;
  //       tempPileChainneeFille->valeur = tempPileChainneeMere->valeur;
  //       newPileChainneeElement->prochain = tempPileChainneeFille;
  //       newPileChainneeElement = tempPileChainneeFille;
  //     }
  //   } else {
  //     sommet = nullptr;
  //   }
  // }
  PileChainneeElement<T>* copie(const PileChainneeElement<T> *pileChainneeElementMere){
    if(pileChainneeElementMere != nullptr){
      PileChainneeElement<T> *newPileChainneeElement = new PileChainneeElement<T>();
      newPileChainneeElement->valeur = pileChainneeElementMere->valeur;
      newPileChainneeElement->prochain = copie(pileChainneeElementMere->prochain);
      return newPileChainneeElement;
    }
    return nullptr;
  }
  void detruire(const PileChainneeElement<T> *pileChainneeElement){
    if (pileChainneeElement != nullptr) {
      detruire(pileChainneeElement->prochain);
      delete pileChainneeElement;
    }
  }
  std::string toString() const override{
  std::ostringstream stringElement;
  stringElement << "[";
  PileChainneeElement<T> *pileChainneeElement = this->getSommetPtr();
  while(pileChainneeElement != nullptr){
    stringElement << pileChainneeElement->valeur << ",";
    pileChainneeElement = pileChainneeElement->prochain;
  }
  stringElement << "]";
  return stringElement.str();
  }
};
