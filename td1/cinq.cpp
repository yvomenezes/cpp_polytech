#include <cstdlib>
#include <iostream>
void echanger(int &a, int &b){
int aux; 
aux = a; 
a = b; 
b = aux;
}
int main() {
using namespace std;
int a, b; 
cout << "a = "; 
cin >>a;
cout <<"b = ";
cin >>b; 
echanger(a, b); 
cout << "a = " << a << endl; 
cout << "b = " << b << endl;  

return 0;
}




