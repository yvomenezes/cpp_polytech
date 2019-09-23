#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[]) {
std::vector<int> v1;
std::vector<std::string> v2;
std::vector<std::vector<double>> v3;
std::vector<int> v4 = std::vector<int>(10);
std::vector<std::string> v5 = {"ab", "ef", "azy"};

std::cout << "La taille du vecteur v1 est: " << v1.size() << std::endl;
std::cout << "La taille du vecteur v2 est: " << v2.size() << std::endl;
std::cout << "La taille du vecteur v3 est: " << v3.size() << std::endl;
std::cout << "La taille du vecteur v4 est: " << v4.size() << std::endl;
std::cout << "La taille du vecteur v5 est: " << v5.size() << std::endl;
  return 0;
}
