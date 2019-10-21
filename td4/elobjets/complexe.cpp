#include "complexe.hpp"
#include <iostream>
#include <cmath>
const Complexe constComplexes::i(0,1);

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
double Complexe::rho() const{
  return std::sqrt(std::pow(Complexe::preelle, 2) + std::pow(Complexe::pimg, 2));
}
double Complexe::theta() const{
  return std::atan(Complexe::pimg/Complexe::preelle);
}
Complexe Complexe::conjugate() const{
  return Complexe(Complexe::preelle, -Complexe::pimg);
}
Complexe Complexe::polComplexe(const double &rho, const double &theta){
  return Complexe(rho*std::cos(theta), rho*std::sin(theta));
}
Complexe Complexe::plus(const Complexe &c) const{
  return Complexe(Complexe::preelle + c.preelle, Complexe::pimg + c.pimg);
}
Complexe Complexe::moins(const Complexe &c) const{
  return Complexe(Complexe::preelle - c.preelle, Complexe::pimg - c.pimg);
}
Complexe Complexe::mult(const double &d) const{
  return Complexe(d*Complexe::preelle, d*Complexe::pimg);
}
Complexe Complexe::mult(const int &i) const{
  return Complexe(i*Complexe::preelle, i*Complexe::pimg);
}
Complexe Complexe::mult(const Complexe &c) const{
  return Complexe(Complexe::preelle*c.preelle - Complexe::pimg*c.pimg, Complexe::preelle*c.pimg + Complexe::pimg*c.preelle);
}
Complexe Complexe::div(const double &d) const{
  return Complexe(Complexe::preelle/d, Complexe::pimg/d);
}
Complexe Complexe::div(const Complexe &c) const{
  return (Complexe::mult(c.conjugate()))/c.rho();
}
bool Complexe::egal(const Complexe &c, const double &delta) const{
  if (std::abs(Complexe::preelle - c.preelle) < delta && std::abs(Complexe::pimg - c.pimg) < delta){
    return true;
  }else{
    return false;
  }
}
bool Complexe::different(const Complexe &c, const double &delta) const{
  if (std::abs(Complexe::preelle - c.preelle) > delta || std::abs(Complexe::pimg - c.pimg) > delta){
    return true;
  }else{
    return false;
  }
}
Complexe operator+(const Complexe &c1, const Complexe &c2){
  return c1.plus(c2);
}
std::ofstream& operator << (std::ofstream &out, const Complexe &c){
  out.write((char *) &c, sizeof(Complexe));
  return out;
}
std::ifstream& operator >> (std::ifstream &in, Complexe &c){
  in.read((char *) &c, sizeof(Complexe));
  return in;
}
