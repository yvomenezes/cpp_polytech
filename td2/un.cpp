#include <cstdlib>
#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  std::string s;
  std::cout << "Donnez une chaîne de caractères: ";
  std::cin >> s;
  std::cout << s << ": longueur = " << s.lengt() << std::endl;
  return 0;
}
