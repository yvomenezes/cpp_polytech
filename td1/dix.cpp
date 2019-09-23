#include <cstdlib>
#include <iostream>
#define CARRE(a) ((a)*(a))
int carre(int a){
  return a*a;
}
int main(){
using namespace std;
int a = 2;
cout << CARRE(a++) << endl;
a = 2;
cout << carre(a++) << endl;
cout << a << endl;
return 0;
}
