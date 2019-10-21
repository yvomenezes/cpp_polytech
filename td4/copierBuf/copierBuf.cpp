#include <fstream>
#include <iostream>
#include <string>

void copierBuf(const std::string &entree, const std::string &sortie){

  std::ifstream in("../"+entree);
  if(!in.is_open()){
    perror("Error!");
    exit(EXIT_FAILURE);
  }
  std::ofstream out("../"+sortie);
  if(!out.is_open()){
    perror("Error!");
    exit(EXIT_FAILURE);
  }
  char buf[BUFSIZ];
  while(!in.eof()){
    in.read(buf, BUFSIZ);
    out.write(buf, in.gcount());
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
copierBuf(entree, sortie);
return 0;
}
