#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::string s1, s2, s3, s4;
  s1 = "Bonjour";
  s2 = " à tous";
  s3 = s1 + s2;
  auto a = s3.find('o');
  std::cout << a << std::endl;
  std::cout << s3[a] << std::endl;

  return 0;
}
