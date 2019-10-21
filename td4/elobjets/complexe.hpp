#ifndef _COMPLEXE_HPP_
#define _COMPLEXE_HPP_
#include <iostream>
#include <fstream>
class Complexe {
private:
   double a;
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
  friend Complexe operator+(const Complexe& c1, const Complexe &c2);
  friend std::ofstream& operator << (std::ofstream &out, const Complexe &c);
  friend std::ifstream& operator >> (std::ifstream &in, Complexe &c);
  static Complexe polComplexe(const double &rho, const double &theta);
  Complexe(const double &r = 0.0, const double &i = 0.0) : preelle(r), pimg(i) {}
  ~Complexe(){
  }
  // Complexe operator+(const Complexe &c) const{
  //   return Complexe::plus(c);
  // }
  Complexe operator-(const Complexe &c) const{
    return Complexe::moins(c);
  }
  Complexe operator*(const Complexe &c) const{
    return Complexe::mult(c);
  }
  Complexe operator*(const double &d) const{
    return Complexe::mult(d);
  }
  Complexe operator*(const int &i) const{
    return Complexe::mult(i);
  }
  Complexe operator/(const Complexe &c) const{
    return Complexe::div(c);
  }
  Complexe operator/(const double &d) const{
    return Complexe::div(d);
  }
  bool operator==(const Complexe &c) const{
    return Complexe::egal(c);
  }
  bool operator!=(const Complexe &c) const{
    return Complexe::different(c);
  }
  double getPreelle();
  void setPreelle(const double &r);
  double getPimg();
  void setPimg(const double &i);
  void ecrireComplexe();
  double rho() const;
  double theta() const;
  Complexe conjugate() const;
  Complexe plus(const Complexe &c) const;
  Complexe moins(const Complexe &c) const;
  Complexe mult(const Complexe &c) const;
  Complexe mult(const int &i) const;
  Complexe mult(const double &d) const;
  Complexe div(const Complexe &c) const;
  Complexe div(const double &d) const;
  bool egal(const Complexe &c, const double &delta = 1e-6) const;
  bool different(const Complexe &c, const double &delta = 1e-6) const;
};
namespace constComplexes{
  extern const Complexe i;
}
#endif
