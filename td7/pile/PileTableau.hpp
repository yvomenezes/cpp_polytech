#pragma once
#include <iostream>
#include <cassert>
#include <string>
#include <sstream>
#include "pile.hpp"
template <typename T>
class PileTableau : public Pile<T>{
private:
  int sp;
  int max;
  T *lesElements;
public:
  PileTableau(int n = 100) : max(n), lesElements(new T[n]), sp(0) {}
  ~PileTableau(){
    delete[] this->lesElements;
  }
  PileTableau(const PileTableau &pileTableauMere){
    this->max = pileTableauMere.max;
    this->lesElements = new T[this->max];
    this->dupliquer(pileTableauMere);
  }
  PileTableau &operator=(const PileTableau &pileTableauMere){
    this->dupliquer(pileTableauMere);
    return *this;
  }
  bool estVide() const override{
    if(this->sp <= 0){
      return true;
    }else{
      return false;
    }
  }
  bool estPlein() const{
    if(this->sp == (this->max+1)){
      return true;
    }else{
      return false;
    }
  }
  void empiler(const T &t) override{
      assert(!this->estPlein());
      this->lesElements[sp] = t;
      this->sp++;
  }
  void depiler() override{
    assert(!this->estVide());
    this->sp--;
  }
  const T& getSommet() const override{
    return this->lesElements[this->sp-1];
  }
  void dupliquer(const PileTableau<T> &pileTableauMere){
    assert(this->max == pileTableauMere.max);
    for(int i = 0; i < this->max; i++){
      this->lesElements[i] = pileTableauMere.lesElements[i];
    }
    this->sp = pileTableauMere.sp;
  }
  std::string toString() const override{
    std::ostringstream stringElement;
    stringElement << "[";
    for(int i = 0; i < (this->sp); i++){
      stringElement << this->lesElements[i]  << ",";
    }
    stringElement << "]";
    return stringElement.str();
  }
};
