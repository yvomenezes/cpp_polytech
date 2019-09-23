#include <cstdlib>
#include <iostream>
void printStr(std::string str){
  for(char c : str){
    std::cout << c << "." << std::endl;
  }
}
int main(){
using namespace std;
string str = "Salut!";
printStr(str);
return 0;
}
