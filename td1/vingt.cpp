#include <cstdlib>
#include <iostream>
int main(){
using namespace std;
double valuers[5];
valuers[0] = 1.2;
valuers[1] = 1.3;
valuers[2] = 1.6;
valuers[3] = 12.3;
valuers[4] = 1.9;
for (double d : valuers){
  cout << d << endl;
}
return 0;
}
