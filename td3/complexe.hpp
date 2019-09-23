#pragma once
#include <iostream>
class Complexe {
private:
   double preelle;
   double pimg;
public:
  // Complexe(){
  //   this->prelle = 0.0;
  //   this->pimg = 0.0;
  // }
  // Complexe(const double r, const double i){
  //   this->prelle = r;
  //   this->pimg = i;
  // }

  static Complexe polComplexe(const double &rho, const double &theta);
  Complexe(const double r = 0.0, const double i = 0.0) : preelle(r), pimg(i) {}
  ~Complexe(){
    std::cout << "Je suis le destructeur de complexes !" << std::endl;
  }
  double getPreelle();
  void setPreelle(const double &r);
  double getPimg();
  void setPimg(const double &i);
  void ecrireComplexe();
  double rho();
  double theta();
};
