#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "complexe.hpp"

std::vector<Complexe> lireComplexe(){
  int nombre;
  double re, img;
  std::cout << "Sasissez le nombre de complexes: ";
  std::cin >> nombre;
  std::vector<Complexe> complexes(nombre);
  for(Complexe &c : complexes){
    std::cout << "Reelle: ";
    std::cin >> re;
    std::cout << "Img: ";
    int n, i;
    std::cin >> img;
    c.setPreelle(re);
    c.setPimg(img);
  }
  return complexes;
}

int main(){
std::vector<Complexe> complexes1 = lireComplexe();
std::ofstream out("../fc");
if(!out.is_open()){
  perror("Error!");
  exit(EXIT_FAILURE);
}
std::ifstream in("../fc");
if(!in.is_open()){
  perror("Error!");
  exit(EXIT_FAILURE);
}

for(Complexe &c : complexes1){
  // out.write((char *) &c, sizeof(Complexe));
  out << c;
}
out.close();

while(!in.eof()){
  Complexe c;
  // in.read((char *) &c, sizeof(Complexe));
  in >> c;
  c.ecrireComplexe();
}
in.close();
return 0;
}
