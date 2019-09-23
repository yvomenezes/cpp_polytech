#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  string s1, s2, s3;
  s1 = "Bonjour";
  s2 = " à tous";
  s3 = s1 + s2;
  cout << s3 <<endl;
  return 0;
}
