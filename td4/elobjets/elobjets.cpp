#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "complexe.hpp"


int main(){
int nombre;
std::cout << "Sasissez le nombre de complexes: ";
std::cin >> nombre;

std::ifstream in("../fc");
if(!in.is_open()){
  perror("Error!");
  exit(EXIT_FAILURE);
}
std::ofstream out("../fout");
if(!out.is_open()){
  perror("Error!");
  exit(EXIT_FAILURE);
}

std::vector<Complexe> complexes1(nombre);
for(Complexe &c : complexes1){
  c.lireComplexe(in);
}
in.close();
for(Complexe &c : complexes1){
  // out.write((char *) &c, sizeof(Complexe));
  c.ecrireComplexe(out);
}
out.close();

// while(!in.eof()){
//   Complexe c;
//   // in.read((char *) &c, sizeof(Complexe));
//   c.lireComplexe(in);
// }
return 0;
}
