#pragma once
#include <initializer_list>
#include <iostream>
#include <sstream>
#include "IndexException.hpp"
#include "IndexOverflow.hpp"
#include "IndexUnderflow.hpp"

template <int N, typename T>
class Tableau {
private:
  T elem[N];
public:
  //constructeur pour initialiser tous les élements à partir d'une liste de valeur.
  Tableau(const std::initializer_list<T> &t){
    int size = t.size();
    for(int i = 0; i < size; i++){
      this->elem[i] = *(t.begin()+i);
    }
  }
  //constructeur pour initialiser tous les élements à une valuer v
  Tableau(const T &v = T()){
    for(int i = 0; i < N; i++){
      this->elem[i] = v;
    }
  }
  //constructeur de copie
  Tableau(const Tableau<N,T> &t){
    for(int i = 0; i < N; i++){
      this->elem[i] = t.elem[i];
    }
  }
  //surcharge de l'opérateur d'affectation
  Tableau<N,T> &operator=(const Tableau<N,T> &t){
    for(int i = 0; i < N; i++){
      this->elem[i] = t.elem[i];
    }
    return *this;
  }
  //surcharge de l'opérateur [], renvoie une référence sur t[i]
  T &operator[](int i){
    try{
      if(i < 0){
        throw IndexUnderflow();
      }else if(i >= N){
        throw IndexOverflow();
      }else{
        return this->elem[i];
      }
    }
    catch(IndexException &ie) {
      std::cerr << ie.what() << std::endl;
    }
  }
  const std::string toString() const {
    std::ostringstream s;
    s << "[";
    for(auto e : this->elem){
      s << e << ",";
    }
    s << "]";
    return s.str();
  }
  int longueur() const{
    return N;
  }
  friend std::ostream &operator<<(std::ostream &out, const Tableau<N,T> &t){
    return out << t.toString();
  }
};
