#include <cstdlib>
#include <iostream>
void p(int x, double y=12.1, char z='z'){
  using namespace std;
  cout << "x = " << x << "; y = " << y << "; z = " << z << endl;
}

int main(){
  p(9, 1.0,'a');
  p(3,'a');
  p(5, 2.3);
  p(19);
  return 0;
}
