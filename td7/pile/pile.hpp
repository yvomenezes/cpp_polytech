#pragma once
#include <string>
#include <iostream>
template<typename T>
class Pile{
public:
virtual bool estVide() const =0;
virtual void empiler(const T &t) = 0;
virtual void depiler() = 0;
virtual const T& getSommet() const = 0;
friend std::ostream& operator<< (std::ostream &out, const Pile &pile){
  return out << pile.toString();
}
virtual std::string toString() const = 0;
};
