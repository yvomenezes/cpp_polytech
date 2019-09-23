#include <cstdlib>
#include <iostream>
void div(int  a, int b, int &q, int &r){
r = a - b;
q = 1;
while(r > b){
r = r - b;
q++;
}

}
int main() {
using namespace std;
int a, b, q, r;
r = 0;
q = 0;
cout << "a = ";
cin >> a;
cout << "b = ";
cin >> b;
div(a, b, q, r);
cout << endl << "q = " << q << endl <<"r = " << r <<endl;
return 0;
}
