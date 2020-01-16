#include <cstdlib>
#include <iostream>
#include <time.h>
class MonExeception {};
void h() throw (int, MonExeception, double){
  srand (time(NULL));
  int n = rand()%4;
  if(n == 0){
    throw n;
  }
  if(n == 1){
    throw MonExeception();
  }
  if(n == 2){
    throw n*1.0;
  }
}
void f() throw (MonExeception) {
  throw MonExeception();
}
void g(){
  try {
    f();
  }
  catch(MonExeception &){
    std::cerr << "Exception : MonException attrapée dans la g" << std::endl;
    throw MonExeception();
  }
}
int main() {
  try {
    g();
  }
  catch(MonExeception &){
    std::cerr << "Exception : MonException attrapée dans main" << std::endl;
  }
  // try {
  //   h();
  //   std::cout << "n = 3" << std::endl;
  // }
  // catch (int i){
  //   std::cerr << "int: " << i << std::endl;
  // }
  // catch(MonExeception &me){
  //   std::cerr << "MonExeception" << std::endl;
  // }
  // catch(...){
  //   std::cerr << "universelle " << std::endl;
  // }

  return 0;
}
