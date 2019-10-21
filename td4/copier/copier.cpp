#include <fstream>
#include <iostream>
#include <string>
void copier(const std::string &entree,const std::string &sortie){
  char c;
  std::ifstream in(entree);
  if(!in.is_open()){
    perror("Error!");
    exit(EXIT_FAILURE);
  }
  std::ofstream out(sortie);
  if(!out.is_open()){
    perror("Error!");
    exit(EXIT_FAILURE);
  }
  while(in.get(c)){
    out.put(c);
  }
  in.close();
  out.close();
}

int main(){
std::string entree;
std:: string sortie;
std::cout << "Fichier d'entree: ";
std::cin >> entree;
std::cout << "Fichier de sortie: ";
std::cin >> sortie;
copier(entree, sortie);
return 0;
}
