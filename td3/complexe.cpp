#include "complexe.hpp"
#include <iostream>
#include <cmath>
double Complexe::getPreelle(){
  return Complexe::preelle;
}
void Complexe::setPreelle(const double &r){
  Complexe::preelle = r;
}
double Complexe::getPimg(){
  return Complexe::pimg;
}
void Complexe::setPimg(const double &i){
  Complexe::pimg = i;
}
void Complexe::ecrireComplexe(){
  std::cout << "("<< Complexe::preelle <<", " << Complexe::pimg << ")" << std::endl;
}
double Complexe::rho(){
  return std::sqrt(std::pow(Complexe::preelle, 2) + std::pow(Complexe::pimg, 2));
}
double Complexe::theta(){
  return std::atan(Complexe::pimg/Complexe::preelle);
}
Complexe Complexe::polComplexe(const double &rho, const double &theta){
  return Complexe(rho*std::cos(theta), rho*std::sin(theta));
}
