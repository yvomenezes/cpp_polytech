#include "pile.hpp"

Pile Pile::pileVide(){
  return Pile();
}
void Pile::empiler(int valeur){
  PileElement *pileElement = new PileElement;
  pileElement->valeur = valeur;
  pileElement->prochain = Pile::sommet;
  Pile::sommet = pileElement;
}
void Pile::depiler(){
  if(!Pile::estVide()){
    PileElement* pileElement = Pile::sommet;
    Pile::sommet = pileElement->prochain;
    delete pileElement;
  }
}
int Pile::getSommet() const{
  if(!Pile::estVide()){
    return Pile::sommet->valeur;
  }else{
    return -1;
  }
}
PileElement* Pile::getSommetPtr() const{
  if(!Pile::estVide()){
    return Pile::sommet;
  }else{
    return nullptr;
  }
}
bool Pile::estVide() const{
  if(Pile::sommet == nullptr){
    return true;
  }
  return false;
}
PileElement* Pile::getProchain() const{
  return Pile::sommet->prochain;
}
void Pile::copier(const Pile &pileMere){
  if(!pileMere.estVide()){
    PileElement *tempPileMere = pileMere.sommet;
    PileElement *newPileElement = new PileElement;
    newPileElement->valeur = tempPileMere->valeur;
    Pile::sommet = newPileElement;
    while(tempPileMere->prochain != nullptr){
      PileElement *tempPileFille = new PileElement;
      tempPileMere = tempPileMere->prochain;
      tempPileFille->valeur = tempPileMere->valeur;
      newPileElement->prochain = tempPileFille;
      newPileElement = tempPileFille;
    }
  } else {
    Pile::sommet = nullptr;
  }
}
void Pile::detruire(const PileElement *pileElement){
  if (pileElement != nullptr) {
    detruire(pileElement->prochain);
    delete pileElement;
  }
}
std::ostream& operator << (std::ostream &out, const Pile &pile){
  if(!pile.estVide()){
    PileElement *pileElement = pile.getSommetPtr();
    while(pileElement->prochain != nullptr){
      out.write((char *) &pileElement->valeur, sizeof(int));
      pileElement = pileElement->prochain;
    }
  }
  return out;
}
